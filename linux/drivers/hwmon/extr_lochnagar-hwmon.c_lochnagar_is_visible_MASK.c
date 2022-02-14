
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;




 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static umode_t FUNC_1(const void *VAR_2,
        enum hwmon_sensor_types VAR_3,
        u32 VAR_4, int VAR_5)
{
 switch (VAR_3) {
 case 129:
  if (!FUNC_0("SYSVDD", VAR_1[VAR_5]))
   return 0;
  break;
 case 128:
  if (VAR_4 == VAR_0)
   return 0644;
  break;
 default:
  break;
 }

 return 0444;
}
