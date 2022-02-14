
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sht3x_data {size_t mode; int data_lock; scalar_t__ last_update; int humidity; int temperature; int wait_time; int command; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
typedef int buf ;
typedef int __be16 ;


 struct sht3x_data* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct sht3x_data* FUNC_2 (struct device*) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct i2c_client*,struct sht3x_data*,int ,unsigned char*,int,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct sht3x_data *FUNC_10(struct device *VAR_3)
{
 struct sht3x_data *VAR_4 = FUNC_2(VAR_3);
 struct i2c_client *VAR_5 = VAR_4->client;
 u16 VAR_6 = VAR_2[VAR_4->mode];
 unsigned long VAR_7 = FUNC_3(VAR_6);
 unsigned char VAR_8[VAR_0];
 u16 VAR_9;
 int VAR_10 = 0;

 FUNC_4(&VAR_4->data_lock);
 if (FUNC_9(VAR_1, VAR_4->last_update + VAR_7)) {
  VAR_10 = FUNC_8(VAR_5, VAR_4, VAR_4->command, VAR_8,
           sizeof(VAR_8), VAR_4->wait_time);
  if (VAR_10)
   goto out;

  VAR_9 = FUNC_1((__be16 *)VAR_8);
  VAR_4->temperature = FUNC_7(VAR_9);
  VAR_9 = FUNC_1((__be16 *)(VAR_8 + 3));
  VAR_4->humidity = FUNC_6(VAR_9);
  VAR_4->last_update = VAR_1;
 }

out:
 FUNC_5(&VAR_4->data_lock);
 if (VAR_10)
  return FUNC_0(VAR_10);

 return VAR_4;
}
