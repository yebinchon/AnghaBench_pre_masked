
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w83627ehf_sio_data {scalar_t__ kind; } ;
struct w83627ehf_data {unsigned long* pwm_mode; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int * VAR_2 ;
 struct w83627ehf_data* FUNC_0 (struct device*) ;
 struct w83627ehf_sio_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;
 int FUNC_6 (struct w83627ehf_data*,int ) ;
 int FUNC_7 (struct w83627ehf_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_4, struct device_attribute *VAR_5,
   const char *VAR_6, size_t VAR_7)
{
 struct w83627ehf_data *VAR_8 = FUNC_0(VAR_4);
 struct sensor_device_attribute *VAR_9 = FUNC_5(VAR_5);
 struct w83627ehf_sio_data *VAR_10 = FUNC_1(VAR_4);
 int VAR_11 = VAR_9->index;
 unsigned long VAR_12;
 int VAR_13;
 u16 VAR_14;

 VAR_13 = FUNC_2(VAR_6, 10, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_12 > 1)
  return -VAR_0;


 if (VAR_10->kind == VAR_3 && VAR_11 && VAR_12 != 1)
  return -VAR_0;

 FUNC_3(&VAR_8->update_lock);
 VAR_14 = FUNC_6(VAR_8, VAR_2[VAR_11]);
 VAR_8->pwm_mode[VAR_11] = VAR_12;
 VAR_14 &= ~(1 << VAR_1[VAR_11]);
 if (!VAR_12)
  VAR_14 |= 1 << VAR_1[VAR_11];
 FUNC_7(VAR_8, VAR_2[VAR_11], VAR_14);
 FUNC_4(&VAR_8->update_lock);
 return VAR_7;
}
