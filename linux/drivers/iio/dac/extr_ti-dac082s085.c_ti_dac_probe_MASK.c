
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ti_dac_spec {int resolution; int num_channels; } ;
struct TYPE_6__ {struct spi_device* spi; } ;
struct TYPE_7__ {int len; int * tx_buf; } ;
struct ti_dac_chip {int vref; int lock; int resolution; TYPE_2__ mesg; TYPE_3__ xfer; int buf; } ;
struct device {int dummy; } ;
struct spi_device {int modalias; struct device dev; } ;
struct TYPE_5__ {struct device* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int name; int * info; TYPE_1__ dev; } ;
struct TYPE_8__ {size_t driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*) ;
 struct iio_dev* FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct ti_dac_chip* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 TYPE_4__* FUNC_11 (struct spi_device*) ;
 int FUNC_12 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_13 (struct spi_device*,struct iio_dev*) ;
 int VAR_3 ;
 int FUNC_14 (struct ti_dac_chip*,int ,int ) ;
 int VAR_4 ;
 struct ti_dac_spec* VAR_5 ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 const struct ti_dac_spec *VAR_8;
 struct ti_dac_chip *VAR_9;
 struct iio_dev *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_7, sizeof(*VAR_9));
 if (!VAR_10)
  return -VAR_0;

 VAR_10->dev.parent = VAR_7;
 VAR_10->info = &VAR_4;
 VAR_10->name = VAR_6->modalias;
 VAR_10->modes = VAR_1;
 VAR_10->channels = VAR_3;
 FUNC_13(VAR_6, VAR_10);

 VAR_9 = FUNC_6(VAR_10);
 VAR_9->xfer.tx_buf = &VAR_9->buf;
 VAR_9->xfer.len = sizeof(VAR_9->buf);
 FUNC_12(&VAR_9->mesg, &VAR_9->xfer, 1);
 VAR_9->mesg.spi = VAR_6;

 VAR_8 = &VAR_5[FUNC_11(VAR_6)->driver_data];
 VAR_10->num_channels = VAR_8->num_channels;
 VAR_9->resolution = VAR_8->resolution;

 VAR_9->vref = FUNC_4(VAR_7, "vref");
 if (FUNC_0(VAR_9->vref))
  return FUNC_1(VAR_9->vref);

 VAR_11 = FUNC_10(VAR_9->vref);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_8(&VAR_9->lock);

 VAR_11 = FUNC_14(VAR_9, VAR_2, 0);
 if (VAR_11) {
  FUNC_2(VAR_7, "failed to initialize outputs to 0\n");
  goto err;
 }

 VAR_11 = FUNC_5(VAR_10);
 if (VAR_11)
  goto err;

 return 0;

err:
 FUNC_7(&VAR_9->lock);
 FUNC_9(VAR_9->vref);
 return VAR_11;
}
