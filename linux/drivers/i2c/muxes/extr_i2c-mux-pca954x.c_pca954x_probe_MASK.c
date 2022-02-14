
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pca954x {TYPE_2__* chip; struct i2c_client* client; scalar_t__ irq; int idle_state; scalar_t__ last_chan; } ;
struct i2c_mux_core {int dummy; } ;
struct i2c_device_identity {scalar_t__ manufacturer_id; scalar_t__ part_id; int die_revision; } ;
struct i2c_device_id {size_t driver_data; } ;
struct device {struct device_node* of_node; } ;
struct i2c_client {int name; int irq; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct gpio_desc {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {scalar_t__ manufacturer_id; scalar_t__ part_id; } ;
struct TYPE_5__ {int nchans; scalar_t__ muxtype; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct gpio_desc*) ;
 TYPE_2__* VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct device*,char*,int,char*,int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,int *) ;
 struct gpio_desc* FUNC_5 (struct device*,char*,int ) ;
 int FUNC_6 (struct device*,int ,int *,int ,int,char*,struct pca954x*) ;
 int FUNC_7 (struct gpio_desc*,int ) ;
 int FUNC_8 (struct i2c_adapter*,int ) ;
 int FUNC_9 (struct i2c_client*,struct i2c_device_identity*) ;
 int FUNC_10 (struct i2c_mux_core*,int ,int,int ) ;
 struct i2c_mux_core* FUNC_11 (struct i2c_adapter*,struct device*,int ,int,int ,int ,int ) ;
 struct pca954x* FUNC_12 (struct i2c_mux_core*) ;
 int FUNC_13 (struct i2c_client*,struct i2c_mux_core*) ;
 scalar_t__ FUNC_14 (struct i2c_client*,int ) ;
 TYPE_2__* FUNC_15 (struct device*) ;
 scalar_t__ FUNC_16 (struct device_node*,char*) ;
 int FUNC_17 (struct i2c_mux_core*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_18 (struct i2c_mux_core*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_17,
    const struct i2c_device_id *VAR_18)
{
 struct i2c_adapter *VAR_19 = VAR_17->adapter;
 struct device *VAR_20 = &VAR_17->dev;
 struct device_node *VAR_21 = VAR_20->of_node;
 bool VAR_22;
 struct gpio_desc *VAR_23;
 struct i2c_mux_core *VAR_24;
 struct pca954x *VAR_25;
 int VAR_26;
 int VAR_27;

 if (!FUNC_8(VAR_19, VAR_5))
  return -VAR_0;

 VAR_24 = FUNC_11(VAR_19, VAR_20, VAR_10, sizeof(*VAR_25), 0,
        VAR_16, VAR_13);
 if (!VAR_24)
  return -VAR_1;
 VAR_25 = FUNC_12(VAR_24);

 FUNC_13(VAR_17, VAR_24);
 VAR_25->client = VAR_17;


 VAR_23 = FUNC_5(VAR_20, "reset", VAR_3);
 if (FUNC_0(VAR_23))
  return FUNC_1(VAR_23);
 if (VAR_23) {
  FUNC_19(1);
  FUNC_7(VAR_23, 0);

  FUNC_19(1);
 }

 VAR_25->chip = FUNC_15(VAR_20);
 if (!VAR_25->chip)
  VAR_25->chip = &VAR_11[VAR_18->driver_data];

 if (VAR_25->chip->id.manufacturer_id != VAR_4) {
  struct i2c_device_identity VAR_28;

  VAR_27 = FUNC_9(VAR_17, &VAR_28);
  if (VAR_27 && VAR_27 != -VAR_2)
   return VAR_27;

  if (!VAR_27 &&
      (VAR_28.manufacturer_id != VAR_25->chip->id.manufacturer_id ||
       VAR_28.part_id != VAR_25->chip->id.part_id)) {
   FUNC_3(VAR_20, "unexpected device id %03x-%03x-%x\n",
     VAR_28.manufacturer_id, VAR_28.part_id,
     VAR_28.die_revision);
   return -VAR_0;
  }
 }





 if (FUNC_14(VAR_17, 0) < 0) {
  FUNC_3(VAR_20, "probe failed\n");
  return -VAR_0;
 }

 VAR_25->last_chan = 0;
 VAR_25->idle_state = VAR_8;

 VAR_22 = VAR_21 &&
  FUNC_16(VAR_21, "i2c-mux-idle-disconnect");
 if (VAR_22)
  VAR_25->idle_state = VAR_9;

 VAR_27 = FUNC_18(VAR_24);
 if (VAR_27)
  goto fail_cleanup;


 for (VAR_26 = 0; VAR_26 < VAR_25->chip->nchans; VAR_26++) {
  VAR_27 = FUNC_10(VAR_24, 0, VAR_26, 0);
  if (VAR_27)
   goto fail_cleanup;
 }

 if (VAR_25->irq) {
  VAR_27 = FUNC_6(VAR_20, VAR_25->client->irq,
      ((void*)0), VAR_14,
      VAR_6 | VAR_7,
      "pca954x", VAR_25);
  if (VAR_27)
   goto fail_cleanup;
 }





 FUNC_4(VAR_20, &VAR_12);

 FUNC_2(VAR_20, "registered %d multiplexed busses for I2C %s %s\n",
   VAR_26, VAR_25->chip->muxtype == VAR_15
    ? "mux" : "switch", VAR_17->name);

 return 0;

fail_cleanup:
 FUNC_17(VAR_24);
 return VAR_27;
}
