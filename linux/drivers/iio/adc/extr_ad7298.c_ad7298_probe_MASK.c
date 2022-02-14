
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int of_node; struct ad7298_platform_data* platform_data; } ;
struct spi_device {TYPE_4__ dev; } ;
struct TYPE_6__ {int of_node; TYPE_4__* parent; } ;
struct iio_dev {int * info; int num_channels; int channels; int modes; TYPE_1__ dev; int name; } ;
struct ad7298_state {int reg; scalar_t__ ext_ref; int scan_single_msg; TYPE_2__* scan_single_xfer; int * rx_buf; int * tx_buf; struct spi_device* spi; } ;
struct ad7298_platform_data {scalar_t__ ext_ref; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int len; int cs_change; int * rx_buf; int * tx_buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct iio_dev* FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct ad7298_state* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*,int *,int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 TYPE_3__* FUNC_11 (struct spi_device*) ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_6)
{
 struct ad7298_platform_data *VAR_7 = VAR_6->dev.platform_data;
 struct ad7298_state *VAR_8;
 struct iio_dev *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(&VAR_6->dev, sizeof(*VAR_8));
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_8 = FUNC_6(VAR_9);

 if (VAR_7 && VAR_7->ext_ref)
  VAR_8->ext_ref = VAR_0;

 if (VAR_8->ext_ref) {
  VAR_8->reg = FUNC_4(&VAR_6->dev, "vref");
  if (FUNC_1(VAR_8->reg))
   return FUNC_2(VAR_8->reg);

  VAR_10 = FUNC_10(VAR_8->reg);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_14(VAR_6, VAR_9);

 VAR_8->spi = VAR_6;

 VAR_9->name = FUNC_11(VAR_6)->name;
 VAR_9->dev.parent = &VAR_6->dev;
 VAR_9->dev.of_node = VAR_6->dev.of_node;
 VAR_9->modes = VAR_2;
 VAR_9->channels = VAR_3;
 VAR_9->num_channels = FUNC_0(VAR_3);
 VAR_9->info = &VAR_4;



 VAR_8->scan_single_xfer[0].tx_buf = &VAR_8->tx_buf[0];
 VAR_8->scan_single_xfer[0].len = 2;
 VAR_8->scan_single_xfer[0].cs_change = 1;
 VAR_8->scan_single_xfer[1].tx_buf = &VAR_8->tx_buf[1];
 VAR_8->scan_single_xfer[1].len = 2;
 VAR_8->scan_single_xfer[1].cs_change = 1;
 VAR_8->scan_single_xfer[2].rx_buf = &VAR_8->rx_buf[0];
 VAR_8->scan_single_xfer[2].len = 2;

 FUNC_13(&VAR_8->scan_single_msg);
 FUNC_12(&VAR_8->scan_single_xfer[0], &VAR_8->scan_single_msg);
 FUNC_12(&VAR_8->scan_single_xfer[1], &VAR_8->scan_single_msg);
 FUNC_12(&VAR_8->scan_single_xfer[2], &VAR_8->scan_single_msg);

 VAR_10 = FUNC_8(VAR_9, ((void*)0),
   &VAR_5, ((void*)0));
 if (VAR_10)
  goto error_disable_reg;

 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10)
  goto error_cleanup_ring;

 return 0;

error_cleanup_ring:
 FUNC_7(VAR_9);
error_disable_reg:
 if (VAR_8->ext_ref)
  FUNC_9(VAR_8->reg);

 return VAR_10;
}
