
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct platform_device {int dev; } ;
struct f71882fg_sio_data {size_t type; } ;
struct f71882fg_data {size_t type; int temp_start; int temp_config; int auto_point_temp_signed; int * hwmon_dev; void* pwm_enable; int update_lock; int addr; } ;
struct TYPE_4__ {int dev_attr; } ;
struct TYPE_3__ {int start; } ;


 int FUNC_0 (int *) ;
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
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_11 ;
 struct f71882fg_sio_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *) ;
 struct f71882fg_data* FUNC_6 (int *,int,int ) ;

 int * VAR_12 ;


 int * VAR_13 ;


 int FUNC_7 (struct platform_device*,int) ;
 int FUNC_8 (struct platform_device*,int *,int) ;
 scalar_t__** VAR_14 ;
 scalar_t__* VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;
 void* FUNC_9 (struct f71882fg_data*,int ) ;
 int FUNC_10 (struct platform_device*) ;
 scalar_t__* VAR_18 ;
 int FUNC_11 (struct f71882fg_data*,int ,int) ;




 int * VAR_19 ;
 int * VAR_20 ;
 int ** VAR_21 ;

 int * VAR_22 ;
 TYPE_2__* VAR_23 ;
 int ** VAR_24 ;
 int ** VAR_25 ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 TYPE_1__* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct f71882fg_data*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_26)
{
 struct f71882fg_data *VAR_27;
 struct f71882fg_sio_data *VAR_28 = FUNC_3(&VAR_26->dev);
 int VAR_29 = VAR_16[VAR_28->type];
 int VAR_30 = VAR_17[VAR_28->type];
 int VAR_31, VAR_32;
 int VAR_33;
 u8 VAR_34, VAR_35;

 VAR_27 = FUNC_6(&VAR_26->dev, sizeof(struct f71882fg_data),
       VAR_9);
 if (!VAR_27)
  return -VAR_1;

 VAR_27->addr = FUNC_14(VAR_26, VAR_10, 0)->start;
 VAR_27->type = VAR_28->type;
 VAR_27->temp_start =
     (VAR_27->type == 135 || VAR_27->type == 129 ||
  VAR_27->type == 128) ? 0 : 1;
 FUNC_13(&VAR_27->update_lock);
 FUNC_15(VAR_26, VAR_27);

 VAR_34 = FUNC_9(VAR_27, VAR_7);
 if (VAR_34 & 0x04) {
  FUNC_4(&VAR_26->dev, "Hardware monitor is powered down\n");
  return -VAR_0;
 }
 if (!(VAR_34 & 0x03)) {
  FUNC_4(&VAR_26->dev, "Hardware monitoring not activated\n");
  return -VAR_0;
 }


 VAR_31 = FUNC_5(&VAR_26->dev, &VAR_11);
 if (VAR_31)
  goto exit_unregister_sysfs;

 if (VAR_34 & 0x01) {
  switch (VAR_27->type) {
  case 135:
   VAR_27->temp_config =
    FUNC_9(VAR_27, VAR_8);
   if (VAR_27->temp_config & 0x10)




    VAR_31 = FUNC_8(VAR_26,
     VAR_20,
     FUNC_0(VAR_20));
   else
    VAR_31 = FUNC_8(VAR_26,
     VAR_13,
     FUNC_0(VAR_13));
   break;
  case 129:
   VAR_31 = FUNC_8(VAR_26,
     VAR_20,
     FUNC_0(VAR_20));
   break;
  case 128:
   VAR_31 = FUNC_8(VAR_26,
     VAR_13,
     FUNC_0(VAR_13));
   break;
  default:
   VAR_31 = FUNC_8(VAR_26,
    &VAR_24[0][0],
    FUNC_0(VAR_24[0]) * VAR_30);
  }
  if (VAR_31)
   goto exit_unregister_sysfs;

  if (VAR_18[VAR_27->type]) {
   if (VAR_27->type == 128) {
    VAR_33 = FUNC_0(VAR_21[0]);
    VAR_31 = FUNC_8(VAR_26,
      &VAR_21[0][0],
      VAR_33 * VAR_30);

   } else {
    VAR_33 = FUNC_0(VAR_25[0]);
    VAR_31 = FUNC_8(VAR_26,
      &VAR_25[0][0],
      VAR_33 * VAR_30);
   }
   if (VAR_31)
    goto exit_unregister_sysfs;
  }

  for (VAR_32 = 0; VAR_32 < VAR_4; VAR_32++) {
   if (VAR_14[VAR_27->type][VAR_32]) {
    VAR_31 = FUNC_5(&VAR_26->dev,
      &VAR_23[VAR_32].dev_attr);
    if (VAR_31)
     goto exit_unregister_sysfs;
   }
  }
  if (VAR_15[VAR_27->type]) {
   VAR_31 = FUNC_8(VAR_26,
     VAR_22,
     FUNC_0(VAR_22));
   if (VAR_31)
    goto exit_unregister_sysfs;
  }
 }

 if (VAR_34 & 0x02) {
  switch (VAR_27->type) {
  case 136:
  case 137:
  case 134:
  case 133:

   VAR_27->auto_point_temp_signed = 1;

  case 130:
  case 131:
  case 132:
   VAR_35 = FUNC_9(VAR_27, VAR_5);
   if (VAR_35 & VAR_2)
    VAR_27->auto_point_temp_signed = 1;

   VAR_35 &= ~VAR_3;
   FUNC_11(VAR_27, VAR_5, VAR_35);
   break;
  default:
   break;
  }

  VAR_27->pwm_enable =
   FUNC_9(VAR_27, VAR_6);

  for (VAR_32 = 0; VAR_32 < VAR_29; VAR_32++) {
   VAR_31 = FUNC_7(VAR_26, VAR_32);
   if (VAR_31)
    goto exit_unregister_sysfs;
  }


  switch (VAR_27->type) {
  case 137:
   VAR_31 = FUNC_8(VAR_26,
     VAR_12,
     FUNC_0(VAR_12));
   break;
  case 129:
   VAR_31 = FUNC_8(VAR_26,
     VAR_19,
     FUNC_0(VAR_19));
   break;
  default:
   break;
  }
  if (VAR_31)
   goto exit_unregister_sysfs;
 }

 VAR_27->hwmon_dev = FUNC_12(&VAR_26->dev);
 if (FUNC_1(VAR_27->hwmon_dev)) {
  VAR_31 = FUNC_2(VAR_27->hwmon_dev);
  VAR_27->hwmon_dev = ((void*)0);
  goto exit_unregister_sysfs;
 }

 return 0;

exit_unregister_sysfs:
 FUNC_10(VAR_26);
 return VAR_31;
}
