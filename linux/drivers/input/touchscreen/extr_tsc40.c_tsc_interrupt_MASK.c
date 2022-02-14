
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc_ser {unsigned char* data; size_t idx; struct input_dev* dev; } ;
struct serio {int dev; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned char,...) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*) ;
 struct tsc_ser* FUNC_3 (struct serio*) ;
 int FUNC_4 (struct tsc_ser*) ;
 int FUNC_5 (unsigned char) ;

__attribute__((used)) static irqreturn_t FUNC_6(struct serio *VAR_2,
  unsigned char VAR_3, unsigned int VAR_4)
{
 struct tsc_ser *VAR_5 = FUNC_3(VAR_2);
 struct input_dev *VAR_6 = VAR_5->dev;

 VAR_5->data[VAR_5->idx] = VAR_3;
 switch (VAR_5->idx++) {
 case 0:
  if (FUNC_5((VAR_3 & 0x3e) != 0x10)) {
   FUNC_0(&VAR_2->dev,
    "unsynchronized packet start (0x%02x)\n", VAR_3);
   VAR_5->idx = 0;
  } else if (!(VAR_3 & 0x01)) {
   FUNC_1(VAR_6, VAR_0, 0);
   FUNC_2(VAR_6);
   VAR_5->idx = 0;
  }
  break;

 case 1:
 case 3:
  if (FUNC_5(VAR_3 & 0xfc)) {
   FUNC_0(&VAR_2->dev,
    "unsynchronized data 0x%02x at offset %d\n",
    VAR_3, VAR_5->idx - 1);
   VAR_5->idx = 0;
  }
  break;

 case 4:
  FUNC_4(VAR_5);
  VAR_5->idx = 0;
  break;
 }

 return VAR_1;
}
