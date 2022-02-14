
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct atmel_i2c_cmd {int data; int rxsize; int msecs; scalar_t__ count; } ;
struct atmel_i2c_client_priv {int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct i2c_client*) ;
 struct atmel_i2c_client_priv* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (struct i2c_client*,int *,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct i2c_client *VAR_1, struct atmel_i2c_cmd *VAR_2)
{
 struct atmel_i2c_client_priv *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 FUNC_7(&VAR_3->lock);

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4)
  goto err;


 VAR_4 = FUNC_5(VAR_1, (u8 *)VAR_2, VAR_2->count + VAR_0);
 if (VAR_4 < 0)
  goto err;


 FUNC_6(VAR_2->msecs);


 VAR_4 = FUNC_4(VAR_1, VAR_2->data, VAR_2->rxsize);
 if (VAR_4 < 0)
  goto err;


 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 < 0)
  goto err;

 FUNC_8(&VAR_3->lock);
 return FUNC_1(&VAR_1->dev, VAR_2->data);
err:
 FUNC_8(&VAR_3->lock);
 return VAR_4;
}
