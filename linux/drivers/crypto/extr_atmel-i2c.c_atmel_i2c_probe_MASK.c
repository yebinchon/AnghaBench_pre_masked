
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long u32 ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {TYPE_1__* adapter; struct device dev; } ;
struct atmel_i2c_client_priv {int tfm_count; int wake_token; int wake_token_sz; int lock; struct i2c_client* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (long) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (int *,char*,long*) ;
 int FUNC_4 (struct i2c_client*) ;
 struct atmel_i2c_client_priv* FUNC_5 (struct device*,int,int ) ;
 long FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (struct i2c_client*,struct atmel_i2c_client_priv*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct i2c_client *VAR_5, const struct i2c_device_id *VAR_6)
{
 struct atmel_i2c_client_priv *VAR_7;
 struct device *VAR_8 = &VAR_5->dev;
 int VAR_9;
 u32 VAR_10;

 if (!FUNC_7(VAR_5->adapter, VAR_4)) {
  FUNC_2(VAR_8, "I2C_FUNC_I2C not supported\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_6(&VAR_5->adapter->dev);
 if (!VAR_10) {
  VAR_9 = FUNC_3(&VAR_5->adapter->dev,
            "clock-frequency", &VAR_10);
  if (VAR_9) {
   FUNC_2(VAR_8, "failed to read clock-frequency property\n");
   return VAR_9;
  }
 }

 if (VAR_10 > 1000000L) {
  FUNC_2(VAR_8, "%d exceeds maximum supported clock frequency (1MHz)\n",
   VAR_10);
  return -VAR_0;
 }

 VAR_7 = FUNC_5(VAR_8, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->client = VAR_5;
 FUNC_10(&VAR_7->lock);






 VAR_7->wake_token_sz = FUNC_0(VAR_10);

 FUNC_9(VAR_7->wake_token, 0, sizeof(VAR_7->wake_token));

 FUNC_1(&VAR_7->tfm_count, 0);

 FUNC_8(VAR_5, VAR_7);

 VAR_9 = FUNC_4(VAR_5);
 if (VAR_9)
  return VAR_9;

 return 0;
}
