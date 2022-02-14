
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {int dummy; } ;
struct TYPE_2__ {unsigned char ibuf; int state; int* channel; size_t offset; } ;
struct fsia6b {TYPE_1__ packet; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 int * VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 struct fsia6b* FUNC_3 (struct serio*) ;
 int * VAR_4 ;

__attribute__((used)) static irqreturn_t FUNC_4(struct serio *VAR_5,
        unsigned char VAR_6, unsigned int VAR_7)
{
 struct fsia6b *VAR_8 = FUNC_3(VAR_5);
 int VAR_9;
 int VAR_10;
 int VAR_11 = VAR_0;

 VAR_8->packet.ibuf = (VAR_6 << 8) | ((VAR_8->packet.ibuf >> 8) & 0xFF);

 switch (VAR_8->packet.state) {
 case 128:
  if (VAR_8->packet.ibuf == 0x4020)
   VAR_8->packet.state = 130;
  break;

 case 130:
  VAR_8->packet.state = 129;
  break;

 case 129:
  VAR_8->packet.channel[VAR_8->packet.offset] =
    VAR_8->packet.ibuf;
  VAR_8->packet.offset++;

  if (VAR_8->packet.offset == VAR_1) {
   VAR_8->packet.offset = 0;
   VAR_8->packet.state = 128;
   for (VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9) {
    FUNC_0(VAR_8->dev, VAR_3[VAR_9],
       VAR_8->packet.channel[VAR_9]);

    VAR_10 = 0;
    if (VAR_8->packet.channel[VAR_9] > 1900)
     VAR_10 = 1;
    else if (VAR_8->packet.channel[VAR_9] < 1100)
     VAR_10 = 2;

    switch (VAR_4[VAR_9]) {
    case '3':
     FUNC_1(VAR_8->dev,
        VAR_11++,
        VAR_10 == 0);

    case '2':
     FUNC_1(VAR_8->dev,
        VAR_11++,
        VAR_10 == 1);

    case '1':
     FUNC_1(VAR_8->dev,
        VAR_11++,
        VAR_10 == 2);
    }
   }
   FUNC_2(VAR_8->dev);
  } else {
   VAR_8->packet.state = 130;
  }
  break;
 }

 return VAR_2;
}
