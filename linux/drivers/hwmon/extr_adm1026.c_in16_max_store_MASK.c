
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {int update_lock; int * in_max; struct i2c_client* client; } ;
typedef int ssize_t ;


 int * VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 scalar_t__ FUNC_2 (long,int ,scalar_t__) ;
 struct adm1026_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4,
         struct device_attribute *VAR_5, const char *VAR_6,
         size_t VAR_7)
{
 struct adm1026_data *VAR_8 = FUNC_3(VAR_4);
 struct i2c_client *VAR_9 = VAR_8->client;
 long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_6, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_5(&VAR_8->update_lock);
 VAR_8->in_max[16] = FUNC_0(16,
          FUNC_2(VAR_10, VAR_2,
      VAR_1 - VAR_3) +
          VAR_3);
 FUNC_1(VAR_9, VAR_0[16], VAR_8->in_max[16]);
 FUNC_6(&VAR_8->update_lock);
 return VAR_7;
}
