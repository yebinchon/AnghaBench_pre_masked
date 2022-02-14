
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm93_data {int update_lock; int * pwm_override; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int,int ) ;
 struct lm93_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_4, struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 int VAR_8 = (FUNC_9(VAR_5))->index;
 struct lm93_data *VAR_9 = FUNC_3(VAR_4);
 struct i2c_client *VAR_10 = VAR_9->client;
 u8 VAR_11, VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_6, 10, &VAR_13);
 if (VAR_14)
  return VAR_14;

 FUNC_7(&VAR_9->update_lock);
 VAR_11 = FUNC_5(VAR_10, FUNC_2(VAR_8, VAR_0));
 VAR_12 = FUNC_5(VAR_10, FUNC_2(VAR_8, VAR_1));
 VAR_11 = (VAR_11 & 0x0f) | FUNC_1(VAR_13, (VAR_12 & 0x07) ?
   VAR_3 : VAR_2) << 4;

 VAR_9->pwm_override[VAR_8] = FUNC_0(VAR_11 >> 4,
   (VAR_12 & 0x07) ? VAR_3 :
   VAR_2);
 FUNC_6(VAR_10, FUNC_2(VAR_8, VAR_0), VAR_11);
 FUNC_8(&VAR_9->update_lock);
 return VAR_7;
}
