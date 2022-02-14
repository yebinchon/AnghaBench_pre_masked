
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm665_data {int faults; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct smm665_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct smm665_data*) ;
 struct smm665_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_4(VAR_2);
 struct smm665_data *VAR_5 = FUNC_2(VAR_1);
 int VAR_6 = 0;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 if (VAR_5->faults & (1 << VAR_4->index))
  VAR_6 = 1;

 return FUNC_3(VAR_3, VAR_0, "%d\n", VAR_6);
}
