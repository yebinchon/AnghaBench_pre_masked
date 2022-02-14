
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int of_node; struct ad7266_platform_data* platform_data; } ;
struct spi_device {TYPE_7__ dev; } ;
struct TYPE_10__ {int of_node; TYPE_7__* parent; } ;
struct iio_dev {int * info; int modes; int name; TYPE_1__ dev; } ;
struct TYPE_11__ {int * sample; } ;
struct ad7266_state {int vref_mv; int fixed_addr; int reg; TYPE_5__* gpios; int single_msg; TYPE_3__* single_xfer; TYPE_2__ data; struct spi_device* spi; int mode; int range; } ;
struct ad7266_platform_data {int fixed_addr; int * addr_gpios; int range; int mode; } ;
struct TYPE_14__ {int label; int flags; int gpio; } ;
struct TYPE_13__ {int name; } ;
struct TYPE_12__ {int len; int cs_change; int * tx_buf; int * rx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct iio_dev*) ;
 int VAR_8 ;
 struct iio_dev* FUNC_4 (TYPE_7__*,int) ;
 int FUNC_5 (TYPE_7__*,char*) ;
 int FUNC_6 (TYPE_5__*,unsigned int) ;
 int FUNC_7 (TYPE_5__*,unsigned int) ;
 int FUNC_8 (struct iio_dev*) ;
 int VAR_9 ;
 struct ad7266_state* FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct iio_dev*,int *,int *,int *) ;
 int VAR_10 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 TYPE_4__* FUNC_15 (struct spi_device*) ;
 int FUNC_16 (TYPE_3__*,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_19(struct spi_device *VAR_11)
{
 struct ad7266_platform_data *VAR_12 = VAR_11->dev.platform_data;
 struct iio_dev *VAR_13;
 struct ad7266_state *VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 VAR_13 = FUNC_4(&VAR_11->dev, sizeof(*VAR_14));
 if (VAR_13 == ((void*)0))
  return -VAR_3;

 VAR_14 = FUNC_9(VAR_13);

 VAR_14->reg = FUNC_5(&VAR_11->dev, "vref");
 if (!FUNC_1(VAR_14->reg)) {
  VAR_16 = FUNC_13(VAR_14->reg);
  if (VAR_16)
   return VAR_16;

  VAR_16 = FUNC_14(VAR_14->reg);
  if (VAR_16 < 0)
   goto error_disable_reg;

  VAR_14->vref_mv = VAR_16 / 1000;
 } else {

  if (FUNC_2(VAR_14->reg) != -VAR_2)
   return FUNC_2(VAR_14->reg);

  VAR_14->vref_mv = 2500;
 }

 if (VAR_12) {
  VAR_14->fixed_addr = VAR_12->fixed_addr;
  VAR_14->mode = VAR_12->mode;
  VAR_14->range = VAR_12->range;

  if (!VAR_14->fixed_addr) {
   for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_14->gpios); ++VAR_15) {
    VAR_14->gpios[VAR_15].gpio = VAR_12->addr_gpios[VAR_15];
    VAR_14->gpios[VAR_15].flags = VAR_4;
    VAR_14->gpios[VAR_15].label = VAR_6[VAR_15];
   }
   VAR_16 = FUNC_7(VAR_14->gpios,
    FUNC_0(VAR_14->gpios));
   if (VAR_16)
    goto error_disable_reg;
  }
 } else {
  VAR_14->fixed_addr = 1;
  VAR_14->range = VAR_1;
  VAR_14->mode = VAR_0;
 }

 FUNC_18(VAR_11, VAR_13);
 VAR_14->spi = VAR_11;

 VAR_13->dev.parent = &VAR_11->dev;
 VAR_13->dev.of_node = VAR_11->dev.of_node;
 VAR_13->name = FUNC_15(VAR_11)->name;
 VAR_13->modes = VAR_5;
 VAR_13->info = &VAR_7;

 FUNC_3(VAR_13);


 VAR_14->single_xfer[0].rx_buf = &VAR_14->data.sample[0];
 VAR_14->single_xfer[0].len = 2;
 VAR_14->single_xfer[0].cs_change = 1;

 VAR_14->single_xfer[1].rx_buf = VAR_14->data.sample;
 VAR_14->single_xfer[1].len = 4;
 VAR_14->single_xfer[1].cs_change = 1;

 VAR_14->single_xfer[2].tx_buf = &VAR_14->data.sample[0];
 VAR_14->single_xfer[2].len = 1;

 FUNC_17(&VAR_14->single_msg);
 FUNC_16(&VAR_14->single_xfer[0], &VAR_14->single_msg);
 FUNC_16(&VAR_14->single_xfer[1], &VAR_14->single_msg);
 FUNC_16(&VAR_14->single_xfer[2], &VAR_14->single_msg);

 VAR_16 = FUNC_11(VAR_13, &VAR_9,
  &VAR_8, &VAR_10);
 if (VAR_16)
  goto error_free_gpios;

 VAR_16 = FUNC_8(VAR_13);
 if (VAR_16)
  goto error_buffer_cleanup;

 return 0;

error_buffer_cleanup:
 FUNC_10(VAR_13);
error_free_gpios:
 if (!VAR_14->fixed_addr)
  FUNC_6(VAR_14->gpios, FUNC_0(VAR_14->gpios));
error_disable_reg:
 if (!FUNC_1(VAR_14->reg))
  FUNC_12(VAR_14->reg);

 return VAR_16;
}
