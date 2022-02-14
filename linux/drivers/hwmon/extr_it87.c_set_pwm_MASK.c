
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct it87_data {int* pwm_ctrl; int* pwm_duty; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 struct it87_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct it87_data*) ;
 int FUNC_2 (struct it87_data*,int) ;
 int FUNC_3 (struct it87_data*,int ,int) ;
 scalar_t__ FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (struct it87_data*,long) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_4, struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 struct sensor_device_attribute *VAR_8 = FUNC_8(VAR_5);
 struct it87_data *VAR_9 = FUNC_0(VAR_4);
 int VAR_10 = VAR_8->index;
 long VAR_11;

 if (FUNC_4(VAR_6, 10, &VAR_11) < 0 || VAR_11 < 0 || VAR_11 > 255)
  return -VAR_1;

 FUNC_5(&VAR_9->update_lock);
 FUNC_2(VAR_9, VAR_10);
 if (FUNC_1(VAR_9)) {




  if (VAR_9->pwm_ctrl[VAR_10] & 0x80) {
   FUNC_6(&VAR_9->update_lock);
   return -VAR_0;
  }
  VAR_9->pwm_duty[VAR_10] = FUNC_7(VAR_9, VAR_11);
  FUNC_3(VAR_9, VAR_3[VAR_10],
     VAR_9->pwm_duty[VAR_10]);
 } else {
  VAR_9->pwm_duty[VAR_10] = FUNC_7(VAR_9, VAR_11);




  if (!(VAR_9->pwm_ctrl[VAR_10] & 0x80)) {
   VAR_9->pwm_ctrl[VAR_10] = VAR_9->pwm_duty[VAR_10];
   FUNC_3(VAR_9, VAR_2[VAR_10],
      VAR_9->pwm_ctrl[VAR_10]);
  }
 }
 FUNC_6(&VAR_9->update_lock);
 return VAR_7;
}
