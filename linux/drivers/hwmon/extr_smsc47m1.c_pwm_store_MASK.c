
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc47m1_data {int* pwm; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (long) ;
 int * VAR_1 ;
 struct smsc47m1_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct smsc47m1_data*,int ,int) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_6(VAR_3);
 struct smsc47m1_data *VAR_7 = FUNC_1(VAR_2);
 int VAR_8 = VAR_6->index;
 long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_4, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 < 0 || VAR_9 > 255)
  return -VAR_0;

 FUNC_3(&VAR_7->update_lock);
 VAR_7->pwm[VAR_8] &= 0x81;
 VAR_7->pwm[VAR_8] |= FUNC_0(VAR_9);
 FUNC_5(VAR_7, VAR_1[VAR_8],
        VAR_7->pwm[VAR_8]);
 FUNC_4(&VAR_7->update_lock);

 return VAR_5;
}
