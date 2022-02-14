
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm63_data {int trutherm; int update_lock; scalar_t__ valid; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct lm63_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
    struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct lm63_data *VAR_6 = FUNC_0(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->client;
 unsigned long VAR_8;
 int VAR_9;
 u8 VAR_10;

 VAR_9 = FUNC_3(VAR_4, 10, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_8 != 1 && VAR_8 != 2)
  return -VAR_0;

 FUNC_4(&VAR_6->update_lock);
 VAR_6->trutherm = VAR_8 == 1;
 VAR_10 = FUNC_1(VAR_7, VAR_1) & ~0x02;
 FUNC_2(VAR_7, VAR_1,
      VAR_10 | (VAR_6->trutherm ? 0x02 : 0x00));
 VAR_6->valid = 0;
 FUNC_5(&VAR_6->update_lock);

 return VAR_5;
}
