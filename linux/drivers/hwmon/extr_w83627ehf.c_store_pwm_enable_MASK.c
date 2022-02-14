
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w83627ehf_sio_data {scalar_t__ kind; } ;
struct w83627ehf_data {unsigned long* pwm_enable_orig; unsigned long* pwm_enable; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int* VAR_2 ;
 int * VAR_3 ;
 struct w83627ehf_data* FUNC_0 (struct device*) ;
 struct w83627ehf_sio_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;
 int FUNC_6 (struct w83627ehf_data*,int ) ;
 int FUNC_7 (struct w83627ehf_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_6, struct device_attribute *VAR_7,
   const char *VAR_8, size_t VAR_9)
{
 struct w83627ehf_data *VAR_10 = FUNC_0(VAR_6);
 struct w83627ehf_sio_data *VAR_11 = FUNC_1(VAR_6);
 struct sensor_device_attribute *VAR_12 = FUNC_5(VAR_7);
 int VAR_13 = VAR_12->index;
 unsigned long VAR_14;
 int VAR_15;
 u16 VAR_16;

 VAR_15 = FUNC_2(VAR_8, 10, &VAR_14);
 if (VAR_15 < 0)
  return VAR_15;

 if (!VAR_14 || (VAR_14 > 4 && VAR_14 != VAR_10->pwm_enable_orig[VAR_13]))
  return -VAR_0;

 if (VAR_11->kind == VAR_5 && VAR_14 == 4)
  return -VAR_0;

 FUNC_3(&VAR_10->update_lock);
 VAR_10->pwm_enable[VAR_13] = VAR_14;
 if (VAR_11->kind == VAR_4 || VAR_11->kind == VAR_5) {
  VAR_16 = FUNC_6(VAR_10,
        VAR_1[VAR_13]);
  VAR_16 &= 0x0f;
  VAR_16 |= (VAR_14 - 1) << 4;
  FUNC_7(VAR_10,
          VAR_1[VAR_13], VAR_16);
 } else {
  VAR_16 = FUNC_6(VAR_10, VAR_3[VAR_13]);
  VAR_16 &= ~(0x03 << VAR_2[VAR_13]);
  VAR_16 |= (VAR_14 - 1) << VAR_2[VAR_13];
  FUNC_7(VAR_10, VAR_3[VAR_13], VAR_16);
 }
 FUNC_4(&VAR_10->update_lock);
 return VAR_9;
}
