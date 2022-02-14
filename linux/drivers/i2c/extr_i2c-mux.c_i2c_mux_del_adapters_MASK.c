
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int symlink_name ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_8__ {TYPE_3__ dev; } ;
struct i2c_mux_priv {int chan_id; TYPE_4__ adap; } ;
struct i2c_mux_core {int num_adapters; TYPE_2__* dev; struct i2c_adapter** adapter; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct i2c_adapter {TYPE_1__ dev; struct i2c_mux_priv* algo_data; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int kobj; } ;


 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct i2c_mux_priv*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int *,char*) ;

void FUNC_5(struct i2c_mux_core *VAR_0)
{
 char VAR_1[20];

 while (VAR_0->num_adapters) {
  struct i2c_adapter *VAR_2 = VAR_0->adapter[--VAR_0->num_adapters];
  struct i2c_mux_priv *VAR_3 = VAR_2->algo_data;
  struct device_node *VAR_4 = VAR_2->dev.of_node;

  VAR_0->adapter[VAR_0->num_adapters] = ((void*)0);

  FUNC_3(VAR_1, sizeof(VAR_1),
    "channel-%u", VAR_3->chan_id);
  FUNC_4(&VAR_0->dev->kobj, VAR_1);

  FUNC_4(&VAR_3->adap.dev.kobj, "mux_device");
  FUNC_0(VAR_2);
  FUNC_2(VAR_4);
  FUNC_1(VAR_3);
 }
}
