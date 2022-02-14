
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shtc1_data {int valid; int temperature; int humidity; int update_lock; scalar_t__ last_updated; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
typedef int buf ;
typedef int __be16 ;


 struct shtc1_data* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct shtc1_data* FUNC_2 (struct device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct i2c_client*,struct shtc1_data*,unsigned char*,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct shtc1_data *FUNC_7(struct device *VAR_3)
{
 struct shtc1_data *VAR_4 = FUNC_2(VAR_3);
 struct i2c_client *VAR_5 = VAR_4->client;
 unsigned char VAR_6[VAR_1];
 int VAR_7;
 int VAR_8 = 0;

 FUNC_3(&VAR_4->update_lock);

 if (FUNC_6(VAR_2, VAR_4->last_updated + VAR_0 / 10) || !VAR_4->valid) {
  VAR_8 = FUNC_5(VAR_5, VAR_4, VAR_6, sizeof(VAR_6));
  if (VAR_8)
   goto out;
  VAR_7 = FUNC_1((__be16 *)VAR_6);
  VAR_4->temperature = ((21875 * VAR_7) >> 13) - 45000;
  VAR_7 = FUNC_1((__be16 *)(VAR_6 + 3));
  VAR_4->humidity = ((12500 * VAR_7) >> 13);

  VAR_4->last_updated = VAR_2;
  VAR_4->valid = 1;
 }

out:
 FUNC_4(&VAR_4->update_lock);

 return VAR_8 == 0 ? VAR_4 : FUNC_0(VAR_8);
}
