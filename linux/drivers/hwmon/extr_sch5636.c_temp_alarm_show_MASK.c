
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct sch5636_data {int* temp_ctrl; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct sch5636_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct sch5636_data*) ;
 int VAR_1 ;
 struct sch5636_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
          struct device_attribute *VAR_3, char *VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_4(VAR_3);
 struct sch5636_data *VAR_6 = FUNC_2(VAR_2);
 int VAR_7;

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = (VAR_6->temp_ctrl[VAR_5->index] & VAR_1) ? 1 : 0;
 return FUNC_3(VAR_4, VAR_0, "%d\n", VAR_7);
}
