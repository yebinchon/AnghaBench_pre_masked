
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct atmel_i2c_client_priv {int i2c_client_list_node; int tfm_count; } ;
struct TYPE_2__ {int i2c_list_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 TYPE_1__ VAR_2 ;
 struct atmel_i2c_client_priv* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_3)
{
 struct atmel_i2c_client_priv *VAR_4 = FUNC_3(VAR_3);


 if (FUNC_0(&VAR_4->tfm_count)) {
  FUNC_2(&VAR_3->dev, "Device is busy\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_1);

 FUNC_5(&VAR_2.i2c_list_lock);
 FUNC_4(&VAR_4->i2c_client_list_node);
 FUNC_6(&VAR_2.i2c_list_lock);

 return 0;
}
