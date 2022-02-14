
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct i2c_hid_platform_data {TYPE_3__* supplies; int hid_descriptor_address; scalar_t__ post_power_delay_ms; } ;
struct TYPE_15__ {int wProductID; int wVendorID; int bcdVersion; } ;
struct i2c_hid {struct i2c_hid_platform_data pdata; int quirks; TYPE_2__ hdesc; struct hid_device* hid; int reset_lock; int wait; int wHIDDescRegister; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_17__ {scalar_t__ of_node; struct i2c_hid_platform_data* platform_data; } ;
struct i2c_client {int irq; char* name; TYPE_5__ dev; int addr; } ;
struct TYPE_14__ {TYPE_5__* parent; } ;
struct hid_device {void* product; void* vendor; int phys; int name; void* version; int bus; TYPE_1__ dev; int * ll_driver; struct i2c_client* driver_data; } ;
typedef int __u16 ;
struct TYPE_16__ {char* supply; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_5__*,char*,int) ;
 int FUNC_6 (TYPE_5__*,char*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 struct i2c_hid* FUNC_9 (TYPE_5__*,int,int ) ;
 int FUNC_10 (TYPE_5__*,int ,TYPE_3__*) ;
 int FUNC_11 (int,struct i2c_hid*) ;
 int FUNC_12 (struct hid_device*) ;
 struct hid_device* FUNC_13 () ;
 int FUNC_14 (struct hid_device*) ;
 int FUNC_15 (struct i2c_client*,char*,int) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (struct i2c_client*,struct i2c_hid_platform_data*) ;
 int FUNC_18 (struct i2c_hid*,int ) ;
 int FUNC_19 (struct i2c_hid*) ;
 int FUNC_20 (struct i2c_hid*) ;
 int FUNC_21 (struct i2c_client*,struct i2c_hid_platform_data*) ;
 int FUNC_22 (struct i2c_client*) ;
 int VAR_8 ;
 int FUNC_23 (void*,void*) ;
 int FUNC_24 (struct i2c_client*,struct i2c_hid_platform_data*) ;
 int FUNC_25 (struct i2c_client*,struct i2c_hid*) ;
 int FUNC_26 (struct i2c_client*) ;
 int FUNC_27 (int *) ;
 void* FUNC_28 (int ) ;
 int FUNC_29 (scalar_t__) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int ,TYPE_3__*) ;
 int FUNC_32 (int ,TYPE_3__*) ;
 int FUNC_33 (int ,int,char*,char*,void*,void*) ;
 int FUNC_34 (int ,int ,int) ;

__attribute__((used)) static int FUNC_35(struct i2c_client *VAR_9,
    const struct i2c_device_id *VAR_10)
{
 int VAR_11;
 struct i2c_hid *VAR_12;
 struct hid_device *VAR_13;
 __u16 VAR_14;
 struct i2c_hid_platform_data *VAR_15 = VAR_9->dev.platform_data;

 FUNC_4("HID probe called for i2c 0x%02x\n", VAR_9->addr);

 if (!VAR_9->irq) {
  FUNC_6(&VAR_9->dev,
   "HID over i2c has not been provided an Int IRQ\n");
  return -VAR_1;
 }

 if (VAR_9->irq < 0) {
  if (VAR_9->irq != -VAR_5)
   FUNC_6(&VAR_9->dev,
    "HID over i2c doesn't have a valid IRQ\n");
  return VAR_9->irq;
 }

 VAR_12 = FUNC_9(&VAR_9->dev, sizeof(*VAR_12), VAR_6);
 if (!VAR_12)
  return -VAR_3;

 if (VAR_9->dev.of_node) {
  VAR_11 = FUNC_24(VAR_9, &VAR_12->pdata);
  if (VAR_11)
   return VAR_11;
 } else if (!VAR_15) {
  VAR_11 = FUNC_17(VAR_9, &VAR_12->pdata);
  if (VAR_11)
   return VAR_11;
 } else {
  VAR_12->pdata = *VAR_15;
 }


 FUNC_21(VAR_9, &VAR_12->pdata);

 VAR_12->pdata.supplies[0].supply = "vdd";
 VAR_12->pdata.supplies[1].supply = "vddl";

 VAR_11 = FUNC_10(&VAR_9->dev,
          FUNC_0(VAR_12->pdata.supplies),
          VAR_12->pdata.supplies);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_32(FUNC_0(VAR_12->pdata.supplies),
        VAR_12->pdata.supplies);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_12->pdata.post_power_delay_ms)
  FUNC_29(VAR_12->pdata.post_power_delay_ms);

 FUNC_25(VAR_9, VAR_12);

 VAR_12->client = VAR_9;

 VAR_14 = VAR_12->pdata.hid_descriptor_address;
 VAR_12->wHIDDescRegister = FUNC_3(VAR_14);

 FUNC_27(&VAR_12->wait);
 FUNC_30(&VAR_12->reset_lock);




 VAR_11 = FUNC_18(VAR_12, VAR_7);
 if (VAR_11 < 0)
  goto err_regulator;

 FUNC_16(&VAR_9->dev);

 FUNC_8(&VAR_9->dev);


 VAR_11 = FUNC_26(VAR_9);
 if (VAR_11 < 0) {
  FUNC_5(&VAR_9->dev, "nothing at this address: %d\n", VAR_11);
  VAR_11 = -VAR_4;
  goto err_regulator;
 }

 VAR_11 = FUNC_19(VAR_12);
 if (VAR_11 < 0)
  goto err_regulator;

 VAR_11 = FUNC_22(VAR_9);
 if (VAR_11 < 0)
  goto err_regulator;

 VAR_13 = FUNC_13();
 if (FUNC_1(VAR_13)) {
  VAR_11 = FUNC_2(VAR_13);
  goto err_irq;
 }

 VAR_12->hid = VAR_13;

 VAR_13->driver_data = VAR_9;
 VAR_13->ll_driver = &VAR_8;
 VAR_13->dev.parent = &VAR_9->dev;
 VAR_13->bus = VAR_0;
 VAR_13->version = FUNC_28(VAR_12->hdesc.bcdVersion);
 VAR_13->vendor = FUNC_28(VAR_12->hdesc.wVendorID);
 VAR_13->product = FUNC_28(VAR_12->hdesc.wProductID);

 FUNC_33(VAR_13->name, sizeof(VAR_13->name), "%s %04hX:%04hX",
   VAR_9->name, VAR_13->vendor, VAR_13->product);
 FUNC_34(VAR_13->phys, FUNC_7(&VAR_9->dev), sizeof(VAR_13->phys));

 VAR_12->quirks = FUNC_23(VAR_13->vendor, VAR_13->product);

 VAR_11 = FUNC_12(VAR_13);
 if (VAR_11) {
  if (VAR_11 != -VAR_2)
   FUNC_15(VAR_9, "can't add hid device: %d\n", VAR_11);
  goto err_mem_free;
 }

 return 0;

err_mem_free:
 FUNC_14(VAR_13);

err_irq:
 FUNC_11(VAR_9->irq, VAR_12);

err_regulator:
 FUNC_31(FUNC_0(VAR_12->pdata.supplies),
          VAR_12->pdata.supplies);
 FUNC_20(VAR_12);
 return VAR_11;
}
