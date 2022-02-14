
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct temp_sensor_1 {int sensor_id; int value; } ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct occ_sensors {TYPE_1__ temp; } ;
struct occ {struct occ_sensors sensors; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct occ* FUNC_0 (struct device*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct occ*) ;
 int FUNC_3 (char*,scalar_t__,char*,int) ;
 struct sensor_device_attribute_2* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
          struct device_attribute *VAR_4, char *VAR_5)
{
 int VAR_6;
 u32 VAR_7 = 0;
 struct temp_sensor_1 *VAR_8;
 struct occ *VAR_9 = FUNC_0(VAR_3);
 struct occ_sensors *VAR_10 = &VAR_9->sensors;
 struct sensor_device_attribute_2 *VAR_11 = FUNC_4(VAR_4);

 VAR_6 = FUNC_2(VAR_9);
 if (VAR_6)
  return VAR_6;

 VAR_8 = ((struct temp_sensor_1 *)VAR_10->temp.data) + VAR_11->index;

 switch (VAR_11->nr) {
 case 0:
  VAR_7 = FUNC_1(&VAR_8->sensor_id);
  break;
 case 1:




  if (VAR_8->value == 0xFFFF)
   return -VAR_1;
  VAR_7 = FUNC_1(&VAR_8->value) * 1000;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_3(VAR_5, VAR_2 - 1, "%u\n", VAR_7);
}
