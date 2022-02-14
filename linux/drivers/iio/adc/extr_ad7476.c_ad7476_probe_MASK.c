
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int of_node; } ;
struct spi_device {TYPE_6__ dev; } ;
struct TYPE_9__ {int of_node; TYPE_6__* parent; } ;
struct iio_dev {int num_channels; int * info; TYPE_3__* channels; int modes; int name; TYPE_1__ dev; } ;
struct TYPE_12__ {int len; int * rx_buf; } ;
struct ad7476_state {int reg; TYPE_8__* chip_info; int msg; TYPE_4__ xfer; int data; struct spi_device* spi; } ;
struct TYPE_15__ {int (* reset ) (struct ad7476_state*) ;TYPE_3__* channel; } ;
struct TYPE_13__ {size_t driver_data; int name; } ;
struct TYPE_10__ {int storagebits; } ;
struct TYPE_11__ {TYPE_2__ scan_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_8__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iio_dev* FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct ad7476_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*,int *,int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 TYPE_5__* FUNC_10 (struct spi_device*) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct spi_device*,struct iio_dev*) ;
 int FUNC_14 (struct ad7476_state*) ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_5)
{
 struct ad7476_state *VAR_6;
 struct iio_dev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(&VAR_5->dev, sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_7);
 VAR_6->chip_info =
  &VAR_2[FUNC_10(VAR_5)->driver_data];

 VAR_6->reg = FUNC_3(&VAR_5->dev, "vcc");
 if (FUNC_0(VAR_6->reg))
  return FUNC_1(VAR_6->reg);

 VAR_8 = FUNC_9(VAR_6->reg);
 if (VAR_8)
  return VAR_8;

 FUNC_13(VAR_5, VAR_7);

 VAR_6->spi = VAR_5;


 VAR_7->dev.parent = &VAR_5->dev;
 VAR_7->dev.of_node = VAR_5->dev.of_node;
 VAR_7->name = FUNC_10(VAR_5)->name;
 VAR_7->modes = VAR_1;
 VAR_7->channels = VAR_6->chip_info->channel;
 VAR_7->num_channels = 2;
 VAR_7->info = &VAR_3;


 VAR_6->xfer.rx_buf = &VAR_6->data;
 VAR_6->xfer.len = VAR_6->chip_info->channel[0].scan_type.storagebits / 8;

 FUNC_12(&VAR_6->msg);
 FUNC_11(&VAR_6->xfer, &VAR_6->msg);

 VAR_8 = FUNC_7(VAR_7, ((void*)0),
   &VAR_4, ((void*)0));
 if (VAR_8)
  goto error_disable_reg;

 if (VAR_6->chip_info->reset)
  VAR_6->chip_info->reset(VAR_6);

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8)
  goto error_ring_unregister;
 return 0;

error_ring_unregister:
 FUNC_6(VAR_7);
error_disable_reg:
 FUNC_8(VAR_6->reg);

 return VAR_8;
}
