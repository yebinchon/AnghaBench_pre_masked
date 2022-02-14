
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct sch5636_data {int * fan_val; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct sch5636_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct sch5636_data*) ;
 int FUNC_2 (int ) ;
 struct sch5636_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_5(VAR_2);
 struct sch5636_data *VAR_5 = FUNC_3(VAR_1);
 int VAR_6;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_2(VAR_5->fan_val[VAR_4->index]);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_4(VAR_3, VAR_0, "%d\n", VAR_6);
}
