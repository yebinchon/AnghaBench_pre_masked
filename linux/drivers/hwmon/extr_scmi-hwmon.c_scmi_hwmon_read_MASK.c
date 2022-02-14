
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long u64 ;
typedef int u32 ;
struct scmi_sensors {struct scmi_sensor_info*** info; struct scmi_handle* handle; } ;
struct scmi_sensor_info {int id; } ;
struct scmi_handle {TYPE_1__* sensor_ops; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;
struct TYPE_2__ {int (* reading_get ) (struct scmi_handle const*,int ,long*) ;} ;


 struct scmi_sensors* FUNC_0 (struct device*) ;
 int FUNC_1 (struct scmi_sensor_info const*,long*) ;
 int FUNC_2 (struct scmi_handle const*,int ,long*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, enum hwmon_sensor_types VAR_1,
      u32 VAR_2, int VAR_3, long *VAR_4)
{
 int VAR_5;
 u64 VAR_6;
 const struct scmi_sensor_info *VAR_7;
 struct scmi_sensors *VAR_8 = FUNC_0(VAR_0);
 const struct scmi_handle *VAR_9 = VAR_8->handle;

 VAR_7 = *(VAR_8->info[VAR_1] + VAR_3);
 VAR_5 = VAR_9->sensor_ops->reading_get(VAR_9, VAR_7->id, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_7, &VAR_6);
 if (!VAR_5)
  *VAR_4 = VAR_6;

 return VAR_5;
}
