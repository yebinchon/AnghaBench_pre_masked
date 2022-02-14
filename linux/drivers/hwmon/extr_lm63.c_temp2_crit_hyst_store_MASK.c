
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm63_data {long temp2_offset; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (long) ;
 int VAR_0 ;
 struct lm63_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (struct lm63_data*,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct lm63_data *VAR_5 = FUNC_1(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 long VAR_7;
 int VAR_8;
 long VAR_9;

 VAR_8 = FUNC_3(VAR_3, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_4(&VAR_5->update_lock);
 VAR_9 = FUNC_6(VAR_5, 2) + VAR_5->temp2_offset - VAR_7;
 FUNC_2(VAR_6, VAR_0,
      FUNC_0(VAR_9));
 FUNC_5(&VAR_5->update_lock);
 return VAR_4;
}
