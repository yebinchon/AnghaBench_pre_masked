
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {unsigned char* packet; struct elantech_data* private; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
struct elantech_data {int info; int y_max; TYPE_1__* mt; } ;
struct TYPE_2__ {unsigned char x; unsigned int y; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct input_dev*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct input_dev*,int ,unsigned int) ;
 int FUNC_3 (struct input_dev*,int ,unsigned char) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,unsigned char) ;

__attribute__((used)) static void FUNC_6(struct psmouse *VAR_10,
     int VAR_11)
{
 struct input_dev *VAR_12 = VAR_10->dev;
 struct elantech_data *VAR_13 = VAR_10->private;
 unsigned char *VAR_14 = VAR_10->packet;
 unsigned int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;
 unsigned int VAR_20 = 0, VAR_21 = 0;


 VAR_15 = (VAR_14[0] & 0xc0) >> 6;

 switch (VAR_15) {
 case 3:
 case 1:




  VAR_16 = ((VAR_14[1] & 0x0f) << 8) | VAR_14[2];




  VAR_17 = VAR_13->y_max - (((VAR_14[4] & 0x0f) << 8) | VAR_14[5]);
  break;

 case 2:
  if (VAR_11 == VAR_9) {




   VAR_13->mt[0].x = ((VAR_14[1] & 0x0f) << 8) | VAR_14[2];




   VAR_13->mt[0].y = VAR_13->y_max -
    (((VAR_14[4] & 0x0f) << 8) | VAR_14[5]);



   return;
  }


  VAR_16 = VAR_13->mt[0].x;
  VAR_17 = VAR_13->mt[0].y;
  VAR_18 = ((VAR_14[1] & 0x0f) << 8) | VAR_14[2];
  VAR_19 = VAR_13->y_max - (((VAR_14[4] & 0x0f) << 8) | VAR_14[5]);
  break;
 }

 VAR_21 = (VAR_14[1] & 0xf0) | ((VAR_14[4] & 0xf0) >> 4);
 VAR_20 = ((VAR_14[0] & 0x30) >> 2) | ((VAR_14[3] & 0x30) >> 4);

 FUNC_3(VAR_12, VAR_8, VAR_15 != 0);
 if (VAR_15 != 0) {
  FUNC_2(VAR_12, VAR_2, VAR_16);
  FUNC_2(VAR_12, VAR_3, VAR_17);
 }
 FUNC_1(VAR_12, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);
 FUNC_3(VAR_12, VAR_6, VAR_15 == 1);
 FUNC_3(VAR_12, VAR_5, VAR_15 == 2);
 FUNC_3(VAR_12, VAR_7, VAR_15 == 3);


 if (FUNC_0(&VAR_13->info))
  FUNC_3(VAR_12, VAR_4, VAR_14[0] & 0x03);
 else
  FUNC_5(VAR_12, VAR_14[0]);

 FUNC_2(VAR_12, VAR_0, VAR_21);
 FUNC_2(VAR_12, VAR_1, VAR_20);

 FUNC_4(VAR_12);
}
