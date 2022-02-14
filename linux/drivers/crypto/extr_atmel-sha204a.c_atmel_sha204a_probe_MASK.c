
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_3__ {int quality; int read; int name; } ;
struct atmel_i2c_client_priv {TYPE_1__ hwrng; } ;


 int FUNC_0 (struct i2c_client*,struct i2c_device_id const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 struct atmel_i2c_client_priv* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1,
          const struct i2c_device_id *VAR_2)
{
 struct atmel_i2c_client_priv *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3 = FUNC_4(VAR_1);

 FUNC_5(&VAR_3->hwrng, 0, sizeof(VAR_3->hwrng));

 VAR_3->hwrng.name = FUNC_1(&VAR_1->dev);
 VAR_3->hwrng.read = VAR_0;
 VAR_3->hwrng.quality = 1024;

 VAR_4 = FUNC_3(&VAR_1->dev, &VAR_3->hwrng);
 if (VAR_4)
  FUNC_2(&VAR_1->dev, "failed to register RNG (%d)\n", VAR_4);

 return VAR_4;
}
