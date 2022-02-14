
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru3_sensor_info {size_t port; int multiplier; int divisor; int offset; scalar_t__ type; } ;
struct abituguru3_data {int** settings; int* value; struct abituguru3_sensor_info* sensors; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct abituguru3_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
 struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5;
 struct sensor_device_attribute_2 *VAR_6 = FUNC_2(VAR_3);
 struct abituguru3_data *VAR_7 = FUNC_0(VAR_2);
 const struct abituguru3_sensor_info *VAR_8;

 if (!VAR_7)
  return -VAR_1;

 VAR_8 = &VAR_7->sensors[VAR_6->index];


 if (VAR_6->nr)
  VAR_5 = VAR_7->settings[VAR_8->port][VAR_6->nr];
 else
  VAR_5 = VAR_7->value[VAR_8->port];


 VAR_5 = (VAR_5 * VAR_8->multiplier) / VAR_8->divisor +
  VAR_8->offset;





 if (VAR_8->type == VAR_0)
  VAR_5 *= 1000;

 return FUNC_1(VAR_4, "%d\n", VAR_5);
}
