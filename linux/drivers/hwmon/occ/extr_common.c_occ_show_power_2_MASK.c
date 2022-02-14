
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct power_sensor_2 {int function_id; int apss_channel; int value; int update_tag; int accumulator; int sensor_id; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct occ_sensors {TYPE_1__ power; } ;
struct occ {int powr_sample_time_us; struct occ_sensors sensors; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct occ* FUNC_0 (struct device*) ;
 unsigned long long FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct occ*) ;
 int FUNC_5 (char*,scalar_t__,char*,int,...) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5;
 u64 VAR_6 = 0;
 struct power_sensor_2 *VAR_7;
 struct occ *VAR_8 = FUNC_0(VAR_2);
 struct occ_sensors *VAR_9 = &VAR_8->sensors;
 struct sensor_device_attribute_2 *VAR_10 = FUNC_6(VAR_3);

 VAR_5 = FUNC_4(VAR_8);
 if (VAR_5)
  return VAR_5;

 VAR_7 = ((struct power_sensor_2 *)VAR_9->power.data) + VAR_10->index;

 switch (VAR_10->nr) {
 case 0:
  return FUNC_5(VAR_4, VAR_1 - 1, "%u_%u_%u\n",
    FUNC_2(&VAR_7->sensor_id),
    VAR_7->function_id, VAR_7->apss_channel);
 case 1:
  VAR_6 = FUNC_3(&VAR_7->accumulator,
           &VAR_7->update_tag);
  break;
 case 2:
  VAR_6 = (u64)FUNC_2(&VAR_7->update_tag) *
      VAR_8->powr_sample_time_us;
  break;
 case 3:
  VAR_6 = FUNC_1(&VAR_7->value) * 1000000ULL;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_5(VAR_4, VAR_1 - 1, "%llu\n", VAR_6);
}
