
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int* range; int lock; int ** temp; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct adt7475_data*) ;
 int FUNC_1 (struct adt7475_data*) ;
 struct adt7475_data* FUNC_2 (struct device*) ;
 int* VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct adt7475_data*,int ) ;
 int FUNC_6 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct adt7475_data *VAR_5 = FUNC_2(VAR_2);
 struct sensor_device_attribute_2 *VAR_6 = FUNC_7(VAR_3);
 int VAR_7, VAR_8;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_3(&VAR_5->lock);
 VAR_7 = (VAR_5->range[VAR_6->index] >> 4) & 0x0F;
 VAR_8 = FUNC_5(VAR_5, VAR_5->temp[VAR_0][VAR_6->index]);
 FUNC_4(&VAR_5->lock);

 return FUNC_6(VAR_4, "%d\n", VAR_8 + VAR_1[VAR_7]);
}
