
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; int name; int adapter; } ;
struct hideep_ts {void* reset_gpio; void* vcc_vid; void* vcc_vdd; void* reg; int dev_mutex; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int ,struct hideep_ts*) ;
 int FUNC_4 (int *,int *) ;
 void* FUNC_5 (int *,char*,int ) ;
 struct hideep_ts* FUNC_6 (int *,int,int ) ;
 void* FUNC_7 (struct i2c_client*,int *) ;
 void* FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int,int *,int ,int ,int ,struct hideep_ts*) ;
 int FUNC_10 (struct hideep_ts*) ;
 int VAR_7 ;
 int FUNC_11 (struct hideep_ts*) ;
 int VAR_8 ;
 int FUNC_12 (struct hideep_ts*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct i2c_client*,struct hideep_ts*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_11,
   const struct i2c_device_id *VAR_12)
{
 struct hideep_ts *VAR_13;
 int VAR_14;


 if (!FUNC_13(VAR_11->adapter, VAR_5)) {
  FUNC_2(&VAR_11->dev, "check i2c device error");
  return -VAR_1;
 }

 if (VAR_11->irq <= 0) {
  FUNC_2(&VAR_11->dev, "missing irq: %d\n", VAR_11->irq);
  return -VAR_0;
 }

 VAR_13 = FUNC_6(&VAR_11->dev, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->client = VAR_11;
 FUNC_14(VAR_11, VAR_13);
 FUNC_15(&VAR_13->dev_mutex);

 VAR_13->reg = FUNC_7(VAR_11, &VAR_9);
 if (FUNC_0(VAR_13->reg)) {
  VAR_14 = FUNC_1(VAR_13->reg);
  FUNC_2(&VAR_11->dev,
   "failed to initialize regmap: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_13->vcc_vdd = FUNC_8(&VAR_11->dev, "vdd");
 if (FUNC_0(VAR_13->vcc_vdd))
  return FUNC_1(VAR_13->vcc_vdd);

 VAR_13->vcc_vid = FUNC_8(&VAR_11->dev, "vid");
 if (FUNC_0(VAR_13->vcc_vid))
  return FUNC_1(VAR_13->vcc_vid);

 VAR_13->reset_gpio = FUNC_5(&VAR_11->dev,
       "reset", VAR_4);
 if (FUNC_0(VAR_13->reset_gpio))
  return FUNC_1(VAR_13->reset_gpio);

 VAR_14 = FUNC_12(VAR_13);
 if (VAR_14) {
  FUNC_2(&VAR_11->dev, "power on failed: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_3(&VAR_11->dev, VAR_8, VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_11(VAR_13);
 if (VAR_14) {
  FUNC_2(&VAR_11->dev, "failed to load dwz: %d", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_10(VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_9(&VAR_11->dev, VAR_11->irq,
       ((void*)0), VAR_7, VAR_6,
       VAR_11->name, VAR_13);
 if (VAR_14) {
  FUNC_2(&VAR_11->dev, "failed to request irq %d: %d\n",
   VAR_11->irq, VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_4(&VAR_11->dev, &VAR_10);
 if (VAR_14) {
  FUNC_2(&VAR_11->dev,
   "failed to add sysfs attributes: %d\n", VAR_14);
  return VAR_14;
 }

 return 0;
}
