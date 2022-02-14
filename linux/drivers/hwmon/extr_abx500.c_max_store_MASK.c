
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abx500_temp {unsigned long* max; int lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,int ,int ) ;
 struct abx500_temp* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct abx500_temp*) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 struct abx500_temp *VAR_6 = FUNC_1(VAR_1);
 struct sensor_device_attribute *VAR_7 = FUNC_6(VAR_2);
 int VAR_8 = FUNC_2(VAR_3, 10, &VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_5 = FUNC_0(VAR_5, 0, VAR_0);

 FUNC_3(&VAR_6->lock);
 VAR_6->max[VAR_7->index] = VAR_5;
 FUNC_5(VAR_6);
 FUNC_4(&VAR_6->lock);

 return VAR_4;
}
