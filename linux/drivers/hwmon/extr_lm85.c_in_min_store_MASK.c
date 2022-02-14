
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm85_data {int update_lock; int * in_min; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int,long) ;
 int FUNC_1 (int) ;
 struct lm85_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0, struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_7(VAR_1)->index;
 struct lm85_data *VAR_5 = FUNC_2(VAR_0);
 struct i2c_client *VAR_6 = VAR_5->client;
 long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_2, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_5(&VAR_5->update_lock);
 VAR_5->in_min[VAR_4] = FUNC_0(VAR_4, VAR_7);
 FUNC_4(VAR_6, FUNC_1(VAR_4), VAR_5->in_min[VAR_4]);
 FUNC_6(&VAR_5->update_lock);
 return VAR_3;
}
