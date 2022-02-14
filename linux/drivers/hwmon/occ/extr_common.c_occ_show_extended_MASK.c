
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sensor_device_attribute_2 {int index; int nr; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct occ_sensors {TYPE_1__ extended; } ;
struct occ {struct occ_sensors sensors; } ;
struct extended_sensor {int flags; int* name; int* data; int sensor_id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct occ* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct occ*) ;
 int FUNC_3 (char*,int ,char*,int,...) ;
 struct sensor_device_attribute_2* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
     struct device_attribute *VAR_4, char *VAR_5)
{
 int VAR_6;
 struct extended_sensor *VAR_7;
 struct occ *VAR_8 = FUNC_0(VAR_3);
 struct occ_sensors *VAR_9 = &VAR_8->sensors;
 struct sensor_device_attribute_2 *VAR_10 = FUNC_4(VAR_4);

 VAR_6 = FUNC_2(VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_7 = ((struct extended_sensor *)VAR_9->extended.data) +
  VAR_10->index;

 switch (VAR_10->nr) {
 case 0:
  if (VAR_7->flags & VAR_1)
   VAR_6 = FUNC_3(VAR_5, VAR_2 - 1, "%u",
          FUNC_1(&VAR_7->sensor_id));
  else
   VAR_6 = FUNC_3(VAR_5, VAR_2 - 1, "%02x%02x%02x%02x\n",
          VAR_7->name[0], VAR_7->name[1],
          VAR_7->name[2], VAR_7->name[3]);
  break;
 case 1:
  VAR_6 = FUNC_3(VAR_5, VAR_2 - 1, "%02x\n", VAR_7->flags);
  break;
 case 2:
  VAR_6 = FUNC_3(VAR_5, VAR_2 - 1, "%02x%02x%02x%02x%02x%02x\n",
         VAR_7->data[0], VAR_7->data[1], VAR_7->data[2],
         VAR_7->data[3], VAR_7->data[4], VAR_7->data[5]);
  break;
 default:
  return -VAR_0;
 }

 return VAR_6;
}
