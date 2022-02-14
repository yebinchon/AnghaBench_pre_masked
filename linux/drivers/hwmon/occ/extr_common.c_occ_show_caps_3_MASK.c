
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct occ_sensors {TYPE_1__ caps; } ;
struct occ {struct occ_sensors sensors; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct caps_sensor_3 {unsigned long long user_source; int user; int hard_min; int max; int n_cap; int system_power; int cap; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct occ* FUNC_0 (struct device*) ;
 unsigned long long FUNC_1 (int *) ;
 int FUNC_2 (struct occ*) ;
 int FUNC_3 (char*,scalar_t__,char*,...) ;
 struct sensor_device_attribute_2* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
          struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5;
 u64 VAR_6 = 0;
 struct caps_sensor_3 *VAR_7;
 struct occ *VAR_8 = FUNC_0(VAR_2);
 struct occ_sensors *VAR_9 = &VAR_8->sensors;
 struct sensor_device_attribute_2 *VAR_10 = FUNC_4(VAR_3);

 VAR_5 = FUNC_2(VAR_8);
 if (VAR_5)
  return VAR_5;

 VAR_7 = ((struct caps_sensor_3 *)VAR_9->caps.data) + VAR_10->index;

 switch (VAR_10->nr) {
 case 0:
  return FUNC_3(VAR_4, VAR_1 - 1, "system\n");
 case 1:
  VAR_6 = FUNC_1(&VAR_7->cap) * 1000000ULL;
  break;
 case 2:
  VAR_6 = FUNC_1(&VAR_7->system_power) * 1000000ULL;
  break;
 case 3:
  VAR_6 = FUNC_1(&VAR_7->n_cap) * 1000000ULL;
  break;
 case 4:
  VAR_6 = FUNC_1(&VAR_7->max) * 1000000ULL;
  break;
 case 5:
  VAR_6 = FUNC_1(&VAR_7->hard_min) * 1000000ULL;
  break;
 case 6:
  VAR_6 = FUNC_1(&VAR_7->user) * 1000000ULL;
  break;
 case 7:
  VAR_6 = VAR_7->user_source;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_3(VAR_4, VAR_1 - 1, "%llu\n", VAR_6);
}
