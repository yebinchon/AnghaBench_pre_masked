
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tlc4541_state {int reg; TYPE_2__* scan_single_xfer; int scan_single_msg; int * rx_buf; struct spi_device* spi; } ;
struct tlc4541_chip_info {int num_channels; int channels; } ;
struct spi_device {int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct iio_dev {int * info; int num_channels; int channels; int modes; TYPE_1__ dev; int name; } ;
typedef int int8_t ;
struct TYPE_6__ {size_t driver_data; int name; } ;
struct TYPE_5__ {int len; int delay_usecs; int * rx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct tlc4541_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*,int *,int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 TYPE_3__* FUNC_10 (struct spi_device*) ;
 int FUNC_11 (int *,TYPE_2__*,int) ;
 int FUNC_12 (struct spi_device*,struct iio_dev*) ;
 int FUNC_13 (struct spi_device*,int *,int) ;
 struct tlc4541_chip_info* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_14(struct spi_device *VAR_5)
{
 struct tlc4541_state *VAR_6;
 struct iio_dev *VAR_7;
 const struct tlc4541_chip_info *VAR_8;
 int VAR_9;
 int8_t VAR_10 = 0;

 VAR_7 = FUNC_2(&VAR_5->dev, sizeof(*VAR_6));
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_7);

 FUNC_12(VAR_5, VAR_7);

 VAR_6->spi = VAR_5;

 VAR_8 = &VAR_2[FUNC_10(VAR_5)->driver_data];

 VAR_7->name = FUNC_10(VAR_5)->name;
 VAR_7->dev.parent = &VAR_5->dev;
 VAR_7->modes = VAR_1;
 VAR_7->channels = VAR_8->channels;
 VAR_7->num_channels = VAR_8->num_channels;
 VAR_7->info = &VAR_3;


 FUNC_13(VAR_5, &VAR_10, 1);


 VAR_6->scan_single_xfer[0].rx_buf = &VAR_6->rx_buf[0];
 VAR_6->scan_single_xfer[0].len = 3;
 VAR_6->scan_single_xfer[1].delay_usecs = 3;
 VAR_6->scan_single_xfer[2].rx_buf = &VAR_6->rx_buf[0];
 VAR_6->scan_single_xfer[2].len = 2;

 FUNC_11(&VAR_6->scan_single_msg,
     VAR_6->scan_single_xfer, 3);

 VAR_6->reg = FUNC_3(&VAR_5->dev, "vref");
 if (FUNC_0(VAR_6->reg))
  return FUNC_1(VAR_6->reg);

 VAR_9 = FUNC_9(VAR_6->reg);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_7(VAR_7, ((void*)0),
   &VAR_4, ((void*)0));
 if (VAR_9)
  goto error_disable_reg;

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9)
  goto error_cleanup_buffer;

 return 0;

error_cleanup_buffer:
 FUNC_6(VAR_7);
error_disable_reg:
 FUNC_8(VAR_6->reg);

 return VAR_9;
}
