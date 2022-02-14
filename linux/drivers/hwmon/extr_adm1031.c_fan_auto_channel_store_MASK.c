
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1031_data {int conf1; int* old_pwm; int* pwm; int update_lock; struct i2c_client* client; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 struct adm1031_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct adm1031_data*,int,long,int) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_3, struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct adm1031_data *VAR_7 = FUNC_2(VAR_3);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9 = FUNC_7(VAR_4)->index;
 long VAR_10;
 u8 VAR_11;
 int VAR_12;
 u8 VAR_13;

 VAR_12 = FUNC_4(VAR_5, 10, &VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_13 = VAR_7->conf1;

 FUNC_5(&VAR_7->update_lock);

 VAR_12 = FUNC_3(VAR_7, VAR_9, VAR_10, VAR_7->conf1);
 if (VAR_12 < 0) {
  FUNC_6(&VAR_7->update_lock);
  return VAR_12;
 }
 VAR_11 = VAR_12;
 VAR_7->conf1 = FUNC_0(VAR_11, VAR_7->conf1);
 if ((VAR_7->conf1 & VAR_0) ^
     (VAR_13 & VAR_0)) {
  if (VAR_7->conf1 & VAR_0) {





   VAR_7->old_pwm[0] = VAR_7->pwm[0];
   VAR_7->old_pwm[1] = VAR_7->pwm[1];
   FUNC_1(VAR_8, VAR_2, 0x55);
  } else {

   VAR_7->pwm[0] = VAR_7->old_pwm[0];
   VAR_7->pwm[1] = VAR_7->old_pwm[1];

   FUNC_1(VAR_8, VAR_2,
         VAR_7->pwm[0] | (VAR_7->pwm[1] << 4));
  }
 }
 VAR_7->conf1 = FUNC_0(VAR_11, VAR_7->conf1);
 FUNC_1(VAR_8, VAR_1, VAR_7->conf1);
 FUNC_6(&VAR_7->update_lock);
 return VAR_6;
}
