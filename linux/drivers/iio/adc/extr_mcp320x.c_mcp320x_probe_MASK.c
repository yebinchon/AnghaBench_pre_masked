
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int of_node; } ;
struct spi_device {int mode; TYPE_4__ dev; } ;
struct mcp320x_chip_info {int num_channels; int resolution; int channels; } ;
struct TYPE_8__ {int len; int delay_usecs; int rx_buf; int * tx_buf; } ;
struct mcp320x {int reg; int lock; TYPE_2__ start_conv_transfer; int start_conv_msg; TYPE_2__* transfer; int msg; int rx_buf; int tx_buf; struct mcp320x_chip_info const* chip_info; struct spi_device* spi; } ;
struct TYPE_7__ {int of_node; TYPE_4__* parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct TYPE_9__ {int driver_data; int name; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 struct iio_dev* FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (struct iio_dev*) ;
 struct mcp320x* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct mcp320x*,int ,int,int,int*) ;
 struct mcp320x_chip_info* VAR_3 ;
 int VAR_4 ;




 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 TYPE_3__* FUNC_12 (struct spi_device*) ;
 int FUNC_13 (int *,TYPE_2__*,int) ;
 int FUNC_14 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_5)
{
 struct iio_dev *VAR_6;
 struct mcp320x *VAR_7;
 const struct mcp320x_chip_info *VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_6);
 VAR_7->spi = VAR_5;

 VAR_6->dev.parent = &VAR_5->dev;
 VAR_6->dev.of_node = VAR_5->dev.of_node;
 VAR_6->name = FUNC_12(VAR_5)->name;
 VAR_6->modes = VAR_1;
 VAR_6->info = &VAR_4;
 FUNC_14(VAR_5, VAR_6);

 VAR_10 = FUNC_12(VAR_5)->driver_data;
 VAR_8 = &VAR_3[VAR_10];
 VAR_6->channels = VAR_8->channels;
 VAR_6->num_channels = VAR_8->num_channels;

 VAR_7->chip_info = VAR_8;

 VAR_7->transfer[0].tx_buf = &VAR_7->tx_buf;
 VAR_7->transfer[0].len = sizeof(VAR_7->tx_buf);
 VAR_7->transfer[1].rx_buf = VAR_7->rx_buf;
 VAR_7->transfer[1].len = FUNC_1(VAR_8->resolution, 8);

 if (VAR_8->num_channels == 1)

  FUNC_13(&VAR_7->msg,
      &VAR_7->transfer[1], 1);
 else
  FUNC_13(&VAR_7->msg, VAR_7->transfer,
      FUNC_0(VAR_7->transfer));

 switch (VAR_10) {
 case 131:
 case 130:
 case 129:
 case 128:

  if (!(VAR_5->mode & VAR_2))
   VAR_7->transfer[1].len++;


  VAR_7->start_conv_transfer.delay_usecs = 8;
  FUNC_13(&VAR_7->start_conv_msg,
      &VAR_7->start_conv_transfer, 1);
  FUNC_8(VAR_7, 0, 1, VAR_10, &VAR_9);
  FUNC_8(VAR_7, 0, 1, VAR_10, &VAR_9);
 }

 VAR_7->reg = FUNC_5(&VAR_5->dev, "vref");
 if (FUNC_2(VAR_7->reg))
  return FUNC_3(VAR_7->reg);

 VAR_9 = FUNC_11(VAR_7->reg);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_9(&VAR_7->lock);

 VAR_9 = FUNC_6(VAR_6);
 if (VAR_9 < 0)
  goto reg_disable;

 return 0;

reg_disable:
 FUNC_10(VAR_7->reg);

 return VAR_9;
}
