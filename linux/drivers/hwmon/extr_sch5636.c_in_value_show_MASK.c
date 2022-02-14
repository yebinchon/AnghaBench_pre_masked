
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct sch5636_data {int* in; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct sch5636_data*) ;
 int VAR_0 ;
 int FUNC_2 (struct sch5636_data*) ;
 int* VAR_1 ;
 struct sch5636_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
        struct device_attribute *VAR_3, char *VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_5(VAR_3);
 struct sch5636_data *VAR_6 = FUNC_3(VAR_2);
 int VAR_7;

 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 VAR_7 = FUNC_0(
  VAR_6->in[VAR_5->index] * VAR_1[VAR_5->index],
  255);
 return FUNC_4(VAR_4, VAR_0, "%d\n", VAR_7);
}
