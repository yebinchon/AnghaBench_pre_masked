
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct occ_sensors {TYPE_1__ freq; } ;
struct occ {struct occ_sensors sensors; } ;
struct freq_sensor_2 {int value; int sensor_id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct occ* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct occ*) ;
 int FUNC_4 (char*,scalar_t__,char*,int) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
          struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5;
 u32 VAR_6 = 0;
 struct freq_sensor_2 *VAR_7;
 struct occ *VAR_8 = FUNC_0(VAR_2);
 struct occ_sensors *VAR_9 = &VAR_8->sensors;
 struct sensor_device_attribute_2 *VAR_10 = FUNC_5(VAR_3);

 VAR_5 = FUNC_3(VAR_8);
 if (VAR_5)
  return VAR_5;

 VAR_7 = ((struct freq_sensor_2 *)VAR_9->freq.data) + VAR_10->index;

 switch (VAR_10->nr) {
 case 0:
  VAR_6 = FUNC_2(&VAR_7->sensor_id);
  break;
 case 1:
  VAR_6 = FUNC_1(&VAR_7->value);
  break;
 default:
  return -VAR_0;
 }

 return FUNC_4(VAR_4, VAR_1 - 1, "%u\n", VAR_6);
}
