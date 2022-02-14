
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm93_data {int* auto_pwm_min_hyst; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 struct lm93_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_3,
           struct device_attribute *VAR_4,
           const char *VAR_5, size_t VAR_6)
{
 int VAR_7 = (FUNC_9(VAR_4))->index;
 struct lm93_data *VAR_8 = FUNC_3(VAR_3);
 struct i2c_client *VAR_9 = VAR_8->client;
 u8 VAR_10, VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 VAR_13 = FUNC_4(VAR_5, 10, &VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_7(&VAR_8->update_lock);
 VAR_10 = FUNC_5(VAR_9, FUNC_2(VAR_7));
 VAR_11 = FUNC_5(VAR_9, FUNC_1(VAR_7, VAR_0));
 VAR_10 = (VAR_10 & 0x0f) |
  FUNC_0(VAR_12, (VAR_11 & 0x07) ?
    VAR_2 :
    VAR_1) << 4;
 VAR_8->auto_pwm_min_hyst[VAR_7/2] = VAR_10;
 FUNC_6(VAR_9, FUNC_2(VAR_7), VAR_10);
 FUNC_8(&VAR_8->update_lock);
 return VAR_6;
}
