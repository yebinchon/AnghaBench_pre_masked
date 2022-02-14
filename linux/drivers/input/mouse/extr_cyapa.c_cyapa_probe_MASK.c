
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
typedef scalar_t__ u8 ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int addr; int irq; TYPE_1__* adapter; struct device dev; } ;
struct cyapa {int smbus; scalar_t__ operational; int vcc; int phys; struct i2c_client* client; } ;
struct TYPE_2__ {int nr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct cyapa*) ;
 int FUNC_4 (struct cyapa*) ;
 int FUNC_5 (struct cyapa*) ;
 int VAR_10 ;
 int FUNC_6 (struct cyapa*) ;
 int FUNC_7 (struct cyapa*) ;
 int VAR_11 ;
 int FUNC_8 (struct device*,char*,...) ;
 int FUNC_9 (struct device*,int (*) (struct cyapa*),struct cyapa*) ;
 int FUNC_10 (struct device*,int *) ;
 struct cyapa* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (struct device*,char*) ;
 int FUNC_13 (struct device*,int ,int *,int ,int,char*,struct cyapa*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct i2c_client*,struct cyapa*) ;
 scalar_t__ FUNC_16 (TYPE_1__*,int,int ,int ,int ,int ,union i2c_smbus_data*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_12,
         const struct i2c_device_id *VAR_13)
{
 struct device *VAR_14 = &VAR_12->dev;
 struct cyapa *VAR_15;
 u8 VAR_16;
 union i2c_smbus_data VAR_17;
 int VAR_18;

 VAR_16 = FUNC_2(VAR_12);
 if (VAR_16 == VAR_0) {
  FUNC_8(VAR_14, "not a supported I2C/SMBus adapter\n");
  return -VAR_2;
 }


 if (FUNC_16(VAR_12->adapter, VAR_12->addr, 0,
   VAR_7, 0, VAR_6, &VAR_17) < 0)
  return -VAR_3;

 VAR_15 = FUNC_11(VAR_14, sizeof(struct cyapa), VAR_5);
 if (!VAR_15)
  return -VAR_4;


 if (VAR_16 == VAR_1)
  VAR_15->smbus = 1;

 VAR_15->client = VAR_12;
 FUNC_15(VAR_12, VAR_15);
 FUNC_18(VAR_15->phys, "i2c-%d-%04x/input0", VAR_12->adapter->nr,
  VAR_12->addr);

 VAR_15->vcc = FUNC_12(VAR_14, "vcc");
 if (FUNC_0(VAR_15->vcc)) {
  VAR_18 = FUNC_1(VAR_15->vcc);
  FUNC_8(VAR_14, "failed to get vcc regulator: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_17(VAR_15->vcc);
 if (VAR_18) {
  FUNC_8(VAR_14, "failed to enable regulator: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_9(VAR_14, FUNC_4, VAR_15);
 if (VAR_18) {
  FUNC_4(VAR_15);
  FUNC_8(VAR_14, "failed to add disable regulator action: %d\n",
   VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_5(VAR_15);
 if (VAR_18) {
  FUNC_8(VAR_14, "failed to detect and initialize tp device.\n");
  return VAR_18;
 }

 VAR_18 = FUNC_10(VAR_14, &VAR_11);
 if (VAR_18) {
  FUNC_8(VAR_14, "failed to create sysfs entries: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_6(VAR_15);
 if (VAR_18) {
  FUNC_8(VAR_14, "failed to prepare wakeup controls: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_7(VAR_15);
 if (VAR_18) {
  FUNC_8(VAR_14, "failed to start pm_runtime: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_13(VAR_14, VAR_12->irq,
       ((void*)0), VAR_10,
       VAR_9 | VAR_8,
       "cyapa", VAR_15);
 if (VAR_18) {
  FUNC_8(VAR_14, "failed to request threaded irq: %d\n", VAR_18);
  return VAR_18;
 }


 FUNC_14(VAR_12->irq);






 if (VAR_15->operational) {
  VAR_18 = FUNC_3(VAR_15);
  if (VAR_18) {
   FUNC_8(VAR_14, "create input_dev instance failed: %d\n",
     VAR_18);
   return VAR_18;
  }
 }

 return 0;
}
