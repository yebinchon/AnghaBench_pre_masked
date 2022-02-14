
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwrng {unsigned long priv; } ;
struct atmel_i2c_work_data {struct atmel_i2c_client_priv* ctx; } ;
struct atmel_i2c_client_priv {int tfm_count; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void FUNC_2(struct atmel_i2c_work_data *VAR_0,
       void *VAR_1, int VAR_2)
{
 struct atmel_i2c_client_priv *VAR_3 = VAR_0->ctx;
 struct hwrng *VAR_4 = VAR_1;

 if (VAR_2)
  FUNC_1(&VAR_3->client->dev,
         "i2c transaction failed (%d)\n",
         VAR_2);

 VAR_4->priv = (unsigned long)VAR_0;
 FUNC_0(&VAR_3->tfm_count);
}
