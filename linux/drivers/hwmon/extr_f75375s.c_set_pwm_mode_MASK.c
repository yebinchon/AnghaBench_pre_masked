
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct f75375_data {scalar_t__ kind; unsigned long* pwm_mode; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 char FUNC_0 (int) ;
 char VAR_1 ;
 char VAR_2 ;
 char FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct i2c_client*,char) ;
 int FUNC_3 (struct i2c_client*,char,int) ;
 scalar_t__ VAR_4 ;
 struct f75375_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_5, struct device_attribute *VAR_6,
  const char *VAR_7, size_t VAR_8)
{
 int VAR_9 = FUNC_9(VAR_6)->index;
 struct i2c_client *VAR_10 = FUNC_8(VAR_5);
 struct f75375_data *VAR_11 = FUNC_4(VAR_10);
 unsigned long VAR_12;
 int VAR_13;
 u8 VAR_14;
 char VAR_15, VAR_16;

 VAR_13 = FUNC_5(VAR_7, 10, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 if (!(VAR_12 == 0 || VAR_12 == 1))
  return -VAR_0;


 if (VAR_11->kind == VAR_3 && VAR_12 == 0)
  return -VAR_0;


 if (VAR_11->kind == VAR_4) {
  VAR_15 = VAR_2;
  VAR_16 = FUNC_1(VAR_9);
 } else {
  VAR_15 = VAR_1;
  VAR_16 = FUNC_0(VAR_9);
 }

 FUNC_6(&VAR_11->update_lock);
 VAR_14 = FUNC_2(VAR_10, VAR_15);
 VAR_14 &= ~(1 << VAR_16);

 if (VAR_12 == 0)
  VAR_14 |= (1 << VAR_16);

 FUNC_3(VAR_10, VAR_15, VAR_14);
 VAR_11->pwm_mode[VAR_9] = VAR_12;
 FUNC_7(&VAR_11->update_lock);
 return VAR_8;
}
