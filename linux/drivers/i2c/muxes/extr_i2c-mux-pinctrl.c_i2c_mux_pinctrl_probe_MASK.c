
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct i2c_mux_pinctrl {struct i2c_adapter** states; struct i2c_adapter* pinctrl; } ;
struct i2c_mux_core {int mux_locked; int deselect; TYPE_1__* parent; } ;
struct i2c_adapter {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 struct i2c_adapter* FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_mux_core*,int ,int,int ) ;
 struct i2c_mux_core* FUNC_6 (struct i2c_adapter*,struct device*,int,int ,int ,int ,int *) ;
 int FUNC_7 (struct i2c_mux_core*) ;
 int VAR_2 ;
 struct i2c_adapter* FUNC_8 (struct device*) ;
 struct i2c_adapter* FUNC_9 (struct i2c_adapter*) ;
 int VAR_3 ;
 struct i2c_mux_pinctrl* FUNC_10 (struct i2c_mux_core*) ;
 int FUNC_11 (struct i2c_adapter*) ;
 struct i2c_adapter* FUNC_12 (int *) ;
 int FUNC_13 (struct device_node*,char*) ;
 int FUNC_14 (struct device_node*,char*,int,char const**) ;
 struct i2c_adapter* FUNC_15 (struct i2c_adapter*,char const*) ;
 int FUNC_16 (struct platform_device*,struct i2c_mux_core*) ;
 int VAR_4 ;
 scalar_t__ FUNC_17 (char const*,char*) ;
 int FUNC_18 (struct i2c_mux_pinctrl*,int ,int) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct device_node *VAR_7 = VAR_6->of_node;
 struct i2c_mux_core *VAR_8;
 struct i2c_mux_pinctrl *VAR_9;
 struct i2c_adapter *VAR_10;
 struct i2c_adapter *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 const char *VAR_15;

 VAR_12 = FUNC_13(VAR_7, "pinctrl-names");
 if (VAR_12 < 0) {
  FUNC_2(VAR_6, "Cannot parse pinctrl-names: %d\n",
   VAR_12);
  return VAR_12;
 }

 VAR_10 = FUNC_8(VAR_6);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_8 = FUNC_6(VAR_10, VAR_6, VAR_12,
        FUNC_18(VAR_9, VAR_4, VAR_12),
        0, VAR_3, ((void*)0));
 if (!VAR_8) {
  VAR_14 = -VAR_1;
  goto err_put_parent;
 }
 VAR_9 = FUNC_10(VAR_8);

 FUNC_16(VAR_5, VAR_8);

 VAR_9->pinctrl = FUNC_4(VAR_6);
 if (FUNC_0(VAR_9->pinctrl)) {
  VAR_14 = FUNC_1(VAR_9->pinctrl);
  FUNC_2(VAR_6, "Cannot get pinctrl: %d\n", VAR_14);
  goto err_put_parent;
 }

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  VAR_14 = FUNC_14(VAR_7, "pinctrl-names", VAR_13,
          &VAR_15);
  if (VAR_14 < 0) {
   FUNC_2(VAR_6, "Cannot parse pinctrl-names: %d\n", VAR_14);
   goto err_put_parent;
  }

  VAR_9->states[VAR_13] = FUNC_15(VAR_9->pinctrl, VAR_15);
  if (FUNC_0(VAR_9->states[VAR_13])) {
   VAR_14 = FUNC_1(VAR_9->states[VAR_13]);
   FUNC_2(VAR_6, "Cannot look up pinctrl state %s: %d\n",
    VAR_15, VAR_14);
   goto err_put_parent;
  }

  if (FUNC_17(VAR_15, "idle"))
   continue;

  if (VAR_13 != VAR_12 - 1) {
   FUNC_2(VAR_6, "idle state must be last\n");
   VAR_14 = -VAR_0;
   goto err_put_parent;
  }
  VAR_8->deselect = VAR_2;
 }

 VAR_11 = FUNC_12(&VAR_8->parent->dev);

 VAR_8->mux_locked = 1;
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  if (VAR_11 != FUNC_9(VAR_9->states[VAR_13])) {
   VAR_8->mux_locked = 0;
   break;
  }
 }
 if (VAR_8->mux_locked)
  FUNC_3(VAR_6, "mux-locked i2c mux\n");


 for (VAR_13 = 0; VAR_13 < VAR_12 - !!VAR_8->deselect; VAR_13++) {
  VAR_14 = FUNC_5(VAR_8, 0, VAR_13, 0);
  if (VAR_14)
   goto err_del_adapter;
 }

 return 0;

err_del_adapter:
 FUNC_7(VAR_8);
err_put_parent:
 FUNC_11(VAR_10);

 return VAR_14;
}
