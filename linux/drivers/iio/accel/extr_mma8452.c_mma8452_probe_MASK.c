
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct of_device_id {int compatible; TYPE_2__* data; } ;
struct mma8452_data {int data_cfg; int ctrl_reg1; void* vdd_reg; void* vddio_reg; int sleep_val; TYPE_2__* chip_info; int lock; struct i2c_client* client; } ;
struct TYPE_14__ {TYPE_3__* parent; } ;
struct iio_dev {int available_scan_masks; int num_channels; int channels; int modes; TYPE_1__ dev; int name; int * info; } ;
struct i2c_device_id {int name; } ;
struct TYPE_16__ {int of_node; } ;
struct i2c_client {int irq; TYPE_3__ dev; int name; } ;
struct TYPE_15__ {int chip_id; int all_events; int enabled_events; int num_channels; int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;



 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,char*,int ,int) ;
 struct iio_dev* FUNC_5 (TYPE_3__*,int) ;
 void* FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,int,int *,int ,int,int ,struct iio_dev*) ;
 int FUNC_8 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_9 (struct i2c_client*,int ) ;
 int FUNC_10 (struct i2c_client*,int ,int) ;
 int FUNC_11 (struct iio_dev*) ;
 struct mma8452_data* FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (struct iio_dev*) ;
 int FUNC_14 (struct iio_dev*,int *,int ,int *) ;
 int FUNC_15 (struct mma8452_data*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_16 (struct i2c_client*) ;
 int VAR_21 ;
 int FUNC_17 (struct mma8452_data*,int) ;
 int FUNC_18 (struct iio_dev*) ;
 int VAR_22 ;
 int FUNC_19 (struct iio_dev*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,char*) ;
 struct of_device_id* FUNC_22 (int ,TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (TYPE_3__*) ;
 int FUNC_25 (TYPE_3__*,int ) ;
 int FUNC_26 (TYPE_3__*) ;
 int FUNC_27 (void*) ;
 int FUNC_28 (void*) ;

__attribute__((used)) static int FUNC_29(struct i2c_client *VAR_23,
    const struct i2c_device_id *VAR_24)
{
 struct mma8452_data *VAR_25;
 struct iio_dev *VAR_26;
 int VAR_27;
 const struct of_device_id *VAR_28;

 VAR_28 = FUNC_22(VAR_18, &VAR_23->dev);
 if (!VAR_28) {
  FUNC_3(&VAR_23->dev, "unknown device model\n");
  return -VAR_0;
 }

 VAR_26 = FUNC_5(&VAR_23->dev, sizeof(*VAR_25));
 if (!VAR_26)
  return -VAR_1;

 VAR_25 = FUNC_12(VAR_26);
 VAR_25->client = VAR_23;
 FUNC_20(&VAR_25->lock);
 VAR_25->chip_info = VAR_28->data;

 VAR_25->vdd_reg = FUNC_6(&VAR_23->dev, "vdd");
 if (FUNC_0(VAR_25->vdd_reg)) {
  if (FUNC_1(VAR_25->vdd_reg) == -VAR_2)
   return -VAR_2;

  FUNC_3(&VAR_23->dev, "failed to get VDD regulator!\n");
  return FUNC_1(VAR_25->vdd_reg);
 }

 VAR_25->vddio_reg = FUNC_6(&VAR_23->dev, "vddio");
 if (FUNC_0(VAR_25->vddio_reg)) {
  if (FUNC_1(VAR_25->vddio_reg) == -VAR_2)
   return -VAR_2;

  FUNC_3(&VAR_23->dev, "failed to get VDDIO regulator!\n");
  return FUNC_1(VAR_25->vddio_reg);
 }

 VAR_27 = FUNC_28(VAR_25->vdd_reg);
 if (VAR_27) {
  FUNC_3(&VAR_23->dev, "failed to enable VDD regulator!\n");
  return VAR_27;
 }

 VAR_27 = FUNC_28(VAR_25->vddio_reg);
 if (VAR_27) {
  FUNC_3(&VAR_23->dev, "failed to enable VDDIO regulator!\n");
  goto disable_regulator_vdd;
 }

 VAR_27 = FUNC_9(VAR_23, VAR_17);
 if (VAR_27 < 0)
  goto disable_regulators;

 switch (VAR_27) {
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 case 133:
  if (VAR_27 == VAR_25->chip_info->chip_id)
   break;

 default:
  VAR_27 = -VAR_0;
  goto disable_regulators;
 }

 FUNC_4(&VAR_23->dev, "registering %s accelerometer; ID 0x%x\n",
   VAR_28->compatible, VAR_25->chip_info->chip_id);

 FUNC_8(VAR_23, VAR_26);
 VAR_26->info = &VAR_19;
 VAR_26->name = VAR_24->name;
 VAR_26->dev.parent = &VAR_23->dev;
 VAR_26->modes = VAR_3;
 VAR_26->channels = VAR_25->chip_info->channels;
 VAR_26->num_channels = VAR_25->chip_info->num_channels;
 VAR_26->available_scan_masks = VAR_21;

 VAR_27 = FUNC_16(VAR_23);
 if (VAR_27 < 0)
  goto disable_regulators;

 VAR_25->data_cfg = VAR_14;
 VAR_27 = FUNC_10(VAR_23, VAR_13,
     VAR_25->data_cfg);
 if (VAR_27 < 0)
  goto disable_regulators;





 VAR_27 = FUNC_10(VAR_23, VAR_15,
     VAR_16);
 if (VAR_27 < 0)
  goto disable_regulators;

 if (VAR_23->irq) {
  int VAR_29;

  VAR_29 = FUNC_21(VAR_23->dev.of_node, "INT2");

  if (VAR_29 == VAR_23->irq) {
   FUNC_2(&VAR_23->dev, "using interrupt line INT2\n");
  } else {
   VAR_27 = FUNC_10(VAR_23,
      VAR_12,
      VAR_25->chip_info->all_events);
   if (VAR_27 < 0)
    goto disable_regulators;

   FUNC_2(&VAR_23->dev, "using interrupt line INT1\n");
  }

  VAR_27 = FUNC_10(VAR_23,
     VAR_11,
     VAR_25->chip_info->enabled_events);
  if (VAR_27 < 0)
   goto disable_regulators;

  VAR_27 = FUNC_19(VAR_26);
  if (VAR_27 < 0)
   goto disable_regulators;
 }

 VAR_25->ctrl_reg1 = VAR_7 |
     (VAR_8 << VAR_9);

 VAR_25->sleep_val = FUNC_15(VAR_25);

 VAR_27 = FUNC_10(VAR_23, VAR_10,
     VAR_25->ctrl_reg1);
 if (VAR_27 < 0)
  goto trigger_cleanup;

 VAR_27 = FUNC_14(VAR_26, ((void*)0),
      VAR_22, ((void*)0));
 if (VAR_27 < 0)
  goto trigger_cleanup;

 if (VAR_23->irq) {
  VAR_27 = FUNC_7(&VAR_23->dev,
      VAR_23->irq,
      ((void*)0), VAR_20,
      VAR_5 | VAR_4,
      VAR_23->name, VAR_26);
  if (VAR_27)
   goto buffer_cleanup;
 }

 VAR_27 = FUNC_24(&VAR_23->dev);
 if (VAR_27 < 0)
  goto buffer_cleanup;

 FUNC_23(&VAR_23->dev);
 FUNC_25(&VAR_23->dev,
      VAR_6);
 FUNC_26(&VAR_23->dev);

 VAR_27 = FUNC_11(VAR_26);
 if (VAR_27 < 0)
  goto buffer_cleanup;

 VAR_27 = FUNC_17(VAR_25, 0);
 if (VAR_27 < 0)
  goto buffer_cleanup;

 return 0;

buffer_cleanup:
 FUNC_13(VAR_26);

trigger_cleanup:
 FUNC_18(VAR_26);

disable_regulators:
 FUNC_27(VAR_25->vddio_reg);

disable_regulator_vdd:
 FUNC_27(VAR_25->vdd_reg);

 return VAR_27;
}
