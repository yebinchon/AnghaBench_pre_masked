
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct max6650_data {int config; int* tach; int count; int alarm; int valid; int speed; int dac; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int FUNC_0 (int) ;
 long FUNC_1 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct max6650_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct max6650_data*) ;
 int VAR_6 ;
 long FUNC_4 (int ,int) ;
 struct max6650_data* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_7, enum hwmon_sensor_types VAR_8,
   u32 VAR_9, int VAR_10, long *VAR_11)
{
 struct max6650_data *VAR_12 = FUNC_5(VAR_7);
 int VAR_13;

 if (FUNC_2(VAR_12))
  return FUNC_3(VAR_12);

 switch (VAR_8) {
 case 130:
  switch (VAR_9) {
  case 128:
   *VAR_11 = FUNC_4(VAR_12->dac,
       VAR_12->config & VAR_5);
   break;
  case 129:
   VAR_13 = (VAR_12->config & VAR_4) >> 4;
   *VAR_11 = (4 - VAR_13) & 3;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 137:
  switch (VAR_9) {
  case 134:
   *VAR_11 = FUNC_1(VAR_12->tach[VAR_10] * 120,
       FUNC_0(VAR_12->count));
   break;
  case 136:
   *VAR_11 = FUNC_0(VAR_12->count);
   break;
  case 131:





   *VAR_11 = 60 * FUNC_0(VAR_12->config) * VAR_6 /
    (256 * (VAR_12->speed + 1));
   break;
  case 132:
   *VAR_11 = !!(VAR_12->alarm & VAR_2);
   VAR_12->alarm &= ~VAR_2;
   VAR_12->valid = 0;
   break;
  case 133:
   *VAR_11 = !!(VAR_12->alarm & VAR_1);
   VAR_12->alarm &= ~VAR_1;
   VAR_12->valid = 0;
   break;
  case 135:
   *VAR_11 = !!(VAR_12->alarm & VAR_3);
   VAR_12->alarm &= ~VAR_3;
   VAR_12->valid = 0;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
