
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int of_node; } ;
struct spi_device {TYPE_4__ dev; } ;
struct TYPE_6__ {int of_node; TYPE_4__* parent; } ;
struct iio_dev {int * info; int num_channels; int channels; int modes; TYPE_1__ dev; int name; } ;
struct ad7923_state {int settings; int reg; int scan_single_msg; TYPE_2__* scan_single_xfer; int * rx_buf; int * tx_buf; struct spi_device* spi; } ;
struct ad7923_chip_info {int num_channels; int channels; } ;
struct TYPE_8__ {size_t driver_data; int name; } ;
struct TYPE_7__ {int len; int cs_change; int * rx_buf; int * tx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ad7923_chip_info* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct iio_dev* FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct ad7923_state* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*,int *,int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 TYPE_3__* FUNC_11 (struct spi_device*) ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_8)
{
 struct ad7923_state *VAR_9;
 struct iio_dev *VAR_10;
 const struct ad7923_chip_info *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_3(&VAR_8->dev, sizeof(*VAR_9));
 if (!VAR_10)
  return -VAR_3;

 VAR_9 = FUNC_6(VAR_10);

 FUNC_14(VAR_8, VAR_10);

 VAR_9->spi = VAR_8;
 VAR_9->settings = VAR_0 | VAR_2 |
   FUNC_0(VAR_1);

 VAR_11 = &VAR_5[FUNC_11(VAR_8)->driver_data];

 VAR_10->name = FUNC_11(VAR_8)->name;
 VAR_10->dev.parent = &VAR_8->dev;
 VAR_10->dev.of_node = VAR_8->dev.of_node;
 VAR_10->modes = VAR_4;
 VAR_10->channels = VAR_11->channels;
 VAR_10->num_channels = VAR_11->num_channels;
 VAR_10->info = &VAR_6;



 VAR_9->scan_single_xfer[0].tx_buf = &VAR_9->tx_buf[0];
 VAR_9->scan_single_xfer[0].len = 2;
 VAR_9->scan_single_xfer[0].cs_change = 1;
 VAR_9->scan_single_xfer[1].rx_buf = &VAR_9->rx_buf[0];
 VAR_9->scan_single_xfer[1].len = 2;

 FUNC_13(&VAR_9->scan_single_msg);
 FUNC_12(&VAR_9->scan_single_xfer[0], &VAR_9->scan_single_msg);
 FUNC_12(&VAR_9->scan_single_xfer[1], &VAR_9->scan_single_msg);

 VAR_9->reg = FUNC_4(&VAR_8->dev, "refin");
 if (FUNC_1(VAR_9->reg))
  return FUNC_2(VAR_9->reg);

 VAR_12 = FUNC_10(VAR_9->reg);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_8(VAR_10, ((void*)0),
      &VAR_7, ((void*)0));
 if (VAR_12)
  goto error_disable_reg;

 VAR_12 = FUNC_5(VAR_10);
 if (VAR_12)
  goto error_cleanup_ring;

 return 0;

error_cleanup_ring:
 FUNC_7(VAR_10);
error_disable_reg:
 FUNC_9(VAR_9->reg);

 return VAR_12;
}
