
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fwnode; int of_node; int * type; int * bus; int * parent; int platform_data; } ;
struct i2c_client {int flags; int addr; int name; TYPE_1__ dev; struct i2c_adapter* adapter; scalar_t__ init_irq; } ;
struct i2c_board_info {int flags; int of_node; int properties; int fwnode; int type; int num_resources; int resources; scalar_t__ irq; int addr; int platform_data; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 struct i2c_client* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,char*,int,int,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_7 (struct i2c_adapter*,int ) ;
 int FUNC_8 (int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (struct i2c_adapter*,struct i2c_client*,struct i2c_board_info const*) ;
 int FUNC_11 (struct i2c_client*) ;
 int FUNC_12 (struct i2c_client*) ;
 struct i2c_client* FUNC_13 (int,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int) ;

struct i2c_client *
FUNC_17(struct i2c_adapter *VAR_5, struct i2c_board_info const *VAR_6)
{
 struct i2c_client *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_13(sizeof *VAR_7, VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->adapter = VAR_5;

 VAR_7->dev.platform_data = VAR_6->platform_data;
 VAR_7->flags = VAR_6->flags;
 VAR_7->addr = VAR_6->addr;

 VAR_7->init_irq = VAR_6->irq;
 if (!VAR_7->init_irq)
  VAR_7->init_irq = FUNC_9(VAR_6->resources,
        VAR_6->num_resources);

 FUNC_16(VAR_7->name, VAR_6->type, sizeof(VAR_7->name));

 VAR_8 = FUNC_8(VAR_7->addr, VAR_7->flags);
 if (VAR_8) {
  FUNC_2(&VAR_5->dev, "Invalid %d-bit I2C address 0x%02hx\n",
   VAR_7->flags & VAR_2 ? 10 : 7, VAR_7->addr);
  goto out_err_silent;
 }


 VAR_8 = FUNC_7(VAR_5, FUNC_11(VAR_7));
 if (VAR_8)
  goto out_err;

 VAR_7->dev.parent = &VAR_7->adapter->dev;
 VAR_7->dev.bus = &VAR_3;
 VAR_7->dev.type = &VAR_4;
 VAR_7->dev.of_node = FUNC_14(VAR_6->of_node);
 VAR_7->dev.fwnode = VAR_6->fwnode;

 FUNC_10(VAR_5, VAR_7, VAR_6);

 if (VAR_6->properties) {
  VAR_8 = FUNC_4(&VAR_7->dev, VAR_6->properties);
  if (VAR_8) {
   FUNC_2(&VAR_5->dev,
    "Failed to add properties to client %s: %d\n",
    VAR_7->name, VAR_8);
   goto out_err_put_of_node;
  }
 }

 VAR_8 = FUNC_5(&VAR_7->dev);
 if (VAR_8)
  goto out_free_props;

 FUNC_1(&VAR_5->dev, "client [%s] registered with bus id %s\n",
  VAR_7->name, FUNC_3(&VAR_7->dev));

 return VAR_7;

out_free_props:
 if (VAR_6->properties)
  FUNC_6(&VAR_7->dev);
out_err_put_of_node:
 FUNC_15(VAR_6->of_node);
out_err:
 FUNC_2(&VAR_5->dev,
  "Failed to register i2c client %s at 0x%02x (%d)\n",
  VAR_7->name, VAR_7->addr, VAR_8);
out_err_silent:
 FUNC_12(VAR_7);
 return FUNC_0(VAR_8);
}
