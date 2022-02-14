
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct atmel_i2c_client_priv {int i2c_client_list_node; } ;
struct TYPE_5__ {int cra_driver_name; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
struct TYPE_6__ {int i2c_list_lock; int i2c_client_list; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (struct i2c_client*,struct i2c_device_id const*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*) ;
 TYPE_2__ VAR_1 ;
 struct atmel_i2c_client_priv* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_2,
      const struct i2c_device_id *VAR_3)
{
 struct atmel_i2c_client_priv *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_4(VAR_2);

 FUNC_7(&VAR_1.i2c_list_lock);
 FUNC_5(&VAR_4->i2c_client_list_node,
        &VAR_1.i2c_client_list);
 FUNC_8(&VAR_1.i2c_list_lock);

 VAR_5 = FUNC_1(&VAR_0);
 if (VAR_5) {
  FUNC_7(&VAR_1.i2c_list_lock);
  FUNC_6(&VAR_4->i2c_client_list_node);
  FUNC_8(&VAR_1.i2c_list_lock);

  FUNC_2(&VAR_2->dev, "%s alg registration failed\n",
   VAR_0.base.cra_driver_name);
 } else {
  FUNC_3(&VAR_2->dev, "atmel ecc algorithms registered in /proc/crypto\n");
 }

 return VAR_5;
}
