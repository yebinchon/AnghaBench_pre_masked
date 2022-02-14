
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lm90_data {int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (long,int ,int) ;
 struct lm90_data* FUNC_1 (struct device*) ;

 int FUNC_2 (struct i2c_client*,struct lm90_data*,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, u32 VAR_2, int VAR_3, long VAR_4)
{
 struct lm90_data *VAR_5 = FUNC_1(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7;

 FUNC_4(&VAR_5->update_lock);

 VAR_7 = FUNC_3(VAR_1);
 if (VAR_7)
  goto error;

 switch (VAR_2) {
 case 128:
  VAR_7 = FUNC_2(VAR_6, VAR_5,
     FUNC_0(VAR_4, 0, 100000));
  break;
 default:
  VAR_7 = -VAR_0;
  break;
 }
error:
 FUNC_5(&VAR_5->update_lock);

 return VAR_7;
}
