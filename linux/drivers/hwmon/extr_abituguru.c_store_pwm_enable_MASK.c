
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sensor_device_attribute_2 {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru_data {scalar_t__** pwm_settings; int update_lock; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct abituguru_data*,scalar_t__,size_t,scalar_t__*,int) ;
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
 u8 VAR_10;
 ssize_t VAR_11;
 unsigned long VAR_12;

 VAR_11 = FUNC_2(VAR_6, 10, &VAR_12);
 if (VAR_11)
  return VAR_11;

 VAR_11 = VAR_7;
 FUNC_3(&VAR_9->update_lock);
 VAR_10 = VAR_9->pwm_settings[VAR_8->index][0];
 switch (VAR_12) {
 case 0:
  VAR_9->pwm_settings[VAR_8->index][0] &=
   ~VAR_1;
  break;
 case 2:
  VAR_9->pwm_settings[VAR_8->index][0] |= VAR_1;
  break;
 default:
  VAR_11 = -VAR_2;
 }
 if ((VAR_9->pwm_settings[VAR_8->index][0] != VAR_10) &&
   (FUNC_0(VAR_9, VAR_0 + 1,
   VAR_8->index, VAR_9->pwm_settings[VAR_8->index],
   5) < 1)) {
  VAR_9->pwm_settings[VAR_8->index][0] = VAR_10;
  VAR_11 = -VAR_3;
 }
 FUNC_4(&VAR_9->update_lock);
 return VAR_11;
}
