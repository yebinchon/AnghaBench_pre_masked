
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct pc87360_data {int update_lock; int * in_min; int in_vref; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct pc87360_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pc87360_data*,int ,size_t,int ,int ) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
       struct device_attribute *VAR_3, const char *VAR_4,
       size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_6(VAR_3);
 struct pc87360_data *VAR_7 = FUNC_1(VAR_2);
 long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_4, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_3(&VAR_7->update_lock);
 VAR_7->in_min[VAR_6->index] = FUNC_0(VAR_8, VAR_7->in_vref);
 FUNC_5(VAR_7, VAR_0, VAR_6->index, VAR_1,
       VAR_7->in_min[VAR_6->index]);
 FUNC_4(&VAR_7->update_lock);
 return VAR_5;
}
