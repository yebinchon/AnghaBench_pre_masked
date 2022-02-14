
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int base; int set; int get; int direction_output; int direction_input; int get_direction; int ngpio; int owner; int * parent; int label; } ;
struct TYPE_8__ {int cs_change; int * rx_buf; int * tx_buf; } ;
struct ti_ads7950_state {int slock; int reg; TYPE_5__ chip; struct spi_device* spi; int vref_mv; TYPE_2__* scan_single_xfer; int scan_single_msg; int single_rx; int single_tx; int ring_msg; TYPE_3__ ring_xfer; int * rx_buf; int * tx_buf; } ;
struct ti_ads7950_chip_info {int num_channels; int channels; } ;
struct spi_device {int bits_per_word; int dev; int mode; } ;
struct TYPE_6__ {int * parent; } ;
struct iio_dev {int * info; int num_channels; int channels; int modes; TYPE_1__ dev; int name; } ;
struct TYPE_9__ {size_t driver_data; int name; } ;
struct TYPE_7__ {int len; int cs_change; int * rx_buf; int * tx_buf; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 struct iio_dev* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (TYPE_5__*,struct ti_ads7950_state*) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 struct ti_ads7950_state* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (struct iio_dev*,int *,int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 TYPE_4__* FUNC_17 (struct spi_device*) ;
 int FUNC_18 (TYPE_3__*,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,TYPE_2__*,int) ;
 int FUNC_21 (struct spi_device*,struct iio_dev*) ;
 int FUNC_22 (struct spi_device*) ;
 struct ti_ads7950_chip_info* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_23 (struct ti_ads7950_state*) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_24(struct spi_device *VAR_14)
{
 struct ti_ads7950_state *VAR_15;
 struct iio_dev *VAR_16;
 const struct ti_ads7950_chip_info *VAR_17;
 int VAR_18;

 VAR_14->bits_per_word = 16;
 VAR_14->mode |= VAR_2;
 VAR_18 = FUNC_22(VAR_14);
 if (VAR_18 < 0) {
  FUNC_3(&VAR_14->dev, "Error in spi setup\n");
  return VAR_18;
 }

 VAR_16 = FUNC_5(&VAR_14->dev, sizeof(*VAR_15));
 if (!VAR_16)
  return -VAR_0;

 VAR_15 = FUNC_10(VAR_16);

 FUNC_21(VAR_14, VAR_16);

 VAR_15->spi = VAR_14;

 VAR_17 = &VAR_6[FUNC_17(VAR_14)->driver_data];

 VAR_16->name = FUNC_17(VAR_14)->name;
 VAR_16->dev.parent = &VAR_14->dev;
 VAR_16->modes = VAR_1;
 VAR_16->channels = VAR_17->channels;
 VAR_16->num_channels = VAR_17->num_channels;
 VAR_16->info = &VAR_11;


 FUNC_19(&VAR_15->ring_msg);

 VAR_15->ring_xfer.tx_buf = &VAR_15->tx_buf[0];
 VAR_15->ring_xfer.rx_buf = &VAR_15->rx_buf[0];

 VAR_15->ring_xfer.cs_change = 1;

 FUNC_18(&VAR_15->ring_xfer, &VAR_15->ring_msg);
 VAR_15->scan_single_xfer[0].tx_buf = &VAR_15->single_tx;
 VAR_15->scan_single_xfer[0].len = 2;
 VAR_15->scan_single_xfer[0].cs_change = 1;
 VAR_15->scan_single_xfer[1].tx_buf = &VAR_15->single_tx;
 VAR_15->scan_single_xfer[1].len = 2;
 VAR_15->scan_single_xfer[1].cs_change = 1;
 VAR_15->scan_single_xfer[2].rx_buf = &VAR_15->single_rx;
 VAR_15->scan_single_xfer[2].len = 2;

 FUNC_20(&VAR_15->scan_single_msg,
     VAR_15->scan_single_xfer, 3);


 if (FUNC_0(&VAR_14->dev))
  VAR_15->vref_mv = VAR_5;

 FUNC_14(&VAR_15->slock);

 VAR_15->reg = FUNC_6(&VAR_14->dev, "vref");
 if (FUNC_1(VAR_15->reg)) {
  FUNC_3(&VAR_14->dev, "Failed get get regulator \"vref\"\n");
  VAR_18 = FUNC_2(VAR_15->reg);
  goto error_destroy_mutex;
 }

 VAR_18 = FUNC_16(VAR_15->reg);
 if (VAR_18) {
  FUNC_3(&VAR_14->dev, "Failed to enable regulator \"vref\"\n");
  goto error_destroy_mutex;
 }

 VAR_18 = FUNC_12(VAR_16, ((void*)0),
      &VAR_13, ((void*)0));
 if (VAR_18) {
  FUNC_3(&VAR_14->dev, "Failed to setup triggered buffer\n");
  goto error_disable_reg;
 }

 VAR_18 = FUNC_23(VAR_15);
 if (VAR_18) {
  FUNC_3(&VAR_14->dev, "Failed to init adc chip\n");
  goto error_cleanup_ring;
 }

 VAR_18 = FUNC_8(VAR_16);
 if (VAR_18) {
  FUNC_3(&VAR_14->dev, "Failed to register iio device\n");
  goto error_cleanup_ring;
 }


 VAR_15->chip.label = FUNC_4(&VAR_15->spi->dev);
 VAR_15->chip.parent = &VAR_15->spi->dev;
 VAR_15->chip.owner = VAR_3;
 VAR_15->chip.base = -1;
 VAR_15->chip.ngpio = VAR_4;
 VAR_15->chip.get_direction = VAR_10;
 VAR_15->chip.direction_input = VAR_7;
 VAR_15->chip.direction_output = VAR_8;
 VAR_15->chip.get = VAR_9;
 VAR_15->chip.set = VAR_12;

 VAR_18 = FUNC_7(&VAR_15->chip, VAR_15);
 if (VAR_18) {
  FUNC_3(&VAR_14->dev, "Failed to init GPIOs\n");
  goto error_iio_device;
 }

 return 0;

error_iio_device:
 FUNC_9(VAR_16);
error_cleanup_ring:
 FUNC_11(VAR_16);
error_disable_reg:
 FUNC_15(VAR_15->reg);
error_destroy_mutex:
 FUNC_13(&VAR_15->slock);

 return VAR_18;
}
