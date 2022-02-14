
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm93_data {int prochot_interval; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 struct lm93_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = (FUNC_7(VAR_2))->index;
 struct lm93_data *VAR_6 = FUNC_1(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 u8 VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_3, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_5(&VAR_6->update_lock);
 VAR_8 = FUNC_3(VAR_7, VAR_0);
 if (VAR_5 == 1)
  VAR_8 = (VAR_8 & 0x0f) | (FUNC_0(VAR_9) << 4);
 else
  VAR_8 = (VAR_8 & 0xf0) | FUNC_0(VAR_9);
 VAR_6->prochot_interval = VAR_8;
 FUNC_4(VAR_7, VAR_0, VAR_8);
 FUNC_6(&VAR_6->update_lock);
 return VAR_4;
}
