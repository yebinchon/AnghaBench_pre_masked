
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute_2 {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru_data {unsigned long* bank1_sensors; int** pwm_settings; int** bank1_address; int update_lock; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct abituguru_data*,scalar_t__,size_t,int*,int) ;
 struct abituguru_data* FUNC_1 (struct device*) ;
 size_t FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4, struct device_attribute
 *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct sensor_device_attribute_2 *VAR_8 = FUNC_5(VAR_5);
 struct abituguru_data *VAR_9 = FUNC_1(VAR_4);
 ssize_t VAR_10;
 unsigned long VAR_11;
 u8 VAR_12;
 u8 VAR_13;

 VAR_10 = FUNC_2(VAR_6, 10, &VAR_11);
 if (VAR_10)
  return VAR_10;

 if (VAR_11 == 0 || VAR_11 > VAR_9->bank1_sensors[VAR_1])
  return -VAR_2;

 VAR_11 -= 1;
 VAR_10 = VAR_7;
 FUNC_3(&VAR_9->update_lock);
 VAR_12 = VAR_9->pwm_settings[VAR_8->index][0];
 VAR_13 = VAR_9->bank1_address[VAR_1][VAR_11];
 VAR_9->pwm_settings[VAR_8->index][0] &= 0xF0;
 VAR_9->pwm_settings[VAR_8->index][0] |= VAR_13;
 if (VAR_9->pwm_settings[VAR_8->index][0] != VAR_12) {
  if (FUNC_0(VAR_9, VAR_0 + 1, VAR_8->index,
        VAR_9->pwm_settings[VAR_8->index], 5) < 1) {
   VAR_9->pwm_settings[VAR_8->index][0] = VAR_12;
   VAR_10 = -VAR_3;
  }
 }
 FUNC_4(&VAR_9->update_lock);
 return VAR_10;
}
