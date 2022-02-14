
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_data {long* target_temp; int update_lock; int * REG_TARGET; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (long,int) ;
 long FUNC_1 (int ,int ,int) ;
 struct w83627ehf_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct w83627ehf_data*,int ,long) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_0, struct device_attribute *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 struct w83627ehf_data *VAR_4 = FUNC_2(VAR_0);
 struct sensor_device_attribute *VAR_5 = FUNC_6(VAR_1);
 int VAR_6 = VAR_5->index;
 long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_2, 10, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_1(FUNC_0(VAR_7, 1000), 0, 127);

 FUNC_4(&VAR_4->update_lock);
 VAR_4->target_temp[VAR_6] = VAR_7;
 FUNC_7(VAR_4, VAR_4->REG_TARGET[VAR_6], VAR_7);
 FUNC_5(&VAR_4->update_lock);
 return VAR_3;
}
