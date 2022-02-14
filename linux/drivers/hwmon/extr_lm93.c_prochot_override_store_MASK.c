
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm93_data {int update_lock; int prochot_override; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 struct lm93_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_1 ;
 TYPE_1__* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = (FUNC_5(VAR_3))->index;
 struct lm93_data *VAR_7 = FUNC_0(VAR_2);
 struct i2c_client *VAR_8 = VAR_7->client;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_4, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_3(&VAR_7->update_lock);
 if (VAR_9)
  VAR_7->prochot_override |= VAR_1[VAR_6];
 else
  VAR_7->prochot_override &= (~VAR_1[VAR_6]);
 FUNC_2(VAR_8, VAR_0,
   VAR_7->prochot_override);
 FUNC_4(&VAR_7->update_lock);
 return VAR_5;
}
