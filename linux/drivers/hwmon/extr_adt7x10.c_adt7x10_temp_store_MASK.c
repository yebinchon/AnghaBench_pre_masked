
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7x10_data {int update_lock; int * temp; } ;
typedef int ssize_t ;


 int * VAR_0 ;
 int FUNC_0 (long) ;
 int FUNC_1 (struct device*,int ,int ) ;
 struct adt7x10_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_6(VAR_2);
 struct adt7x10_data *VAR_6 = FUNC_2(VAR_1);
 int VAR_7 = VAR_5->index;
 long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_3, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_4(&VAR_6->update_lock);
 VAR_6->temp[VAR_7] = FUNC_0(VAR_8);
 VAR_9 = FUNC_1(VAR_1, VAR_0[VAR_7], VAR_6->temp[VAR_7]);
 if (VAR_9)
  VAR_4 = VAR_9;
 FUNC_5(&VAR_6->update_lock);
 return VAR_4;
}
