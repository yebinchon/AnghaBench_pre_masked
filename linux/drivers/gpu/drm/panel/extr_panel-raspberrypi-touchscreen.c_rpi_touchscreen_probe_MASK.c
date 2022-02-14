
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * funcs; struct device* dev; } ;
struct rpi_touchscreen {TYPE_1__ base; int dsi; struct i2c_client* i2c; } ;
struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device_info {int * node; int channel; int type; } ;
struct i2c_device_id {int dummy; } ;
struct device {int of_node; } ;
struct i2c_client {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*,int) ;
 struct rpi_touchscreen* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct i2c_client*,struct rpi_touchscreen*) ;
 int FUNC_6 (struct mipi_dsi_host*,struct mipi_dsi_device_info*) ;
 struct mipi_dsi_host* FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (int ,int *) ;
 int * FUNC_9 (struct device_node*) ;
 struct device_node* FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*) ;
 int VAR_7 ;
 int FUNC_12 (struct rpi_touchscreen*,int ) ;
 int FUNC_13 (struct rpi_touchscreen*,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_8,
     const struct i2c_device_id *VAR_9)
{
 struct device *VAR_10 = &VAR_8->dev;
 struct rpi_touchscreen *VAR_11;
 struct device_node *VAR_12, *VAR_13;
 struct mipi_dsi_host *VAR_14;
 int VAR_15, VAR_16;
 struct mipi_dsi_device_info VAR_17 = {
  .type = VAR_6,
  .channel = 0,
  .node = ((void*)0),
 };

 VAR_11 = FUNC_3(VAR_10, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 FUNC_5(VAR_8, VAR_11);

 VAR_11->i2c = VAR_8;

 VAR_16 = FUNC_12(VAR_11, VAR_4);
 if (VAR_16 < 0) {
  FUNC_2(VAR_10, "Atmel I2C read failed: %d\n", VAR_16);
  return -VAR_0;
 }

 switch (VAR_16) {
 case 0xde:
 case 0xc3:
  break;
 default:
  FUNC_2(VAR_10, "Unknown Atmel firmware revision: 0x%02x\n", VAR_16);
  return -VAR_0;
 }


 FUNC_13(VAR_11, VAR_5, 0);


 VAR_12 = FUNC_8(VAR_10->of_node, ((void*)0));
 if (!VAR_12)
  return -VAR_0;

 VAR_13 = FUNC_10(VAR_12);
 if (!VAR_13)
  goto error;

 VAR_14 = FUNC_7(VAR_13);
 FUNC_11(VAR_13);
 if (!VAR_14) {
  FUNC_11(VAR_12);
  return -VAR_2;
 }

 VAR_17.node = FUNC_9(VAR_12);
 if (!VAR_17.node)
  goto error;

 FUNC_11(VAR_12);

 VAR_11->dsi = FUNC_6(VAR_14, &VAR_17);
 if (FUNC_0(VAR_11->dsi)) {
  FUNC_2(VAR_10, "DSI device registration failed: %ld\n",
   FUNC_1(VAR_11->dsi));
  return FUNC_1(VAR_11->dsi);
 }

 VAR_11->base.dev = VAR_10;
 VAR_11->base.funcs = &VAR_7;




 VAR_15 = FUNC_4(&VAR_11->base);
 if (VAR_15)
  return VAR_15;

 return 0;

error:
 FUNC_11(VAR_12);
 return -VAR_0;
}
