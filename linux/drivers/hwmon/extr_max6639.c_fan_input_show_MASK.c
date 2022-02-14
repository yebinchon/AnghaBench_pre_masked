
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct max6639_data {int rpm_range; int * fan; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct max6639_data*) ;
 int FUNC_2 (struct max6639_data*) ;
 struct max6639_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct max6639_data *VAR_3 = FUNC_3(VAR_0);
 struct sensor_device_attribute *VAR_4 = FUNC_5(VAR_1);

 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 return FUNC_4(VAR_2, "%d\n", FUNC_0(VAR_3->fan[VAR_4->index],
         VAR_3->rpm_range));
}
