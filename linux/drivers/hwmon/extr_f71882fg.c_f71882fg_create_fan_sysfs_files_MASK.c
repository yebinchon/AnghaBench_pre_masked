
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct f71882fg_data {int type; int pwm_enable; int* pwm_auto_point_mapping; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (int *,char*,int,char*) ;
 int FUNC_4 (int *,char*,int) ;




 int ** VAR_0 ;

 int ** VAR_1 ;

 int FUNC_5 (struct platform_device*,int *,int) ;
 scalar_t__* VAR_2 ;
 int FUNC_6 (struct f71882fg_data*,int ) ;




 int ** VAR_3 ;
 int ** VAR_4 ;
 int ** VAR_5 ;
 int * VAR_6 ;
 struct f71882fg_data* FUNC_7 (struct platform_device*) ;

__attribute__((used)) static int FUNC_8(
 struct platform_device *VAR_7, int VAR_8)
{
 struct f71882fg_data *VAR_9 = FUNC_7(VAR_7);
 int VAR_10;


 VAR_10 = 0;
 switch (VAR_9->type) {
 case 135:
  if (((VAR_9->pwm_enable >> (VAR_8 * 2)) & 3) == 3)
   VAR_10 = 1;
  break;
 case 134:
  if (((VAR_9->pwm_enable >> (VAR_8 * 2)) & 1) != 1)
   VAR_10 = 1;
  break;
 case 128:
  if (VAR_8 == 2)
   VAR_10 = VAR_9->pwm_enable & 0x20;
  break;
 default:
  break;
 }
 if (VAR_10) {
  FUNC_2(&VAR_7->dev,
   "Invalid (reserved) pwm settings: 0x%02x, "
   "skipping fan %d\n",
   (VAR_9->pwm_enable >> (VAR_8 * 2)) & 3, VAR_8 + 1);
  return 0;
 }

 VAR_10 = FUNC_5(VAR_7, &VAR_5[VAR_8][0],
       FUNC_0(VAR_5[0]));
 if (VAR_10)
  return VAR_10;

 if (VAR_2[VAR_9->type]) {
  VAR_10 = FUNC_5(VAR_7,
        &VAR_6[VAR_8],
        1);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_3(&VAR_7->dev, "Fan: %d is in %s mode\n", VAR_8 + 1,
   (VAR_9->pwm_enable & (1 << (2 * VAR_8))) ? "duty-cycle" : "RPM");


 switch (VAR_9->type) {
 case 136:
 case 137:
 case 133:
 case 132:
 case 129:
 case 130:
 case 131:
  VAR_9->pwm_auto_point_mapping[VAR_8] =
   FUNC_6(VAR_9, FUNC_1(VAR_8));
  if ((VAR_9->pwm_auto_point_mapping[VAR_8] & 0x80) ||
      (VAR_9->pwm_auto_point_mapping[VAR_8] & 3) == 0) {
   FUNC_4(&VAR_7->dev,
     "Auto pwm controlled by raw digital "
     "data, disabling pwm auto_point "
     "sysfs attributes for fan %d\n", VAR_8 + 1);
   return 0;
  }
  break;
 default:
  break;
 }

 switch (VAR_9->type) {
 case 134:
  VAR_10 = FUNC_5(VAR_7,
     &VAR_0[VAR_8][0],
     FUNC_0(VAR_0[0]));
  break;
 case 136:
 case 133:
  VAR_10 = FUNC_5(VAR_7,
     &VAR_1[VAR_8][0],
     FUNC_0(VAR_1[0]));
  break;
 case 128:
  VAR_10 = FUNC_5(VAR_7,
     &VAR_3[VAR_8][0],
     FUNC_0(VAR_3[0]));
  break;
 default:
  VAR_10 = FUNC_5(VAR_7,
     &VAR_4[VAR_8][0],
     FUNC_0(VAR_4[0]));
 }

 return VAR_10;
}
