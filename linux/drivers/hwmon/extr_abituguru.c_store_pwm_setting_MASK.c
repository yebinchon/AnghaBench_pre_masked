
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct sensor_device_attribute_2 {size_t nr; size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru_data {unsigned long** pwm_settings; int update_lock; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned long* VAR_3 ;
 unsigned long* VAR_4 ;
 int* VAR_5 ;
 size_t FUNC_0 (struct abituguru_data*,scalar_t__,size_t,unsigned long*,int) ;
 struct abituguru_data* FUNC_1 (struct device*) ;
 size_t FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_6, struct device_attribute
 *VAR_7, const char *VAR_8, size_t VAR_9)
{
 struct sensor_device_attribute_2 *VAR_10 = FUNC_5(VAR_7);
 struct abituguru_data *VAR_11 = FUNC_1(VAR_6);
 u8 VAR_12;
 unsigned long VAR_13;
 ssize_t VAR_14;

 VAR_14 = FUNC_2(VAR_8, 10, &VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_14 = VAR_9;
 VAR_13 = (VAR_13 + VAR_5[VAR_10->nr] / 2) /
    VAR_5[VAR_10->nr];


 if ((VAR_10->index == 0) && ((VAR_10->nr == 1) || (VAR_10->nr == 2)))
  VAR_12 = 77;
 else
  VAR_12 = VAR_4[VAR_10->nr];


 if (VAR_13 < VAR_12 || VAR_13 > VAR_3[VAR_10->nr])
  return -VAR_1;

 FUNC_3(&VAR_11->update_lock);

 if ((VAR_10->nr & 1) &&
   (VAR_13 >= VAR_11->pwm_settings[VAR_10->index][VAR_10->nr + 1]))
  VAR_14 = -VAR_1;
 else if (!(VAR_10->nr & 1) &&
   (VAR_13 <= VAR_11->pwm_settings[VAR_10->index][VAR_10->nr - 1]))
  VAR_14 = -VAR_1;
 else if (VAR_11->pwm_settings[VAR_10->index][VAR_10->nr] != VAR_13) {
  u8 VAR_15 = VAR_11->pwm_settings[VAR_10->index][VAR_10->nr];
  VAR_11->pwm_settings[VAR_10->index][VAR_10->nr] = VAR_13;
  if (FUNC_0(VAR_11, VAR_0 + 1,
    VAR_10->index, VAR_11->pwm_settings[VAR_10->index],
    5) <= VAR_10->nr) {
   VAR_11->pwm_settings[VAR_10->index][VAR_10->nr] =
    VAR_15;
   VAR_14 = -VAR_2;
  }
 }
 FUNC_4(&VAR_11->update_lock);
 return VAR_14;
}
