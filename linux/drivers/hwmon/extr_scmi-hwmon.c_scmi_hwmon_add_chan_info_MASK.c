
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwmon_channel_info {int type; int * config; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct device*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct hwmon_channel_info *VAR_2,
        struct device *VAR_3, int VAR_4,
        enum hwmon_sensor_types VAR_5, u32 VAR_6)
{
 int VAR_7;
 u32 *VAR_8 = FUNC_0(VAR_3, VAR_4 + 1, sizeof(*VAR_8), VAR_1);

 if (!VAR_8)
  return -VAR_0;

 VAR_2->type = VAR_5;
 VAR_2->config = VAR_8;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++, VAR_8++)
  *VAR_8 = VAR_6;

 return 0;
}
