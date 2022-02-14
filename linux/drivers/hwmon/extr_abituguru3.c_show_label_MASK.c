
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sensor_device_attribute_2 {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru3_data {TYPE_1__* sensors; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 struct abituguru3_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 = FUNC_2(VAR_1);
 struct abituguru3_data *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%s\n", VAR_4->sensors[VAR_3->index].name);
}
