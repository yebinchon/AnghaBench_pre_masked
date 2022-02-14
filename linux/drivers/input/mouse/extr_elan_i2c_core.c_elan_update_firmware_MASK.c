
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int irq; int dev; } ;
struct firmware {int dummy; } ;
struct elan_tp_data {int in_fw_update; TYPE_1__* ops; struct i2c_client* client; } ;
struct TYPE_2__ {int (* iap_reset ) (struct i2c_client*) ;} ;


 int FUNC_0 (struct elan_tp_data*,struct firmware const*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct elan_tp_data*) ;
 int FUNC_5 (struct elan_tp_data*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_8(struct elan_tp_data *VAR_0,
    const struct firmware *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_0->client;
 int VAR_3;

 FUNC_1(&VAR_2->dev, "Starting firmware update....\n");

 FUNC_3(VAR_2->irq);
 VAR_0->in_fw_update = 1;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3) {
  FUNC_2(&VAR_2->dev, "firmware update failed: %d\n", VAR_3);
  VAR_0->ops->iap_reset(VAR_2);
 } else {

  FUNC_4(VAR_0);
  FUNC_5(VAR_0);
 }

 VAR_0->in_fw_update = 0;
 FUNC_6(VAR_2->irq);

 return VAR_3;
}
