
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aem_data {unsigned long* power_period; int lock; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct aem_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_4(VAR_3);
 struct aem_data *VAR_7 = FUNC_0(VAR_2);
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_4, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 < VAR_0)
  return -VAR_1;

 FUNC_2(&VAR_7->lock);
 VAR_7->power_period[VAR_6->index] = VAR_8;
 FUNC_3(&VAR_7->lock);

 return VAR_5;
}
