
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_node; TYPE_2__* parent; } ;
struct iio_dev {int modes; int * info; TYPE_1__ dev; int num_channels; int channels; int name; } ;
struct i2c_device_id {int name; } ;
struct TYPE_5__ {int of_node; struct ad7291_platform_data* platform_data; } ;
struct i2c_client {scalar_t__ irq; TYPE_2__ dev; } ;
struct ad7291_platform_data {scalar_t__ use_external_ref; } ;
struct ad7291_chip_info {int command; scalar_t__ reg; struct i2c_client* client; int state_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct ad7291_chip_info*,int ,int) ;
 int VAR_13 ;
 struct iio_dev* FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (scalar_t__,struct iio_dev*) ;
 int FUNC_7 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 struct ad7291_chip_info* FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,int *,int *,int,int ,struct iio_dev*) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_14,
   const struct i2c_device_id *VAR_15)
{
 struct ad7291_platform_data *VAR_16 = VAR_14->dev.platform_data;
 struct ad7291_chip_info *VAR_17;
 struct iio_dev *VAR_18;
 int VAR_19;

 VAR_18 = FUNC_4(&VAR_14->dev, sizeof(*VAR_17));
 if (!VAR_18)
  return -VAR_7;
 VAR_17 = FUNC_9(VAR_18);

 if (VAR_16 && VAR_16->use_external_ref) {
  VAR_17->reg = FUNC_5(&VAR_14->dev, "vref");
  if (FUNC_1(VAR_17->reg))
   return FUNC_2(VAR_17->reg);

  VAR_19 = FUNC_12(VAR_17->reg);
  if (VAR_19)
   return VAR_19;
 }

 FUNC_10(&VAR_17->state_lock);

 FUNC_7(VAR_14, VAR_18);

 VAR_17->client = VAR_14;

 VAR_17->command = VAR_3 |
   VAR_5 |
   VAR_0;

 if (VAR_16 && VAR_16->use_external_ref)
  VAR_17->command |= VAR_2;

 VAR_18->name = VAR_15->name;
 VAR_18->channels = VAR_11;
 VAR_18->num_channels = FUNC_0(VAR_11);

 VAR_18->dev.parent = &VAR_14->dev;
 VAR_18->dev.of_node = VAR_14->dev.of_node;
 VAR_18->info = &VAR_13;
 VAR_18->modes = VAR_8;

 VAR_19 = FUNC_3(VAR_17, VAR_1, VAR_4);
 if (VAR_19) {
  VAR_19 = -VAR_6;
  goto error_disable_reg;
 }

 VAR_19 = FUNC_3(VAR_17, VAR_1, VAR_17->command);
 if (VAR_19) {
  VAR_19 = -VAR_6;
  goto error_disable_reg;
 }

 if (VAR_14->irq > 0) {
  VAR_19 = FUNC_13(VAR_14->irq,
        ((void*)0),
        &VAR_12,
        VAR_10 | VAR_9,
        VAR_15->name,
        VAR_18);
  if (VAR_19)
   goto error_disable_reg;
 }

 VAR_19 = FUNC_8(VAR_18);
 if (VAR_19)
  goto error_unreg_irq;

 return 0;

error_unreg_irq:
 if (VAR_14->irq)
  FUNC_6(VAR_14->irq, VAR_18);
error_disable_reg:
 if (VAR_17->reg)
  FUNC_11(VAR_17->reg);

 return VAR_19;
}
