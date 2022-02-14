
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct property {int length; void* value; void* name; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct i2c_demux_pinctrl_priv {int num_chan; TYPE_1__* chan; TYPE_2__* dev; int bus_name; } ;
struct device_node {int dummy; } ;
struct TYPE_9__ {int chgset; struct device_node* parent_np; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 struct property* FUNC_3 (TYPE_2__*,int,int,int ) ;
 void* FUNC_4 (TYPE_2__*,char*,int ) ;
 struct i2c_demux_pinctrl_priv* FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (struct i2c_demux_pinctrl_priv*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct device_node*,struct property*) ;
 int FUNC_10 (struct device_node*,char*,int *) ;
 int FUNC_11 (struct device_node*) ;
 struct device_node* FUNC_12 (struct device_node*,char*,int) ;
 int FUNC_13 (struct device_node*,char*,int *) ;
 int FUNC_14 (struct platform_device*,struct i2c_demux_pinctrl_priv*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (struct i2c_demux_pinctrl_priv*,int ,int) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct i2c_demux_pinctrl_priv *VAR_9;
 struct property *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_11 = FUNC_10(VAR_8, "i2c-parent", ((void*)0));
 if (VAR_11 < 2) {
  FUNC_0(&VAR_7->dev, "Need at least two I2C masters to switch\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(&VAR_7->dev, FUNC_16(VAR_9, VAR_4, VAR_11),
       VAR_3);

 VAR_10 = FUNC_3(&VAR_7->dev, VAR_11, sizeof(*VAR_10), VAR_3);

 if (!VAR_9 || !VAR_10)
  return -VAR_2;

 VAR_14 = FUNC_13(VAR_8, "i2c-bus-name", &VAR_9->bus_name);
 if (VAR_14)
  return VAR_14;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  struct device_node *VAR_15;

  VAR_15 = FUNC_12(VAR_8, "i2c-parent", VAR_12);
  if (!VAR_15) {
   FUNC_0(&VAR_7->dev, "can't get phandle for parent %d\n", VAR_12);
   VAR_14 = -VAR_1;
   goto err_rollback;
  }
  VAR_9->chan[VAR_12].parent_np = VAR_15;

  VAR_10[VAR_12].name = FUNC_4(&VAR_7->dev, "status", VAR_3);
  VAR_10[VAR_12].value = FUNC_4(&VAR_7->dev, "ok", VAR_3);
  VAR_10[VAR_12].length = 3;

  FUNC_8(&VAR_9->chan[VAR_12].chgset);
  FUNC_9(&VAR_9->chan[VAR_12].chgset, VAR_15, &VAR_10[VAR_12]);
 }

 VAR_9->num_chan = VAR_11;
 VAR_9->dev = &VAR_7->dev;

 FUNC_14(VAR_7, VAR_9);

 FUNC_15(&VAR_7->dev);


 FUNC_6(VAR_9, 0);

 VAR_14 = FUNC_1(&VAR_7->dev, &VAR_5);
 if (VAR_14)
  goto err_rollback;

 VAR_14 = FUNC_1(&VAR_7->dev, &VAR_6);
 if (VAR_14)
  goto err_rollback_available;

 return 0;

err_rollback_available:
 FUNC_2(&VAR_7->dev, &VAR_5);
err_rollback:
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  FUNC_11(VAR_9->chan[VAR_13].parent_np);
  FUNC_7(&VAR_9->chan[VAR_13].chgset);
 }

 return VAR_14;
}
