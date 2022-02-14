
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_4__ {int reg_size; int n_values; int base_nr; unsigned int* classes; int * values; scalar_t__ idle_in_use; scalar_t__ reg; int parent; } ;
struct regmux {TYPE_2__ data; } ;
struct platform_device {int dev; } ;
struct i2c_mux_core {TYPE_1__* parent; int deselect; struct regmux* priv; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,struct resource*) ;
 struct regmux* FUNC_7 (int *,int,int ) ;
 struct i2c_adapter* FUNC_8 (int ) ;
 int FUNC_9 (struct i2c_mux_core*,int,int ,unsigned int) ;
 struct i2c_mux_core* FUNC_10 (struct i2c_adapter*,int *,int,int ,int ,int ,int *) ;
 int FUNC_11 (struct i2c_mux_core*) ;
 int VAR_5 ;
 int FUNC_12 (struct regmux*,struct platform_device*) ;
 int VAR_6 ;
 int FUNC_13 (struct i2c_adapter*) ;
 int FUNC_14 (TYPE_2__*,scalar_t__,int) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct i2c_mux_core*) ;
 int FUNC_17 (struct resource*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_7)
{
 struct i2c_mux_core *VAR_8;
 struct regmux *VAR_9;
 struct i2c_adapter *VAR_10;
 struct resource *VAR_11;
 unsigned int VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_9 = FUNC_7(&VAR_7->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 if (FUNC_4(&VAR_7->dev)) {
  FUNC_14(&VAR_9->data, FUNC_4(&VAR_7->dev),
   sizeof(VAR_9->data));
 } else {
  VAR_14 = FUNC_12(VAR_9, VAR_7);
  if (VAR_14 == -VAR_2)
   return VAR_14;

  if (VAR_14 < 0) {
   FUNC_3(&VAR_7->dev, "Error parsing device tree");
   return VAR_14;
  }
 }

 VAR_10 = FUNC_8(VAR_9->data.parent);
 if (!VAR_10)
  return -VAR_2;

 if (!VAR_9->data.reg) {
  FUNC_5(&VAR_7->dev,
   "Register not set, using platform resource\n");
  VAR_11 = FUNC_15(VAR_7, VAR_4, 0);
  VAR_9->data.reg_size = FUNC_17(VAR_11);
  VAR_9->data.reg = FUNC_6(&VAR_7->dev, VAR_11);
  if (FUNC_0(VAR_9->data.reg)) {
   VAR_14 = FUNC_1(VAR_9->data.reg);
   goto err_put_parent;
  }
 }

 if (VAR_9->data.reg_size != 4 && VAR_9->data.reg_size != 2 &&
     VAR_9->data.reg_size != 1) {
  FUNC_3(&VAR_7->dev, "Invalid register size\n");
  VAR_14 = -VAR_0;
  goto err_put_parent;
 }

 VAR_8 = FUNC_10(VAR_10, &VAR_7->dev, VAR_9->data.n_values, 0, 0,
        VAR_6, ((void*)0));
 if (!VAR_8) {
  VAR_14 = -VAR_1;
  goto err_put_parent;
 }
 VAR_8->priv = VAR_9;

 FUNC_16(VAR_7, VAR_8);

 if (VAR_9->data.idle_in_use)
  VAR_8->deselect = VAR_5;

 for (VAR_13 = 0; VAR_13 < VAR_9->data.n_values; VAR_13++) {
  VAR_15 = VAR_9->data.base_nr ? (VAR_9->data.base_nr + VAR_13) : 0;
  VAR_12 = VAR_9->data.classes ? VAR_9->data.classes[VAR_13] : 0;

  VAR_14 = FUNC_9(VAR_8, VAR_15, VAR_9->data.values[VAR_13], VAR_12);
  if (VAR_14)
   goto err_del_mux_adapters;
 }

 FUNC_2(&VAR_7->dev, "%d port mux on %s adapter\n",
   VAR_9->data.n_values, VAR_8->parent->name);

 return 0;

err_del_mux_adapters:
 FUNC_11(VAR_8);
err_put_parent:
 FUNC_13(VAR_10);

 return VAR_14;
}
