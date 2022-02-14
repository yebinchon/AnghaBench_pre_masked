
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct sensor_device_attribute_2 {size_t index; size_t nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru_data {int* bank1_max_value; unsigned long** bank1_settings; int update_lock; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (struct abituguru_data*,scalar_t__,size_t,unsigned long*,int) ;
 struct abituguru_data* FUNC_1 (struct device*) ;
 size_t FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3, struct device_attribute
 *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct sensor_device_attribute_2 *VAR_7 = FUNC_5(VAR_4);
 struct abituguru_data *VAR_8 = FUNC_1(VAR_3);
 unsigned long VAR_9;
 ssize_t VAR_10;

 VAR_10 = FUNC_2(VAR_5, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = VAR_6;
 VAR_9 = (VAR_9 * 255 + VAR_8->bank1_max_value[VAR_7->index] / 2) /
  VAR_8->bank1_max_value[VAR_7->index];
 if (VAR_9 > 255)
  return -VAR_1;

 FUNC_3(&VAR_8->update_lock);
 if (VAR_8->bank1_settings[VAR_7->index][VAR_7->nr] != VAR_9) {
  u8 VAR_11 = VAR_8->bank1_settings[VAR_7->index][VAR_7->nr];
  VAR_8->bank1_settings[VAR_7->index][VAR_7->nr] = VAR_9;
  if (FUNC_0(VAR_8, VAR_0 + 2,
    VAR_7->index, VAR_8->bank1_settings[VAR_7->index],
    3) <= VAR_7->nr) {
   VAR_8->bank1_settings[VAR_7->index][VAR_7->nr] = VAR_11;
   VAR_10 = -VAR_2;
  }
 }
 FUNC_4(&VAR_8->update_lock);
 return VAR_10;
}
