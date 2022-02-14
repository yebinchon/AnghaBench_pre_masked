
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct platform_device {int dev; } ;
struct f71882fg_data {size_t type; int temp_config; scalar_t__ hwmon_dev; } ;
struct TYPE_2__ {int dev_attr; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;

 int * VAR_3 ;


 int * VAR_4 ;

 int ** VAR_5 ;

 int ** VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__** VAR_8 ;
 scalar_t__* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int FUNC_2 (struct f71882fg_data*,int ) ;
 int FUNC_3 (struct platform_device*,int *,int) ;
 scalar_t__* VAR_12 ;

 int ** VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int ** VAR_16 ;

 int ** VAR_17 ;
 int ** VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 TYPE_1__* VAR_21 ;
 int ** VAR_22 ;
 int ** VAR_23 ;
 int FUNC_4 (scalar_t__) ;
 struct f71882fg_data* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_24)
{
 struct f71882fg_data *VAR_25 = FUNC_5(VAR_24);
 int VAR_26 = VAR_10[VAR_25->type];
 int VAR_27 = VAR_11[VAR_25->type];
 int VAR_28;
 u8 VAR_29 = FUNC_2(VAR_25, VAR_1);

 if (VAR_25->hwmon_dev)
  FUNC_4(VAR_25->hwmon_dev);

 FUNC_1(&VAR_24->dev, &VAR_2);

 if (VAR_29 & 0x01) {
  switch (VAR_25->type) {
  case 132:
   if (VAR_25->temp_config & 0x10)
    FUNC_3(VAR_24,
     VAR_15,
     FUNC_0(VAR_15));
   else
    FUNC_3(VAR_24,
     VAR_4,
     FUNC_0(VAR_4));
   break;
  case 129:
   FUNC_3(VAR_24,
     VAR_15,
     FUNC_0(VAR_15));
   break;
  case 128:
   FUNC_3(VAR_24,
     VAR_4,
     FUNC_0(VAR_4));
   break;
  default:
   FUNC_3(VAR_24,
    &VAR_22[0][0],
    FUNC_0(VAR_22[0]) * VAR_27);
  }
  if (VAR_12[VAR_25->type]) {
   if (VAR_25->type == 128)
    FUNC_3(VAR_24,
     &VAR_16[0][0],
     FUNC_0(VAR_16[0])
      * VAR_27);
   else
    FUNC_3(VAR_24,
     &VAR_23[0][0],
     FUNC_0(VAR_23[0])
      * VAR_27);
  }

  for (VAR_28 = 0; VAR_28 < VAR_0; VAR_28++) {
   if (VAR_8[VAR_25->type][VAR_28]) {
    FUNC_1(&VAR_24->dev,
      &VAR_21[VAR_28].dev_attr);
   }
  }
  if (VAR_9[VAR_25->type]) {
   FUNC_3(VAR_24,
     VAR_20,
     FUNC_0(VAR_20));
  }
 }

 if (VAR_29 & 0x02) {
  FUNC_3(VAR_24, &VAR_18[0][0],
    FUNC_0(VAR_18[0]) * VAR_26);

  if (VAR_7[VAR_25->type]) {
   FUNC_3(VAR_24,
     VAR_19, VAR_26);
  }

  switch (VAR_25->type) {
  case 134:
   FUNC_3(VAR_24,
    &VAR_17[0][0],
    FUNC_0(VAR_17[0]) * VAR_26);
   FUNC_3(VAR_24,
     VAR_3,
     FUNC_0(VAR_3));
   break;
  case 131:
   FUNC_3(VAR_24,
    &VAR_5[0][0],
    FUNC_0(VAR_5[0]) *
     VAR_26);
   break;
  case 133:
  case 130:
   FUNC_3(VAR_24,
    &VAR_6[0][0],
    FUNC_0(VAR_6[0]) * VAR_26);
   break;
  case 129:
   FUNC_3(VAR_24,
     VAR_14,
     FUNC_0(VAR_14));
   FUNC_3(VAR_24,
    &VAR_13[0][0],
    FUNC_0(VAR_13[0]) * VAR_26);
   break;
  default:
   FUNC_3(VAR_24,
    &VAR_17[0][0],
    FUNC_0(VAR_17[0]) * VAR_26);
  }
 }
 return 0;
}
