
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct temp_sensor_2 {int value; int fru_type; int sensor_id; } ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct occ_sensors {TYPE_1__ temp; } ;
struct occ {struct occ_sensors sensors; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct occ* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct occ*) ;
 int FUNC_3 (char*,scalar_t__,char*,int) ;
 struct sensor_device_attribute_2* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_6,
          struct device_attribute *VAR_7, char *VAR_8)
{
 int VAR_9;
 u32 VAR_10 = 0;
 struct temp_sensor_2 *VAR_11;
 struct occ *VAR_12 = FUNC_0(VAR_6);
 struct occ_sensors *VAR_13 = &VAR_12->sensors;
 struct sensor_device_attribute_2 *VAR_14 = FUNC_4(VAR_7);

 VAR_9 = FUNC_2(VAR_12);
 if (VAR_9)
  return VAR_9;

 VAR_11 = ((struct temp_sensor_2 *)VAR_13->temp.data) + VAR_14->index;

 switch (VAR_14->nr) {
 case 0:
  VAR_10 = FUNC_1(&VAR_11->sensor_id);
  break;
 case 1:
  VAR_10 = VAR_11->value;
  if (VAR_10 == VAR_4)
   return -VAR_2;






  if (VAR_11->fru_type != VAR_3) {

   if (VAR_10 == 0)
    return -VAR_0;

   VAR_10 *= 1000;
  }
  break;
 case 2:
  VAR_10 = VAR_11->fru_type;
  break;
 case 3:
  VAR_10 = VAR_11->value == VAR_4;
  break;
 default:
  return -VAR_1;
 }

 return FUNC_3(VAR_8, VAR_5 - 1, "%u\n", VAR_10);
}
