
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct elantech_data* private; struct input_dev* dev; } ;
struct input_dev {int keybit; int propbit; int evbit; } ;
struct elantech_device_info {unsigned int x_min; unsigned int y_min; unsigned int x_max; unsigned int y_max; unsigned int width; int hw_version; int fw_version; int* capabilities; int y_res; int x_res; int reports_pressure; scalar_t__ has_middle_button; } ;
struct elantech_data {unsigned int y_max; unsigned int width; struct elantech_device_info info; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct psmouse*) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (struct input_dev*,int,int ) ;
 int FUNC_5 (struct input_dev*,int ,unsigned int,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct psmouse *VAR_30)
{
 struct input_dev *VAR_31 = VAR_30->dev;
 struct elantech_data *VAR_32 = VAR_30->private;
 struct elantech_device_info *VAR_33 = &VAR_32->info;
 unsigned int VAR_34 = VAR_33->x_min, VAR_35 = VAR_33->y_min,
       VAR_36 = VAR_33->x_max, VAR_37 = VAR_33->y_max,
       VAR_38 = VAR_33->width;

 FUNC_1(VAR_28, VAR_31->propbit);
 FUNC_1(VAR_25, VAR_31->evbit);
 FUNC_1(VAR_24, VAR_31->evbit);
 FUNC_0(VAR_26, VAR_31->evbit);

 FUNC_1(VAR_10, VAR_31->keybit);
 if (VAR_33->has_middle_button)
  FUNC_1(VAR_11, VAR_31->keybit);
 FUNC_1(VAR_12, VAR_31->keybit);

 FUNC_1(VAR_17, VAR_31->keybit);
 FUNC_1(VAR_14, VAR_31->keybit);
 FUNC_1(VAR_13, VAR_31->keybit);
 FUNC_1(VAR_16, VAR_31->keybit);

 switch (VAR_33->hw_version) {
 case 1:

  if (VAR_33->fw_version < 0x020000 &&
      (VAR_33->capabilities[0] & VAR_18)) {
   FUNC_1(VAR_9, VAR_31->keybit);
   FUNC_1(VAR_8, VAR_31->keybit);
  }
  FUNC_5(VAR_31, VAR_6, VAR_34, VAR_36, 0, 0);
  FUNC_5(VAR_31, VAR_7, VAR_35, VAR_37, 0, 0);
  break;

 case 2:
  FUNC_1(VAR_15, VAR_31->keybit);
  FUNC_1(VAR_29, VAR_31->propbit);

 case 3:
  if (VAR_33->hw_version == 3)
   FUNC_2(VAR_30);
  FUNC_5(VAR_31, VAR_6, VAR_34, VAR_36, 0, 0);
  FUNC_5(VAR_31, VAR_7, VAR_35, VAR_37, 0, 0);
  if (VAR_33->reports_pressure) {
   FUNC_5(VAR_31, VAR_4, VAR_21,
          VAR_20, 0, 0);
   FUNC_5(VAR_31, VAR_5, VAR_23,
          VAR_22, 0, 0);
  }
  FUNC_4(VAR_31, 2, VAR_27);
  FUNC_5(VAR_31, VAR_0, VAR_34, VAR_36, 0, 0);
  FUNC_5(VAR_31, VAR_1, VAR_35, VAR_37, 0, 0);
  break;

 case 4:
  FUNC_2(VAR_30);
  FUNC_1(VAR_15, VAR_31->keybit);

  FUNC_5(VAR_31, VAR_6, VAR_34, VAR_36, 0, 0);
  FUNC_5(VAR_31, VAR_7, VAR_35, VAR_37, 0, 0);




  FUNC_5(VAR_31, VAR_4, VAR_21,
         VAR_20, 0, 0);
  FUNC_5(VAR_31, VAR_5, VAR_23,
         VAR_22, 0, 0);

  FUNC_4(VAR_31, VAR_19, 0);
  FUNC_5(VAR_31, VAR_0, VAR_34, VAR_36, 0, 0);
  FUNC_5(VAR_31, VAR_1, VAR_35, VAR_37, 0, 0);
  FUNC_5(VAR_31, VAR_2, VAR_21,
         VAR_20, 0, 0);




  FUNC_5(VAR_31, VAR_3, 0,
         VAR_22 * VAR_38, 0, 0);
  break;
 }

 FUNC_3(VAR_31, VAR_6, VAR_33->x_res);
 FUNC_3(VAR_31, VAR_7, VAR_33->y_res);
 if (VAR_33->hw_version > 1) {
  FUNC_3(VAR_31, VAR_0, VAR_33->x_res);
  FUNC_3(VAR_31, VAR_1, VAR_33->y_res);
 }

 VAR_32->y_max = VAR_37;
 VAR_32->width = VAR_38;

 return 0;
}
