
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pc87427_data {int* address; int* pwm_enable; unsigned long* pwm; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,int,char*,char*) ;
 struct pc87427_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int) ;
 scalar_t__ FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned long,scalar_t__) ;
 int FUNC_7 (struct pc87427_data*,int) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;
 int FUNC_9 (struct pc87427_data*,int,int) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_7, struct device_attribute *VAR_8,
    const char *VAR_9, size_t VAR_10)
{
 struct pc87427_data *VAR_11 = FUNC_1(VAR_7);
 int VAR_12 = FUNC_8(VAR_8)->index;
 unsigned long VAR_13;
 int VAR_14 = VAR_11->address[VAR_2];
 u8 VAR_15;

 if (FUNC_3(VAR_9, 10, &VAR_13) < 0 || VAR_13 > 0xff)
  return -VAR_0;

 FUNC_4(&VAR_11->lock);
 FUNC_7(VAR_11, VAR_12);
 VAR_15 = VAR_11->pwm_enable[VAR_12] & VAR_4;
 if (VAR_15 != VAR_5 && VAR_15 != VAR_6) {
  FUNC_2(VAR_7,
      "Can't set PWM%d duty cycle while not in manual mode\n",
      VAR_12 + 1);
  FUNC_5(&VAR_11->lock);
  return -VAR_1;
 }


 if (VAR_15 == VAR_5 && VAR_13 == 0) {

  FUNC_9(VAR_11, VAR_12, VAR_6);
  VAR_15 = VAR_6;
  FUNC_0(VAR_7, "Switching PWM%d from %s to %s\n", VAR_12 + 1,
   "manual", "off");
 } else if (VAR_15 == VAR_6 && VAR_13 != 0) {

  FUNC_9(VAR_11, VAR_12, VAR_5);
  VAR_15 = VAR_5;
  FUNC_0(VAR_7, "Switching PWM%d from %s to %s\n", VAR_12 + 1,
   "off", "manual");
 }

 VAR_11->pwm[VAR_12] = VAR_13;
 if (VAR_15 == VAR_5)
  FUNC_6(VAR_13, VAR_14 + VAR_3);
 FUNC_5(&VAR_11->lock);

 return VAR_10;
}
