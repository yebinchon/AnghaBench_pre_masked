
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct ina209_data {int * regs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct ina209_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct ina209_data*) ;
 long FUNC_2 (size_t,int ) ;
 struct ina209_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char*,int ,char*,long) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_5(VAR_2);
 struct ina209_data *VAR_5 = FUNC_3(VAR_1);
 long VAR_6;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_2(VAR_4->index, VAR_5->regs[VAR_4->index]);
 return FUNC_4(VAR_3, VAR_0, "%ld\n", VAR_6);
}
