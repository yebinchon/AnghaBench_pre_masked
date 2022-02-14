
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_data {long* temp_offset; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (long,int) ;
 int * VAR_0 ;
 long FUNC_1 (int ,int,int) ;
 struct w83627ehf_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct w83627ehf_data*,int ,long) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct w83627ehf_data *VAR_5 = FUNC_2(VAR_1);
 struct sensor_device_attribute *VAR_6 = FUNC_6(VAR_2);
 int VAR_7 = VAR_6->index;
 long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_3, 10, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_1(FUNC_0(VAR_8, 1000), -128, 127);

 FUNC_4(&VAR_5->update_lock);
 VAR_5->temp_offset[VAR_7] = VAR_8;
 FUNC_7(VAR_5, VAR_0[VAR_7], VAR_8);
 FUNC_5(&VAR_5->update_lock);
 return VAR_4;
}
