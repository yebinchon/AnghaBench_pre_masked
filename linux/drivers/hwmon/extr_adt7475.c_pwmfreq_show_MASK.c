
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int* range; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (struct adt7475_data*) ;
 int FUNC_2 (struct adt7475_data*) ;
 struct adt7475_data* FUNC_3 (struct device*) ;
 int FUNC_4 (int,int ,scalar_t__) ;
 int* VAR_0 ;
 int FUNC_5 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct adt7475_data *VAR_4 = FUNC_3(VAR_1);
 struct sensor_device_attribute_2 *VAR_5 = FUNC_6(VAR_2);
 int VAR_6;

 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);
 VAR_6 = FUNC_4(VAR_4->range[VAR_5->index] & 0xf, 0,
   FUNC_0(VAR_0) - 1);

 return FUNC_5(VAR_3, "%d\n", VAR_0[VAR_6]);
}
