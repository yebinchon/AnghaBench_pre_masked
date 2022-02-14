
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct TYPE_2__ {scalar_t__ priv; } ;
struct atmel_i2c_client_priv {TYPE_1__ hwrng; int tfm_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 struct atmel_i2c_client_priv* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1)
{
 struct atmel_i2c_client_priv *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_0(&VAR_2->tfm_count)) {
  FUNC_1(&VAR_1->dev, "Device is busy\n");
  return -VAR_0;
 }

 if (VAR_2->hwrng.priv)
  FUNC_3((void *)VAR_2->hwrng.priv);

 return 0;
}
