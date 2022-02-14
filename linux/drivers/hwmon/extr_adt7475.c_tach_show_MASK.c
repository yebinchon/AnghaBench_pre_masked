
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t nr; int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int alarms; int ** tach; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct adt7475_data*) ;
 int FUNC_1 (struct adt7475_data*) ;
 struct adt7475_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct adt7475_data *VAR_4 = FUNC_2(VAR_1);
 struct sensor_device_attribute_2 *VAR_5 = FUNC_5(VAR_2);
 int VAR_6;

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 if (VAR_5->nr == VAR_0)
  VAR_6 = (VAR_4->alarms >> (VAR_5->index + 10)) & 1;
 else
  VAR_6 = FUNC_4(VAR_4->tach[VAR_5->nr][VAR_5->index]);

 return FUNC_3(VAR_3, "%d\n", VAR_6);
}
