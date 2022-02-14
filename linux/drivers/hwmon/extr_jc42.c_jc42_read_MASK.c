
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jc42_data {int* temp; size_t config; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct jc42_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct jc42_data*) ;
 int* VAR_6 ;
 void* FUNC_2 (int) ;
 struct jc42_data* FUNC_3 (struct device*) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;

__attribute__((used)) static int FUNC_4(struct device *VAR_11, enum hwmon_sensor_types VAR_12,
       u32 VAR_13, int VAR_14, long *VAR_15)
{
 struct jc42_data *VAR_16 = FUNC_3(VAR_11);
 int VAR_17, VAR_18;

 if (FUNC_0(VAR_16))
  return FUNC_1(VAR_16);

 switch (VAR_13) {
 case 133:
  *VAR_15 = FUNC_2(VAR_16->temp[VAR_8]);
  return 0;
 case 129:
  *VAR_15 = FUNC_2(VAR_16->temp[VAR_10]);
  return 0;
 case 132:
  *VAR_15 = FUNC_2(VAR_16->temp[VAR_9]);
  return 0;
 case 136:
  *VAR_15 = FUNC_2(VAR_16->temp[VAR_7]);
  return 0;
 case 130:
  VAR_17 = FUNC_2(VAR_16->temp[VAR_9]);
  VAR_18 = VAR_6[(VAR_16->config & VAR_4)
      >> VAR_5];
  *VAR_15 = VAR_17 - VAR_18;
  return 0;
 case 134:
  VAR_17 = FUNC_2(VAR_16->temp[VAR_7]);
  VAR_18 = VAR_6[(VAR_16->config & VAR_4)
      >> VAR_5];
  *VAR_15 = VAR_17 - VAR_18;
  return 0;
 case 128:
  *VAR_15 = (VAR_16->temp[VAR_8] >> VAR_3) & 1;
  return 0;
 case 131:
  *VAR_15 = (VAR_16->temp[VAR_8] >> VAR_2) & 1;
  return 0;
 case 135:
  *VAR_15 = (VAR_16->temp[VAR_8] >> VAR_1) & 1;
  return 0;
 default:
  return -VAR_0;
 }
}
