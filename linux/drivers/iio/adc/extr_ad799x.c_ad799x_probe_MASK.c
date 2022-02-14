
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int of_node; TYPE_3__* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; scalar_t__ info; int name; TYPE_1__ dev; } ;
struct i2c_device_id {size_t driver_data; int name; } ;
struct TYPE_8__ {int of_node; } ;
struct i2c_client {scalar_t__ irq; int name; TYPE_3__ dev; } ;
struct ad799x_state {size_t id; int config; void* reg; void* vref; TYPE_2__* chip_config; struct i2c_client* client; } ;
struct TYPE_7__ {int default_config; int channel; scalar_t__ info; } ;
struct ad799x_chip_info {int num_channels; TYPE_2__ noirq_config; TYPE_2__ irq_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 struct ad799x_chip_info* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ad799x_state*) ;
 int VAR_6 ;
 int FUNC_3 (struct ad799x_state*,int ) ;
 struct iio_dev* FUNC_4 (TYPE_3__*,int) ;
 void* FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_3__*,scalar_t__,int *,int ,int,int ,struct iio_dev*) ;
 int FUNC_7 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 struct ad799x_state* FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct iio_dev*,int *,int *,int *) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void*) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_7,
       const struct i2c_device_id *VAR_8)
{
 int VAR_9;
 struct ad799x_state *VAR_10;
 struct iio_dev *VAR_11;
 const struct ad799x_chip_info *VAR_12 =
  &VAR_4[VAR_8->driver_data];

 VAR_11 = FUNC_4(&VAR_7->dev, sizeof(*VAR_10));
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 VAR_10 = FUNC_9(VAR_11);

 FUNC_7(VAR_7, VAR_11);

 VAR_10->id = VAR_8->driver_data;
 if (VAR_7->irq > 0 && VAR_12->irq_config.info)
  VAR_10->chip_config = &VAR_12->irq_config;
 else
  VAR_10->chip_config = &VAR_12->noirq_config;



 VAR_10->reg = FUNC_5(&VAR_7->dev, "vcc");
 if (FUNC_0(VAR_10->reg))
  return FUNC_1(VAR_10->reg);
 VAR_9 = FUNC_13(VAR_10->reg);
 if (VAR_9)
  return VAR_9;
 VAR_10->vref = FUNC_5(&VAR_7->dev, "vref");
 if (FUNC_0(VAR_10->vref)) {
  VAR_9 = FUNC_1(VAR_10->vref);
  goto error_disable_reg;
 }
 VAR_9 = FUNC_13(VAR_10->vref);
 if (VAR_9)
  goto error_disable_reg;

 VAR_10->client = VAR_7;

 VAR_11->dev.parent = &VAR_7->dev;
 VAR_11->dev.of_node = VAR_7->dev.of_node;
 VAR_11->name = VAR_8->name;
 VAR_11->info = VAR_10->chip_config->info;

 VAR_11->modes = VAR_1;
 VAR_11->channels = VAR_10->chip_config->channel;
 VAR_11->num_channels = VAR_12->num_channels;

 VAR_9 = FUNC_3(VAR_10, VAR_10->chip_config->default_config);
 if (VAR_9 < 0)
  goto error_disable_vref;
 VAR_9 = FUNC_2(VAR_10);
 if (VAR_9 < 0)
  goto error_disable_vref;
 VAR_10->config = VAR_9;

 VAR_9 = FUNC_11(VAR_11, ((void*)0),
  &VAR_6, ((void*)0));
 if (VAR_9)
  goto error_disable_vref;

 if (VAR_7->irq > 0) {
  VAR_9 = FUNC_6(&VAR_7->dev,
      VAR_7->irq,
      ((void*)0),
      VAR_5,
      VAR_3 |
      VAR_2,
      VAR_7->name,
      VAR_11);
  if (VAR_9)
   goto error_cleanup_ring;
 }
 VAR_9 = FUNC_8(VAR_11);
 if (VAR_9)
  goto error_cleanup_ring;

 return 0;

error_cleanup_ring:
 FUNC_10(VAR_11);
error_disable_vref:
 FUNC_12(VAR_10->vref);
error_disable_reg:
 FUNC_12(VAR_10->reg);

 return VAR_9;
}
