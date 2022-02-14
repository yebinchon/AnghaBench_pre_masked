
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm93_data {int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 struct lm93_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
    struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = (FUNC_7(VAR_3))->index;
 struct lm93_data *VAR_7 = FUNC_1(VAR_2);
 struct i2c_client *VAR_8 = VAR_7->client;
 u8 VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_4, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_5(&VAR_7->update_lock);
 VAR_9 = FUNC_3(VAR_8, FUNC_0(VAR_6, VAR_1));

 switch (VAR_10) {
 case 0:
  VAR_9 |= 0xF1;
  break;
 case 1:
  VAR_9 |= 0x01;
  break;
 case 2:
  VAR_9 &= ~0x01;
  break;
 default:
  FUNC_6(&VAR_7->update_lock);
  return -VAR_0;
 }

 FUNC_4(VAR_8, FUNC_0(VAR_6, VAR_1), VAR_9);
 FUNC_6(&VAR_7->update_lock);
 return VAR_5;
}
