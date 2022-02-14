
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm93_data {int sfc2; int* boost_hyst; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (struct lm93_data*,unsigned long,int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct lm93_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = (FUNC_8(VAR_2))->index;
 struct lm93_data *VAR_6 = FUNC_2(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_3, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_6(&VAR_6->update_lock);

 VAR_6->sfc2 = FUNC_4(VAR_7, VAR_0);
 VAR_6->sfc2 |= ((VAR_5 < 2) ? 0x10 : 0x20);
 FUNC_5(VAR_7, VAR_0, VAR_6->sfc2);
 VAR_6->boost_hyst[VAR_5/2] = FUNC_0(VAR_6, VAR_8, VAR_5, 1);
 FUNC_5(VAR_7, FUNC_1(VAR_5),
   VAR_6->boost_hyst[VAR_5/2]);
 FUNC_7(&VAR_6->update_lock);
 return VAR_4;
}
