
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {unsigned char* packet; struct input_dev* dev; struct elantech_data* private; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ reports_pressure; } ;
struct elantech_data {TYPE_1__ info; int y_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct input_dev*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct input_dev*,int ,unsigned int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,unsigned char) ;

__attribute__((used)) static void FUNC_5(struct psmouse *VAR_9)
{
 struct elantech_data *VAR_10 = VAR_9->private;
 struct input_dev *VAR_11 = VAR_9->dev;
 unsigned char *VAR_12 = VAR_9->packet;
 unsigned int VAR_13, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 unsigned int VAR_18 = 0, VAR_19 = 0;


 VAR_13 = (VAR_12[0] & 0xc0) >> 6;

 switch (VAR_13) {
 case 3:




  if (VAR_12[3] & 0x80)
   VAR_13 = 4;

 case 1:




  VAR_14 = ((VAR_12[1] & 0x0f) << 8) | VAR_12[2];




  VAR_15 = VAR_10->y_max - (((VAR_12[4] & 0x0f) << 8) | VAR_12[5]);

  VAR_19 = (VAR_12[1] & 0xf0) | ((VAR_12[4] & 0xf0) >> 4);
  VAR_18 = ((VAR_12[0] & 0x30) >> 2) | ((VAR_12[3] & 0x30) >> 4);
  break;

 case 2:






  VAR_14 = (((VAR_12[0] & 0x10) << 4) | VAR_12[1]) << 2;

  VAR_15 = VAR_10->y_max -
   ((((VAR_12[0] & 0x20) << 3) | VAR_12[2]) << 2);




  VAR_16 = (((VAR_12[3] & 0x10) << 4) | VAR_12[4]) << 2;

  VAR_17 = VAR_10->y_max -
   ((((VAR_12[3] & 0x20) << 3) | VAR_12[5]) << 2);


  VAR_19 = 127;
  VAR_18 = 7;
  break;
 }

 FUNC_2(VAR_11, VAR_8, VAR_13 != 0);
 if (VAR_13 != 0) {
  FUNC_1(VAR_11, VAR_2, VAR_14);
  FUNC_1(VAR_11, VAR_3, VAR_15);
 }
 FUNC_0(VAR_11, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);
 FUNC_2(VAR_11, VAR_5, VAR_13 == 1);
 FUNC_2(VAR_11, VAR_4, VAR_13 == 2);
 FUNC_2(VAR_11, VAR_7, VAR_13 == 3);
 FUNC_2(VAR_11, VAR_6, VAR_13 == 4);
 FUNC_4(VAR_11, VAR_12[0]);
 if (VAR_10->info.reports_pressure) {
  FUNC_1(VAR_11, VAR_0, VAR_19);
  FUNC_1(VAR_11, VAR_1, VAR_18);
 }

 FUNC_3(VAR_11);
}
