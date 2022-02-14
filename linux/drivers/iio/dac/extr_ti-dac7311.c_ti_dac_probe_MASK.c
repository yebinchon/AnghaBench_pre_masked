
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_dac_spec {int resolution; } ;
struct ti_dac_chip {int powerdown; int vref; int lock; int resolution; struct spi_device* spi; } ;
struct device {int of_node; } ;
struct spi_device {int bits_per_word; struct device dev; int mode; } ;
struct TYPE_3__ {int of_node; struct device* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int name; int * info; TYPE_1__ dev; } ;
struct TYPE_4__ {size_t driver_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*,...) ;
 struct iio_dev* FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct ti_dac_chip* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 TYPE_2__* FUNC_11 (struct spi_device*) ;
 int FUNC_12 (struct spi_device*,struct iio_dev*) ;
 int FUNC_13 (struct spi_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ti_dac_spec* VAR_5 ;

__attribute__((used)) static int FUNC_14(struct spi_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 const struct ti_dac_spec *VAR_8;
 struct ti_dac_chip *VAR_9;
 struct iio_dev *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_7, sizeof(*VAR_9));
 if (!VAR_10) {
  FUNC_2(VAR_7, "can not allocate iio device\n");
  return -VAR_0;
 }

 VAR_6->mode = VAR_2;
 VAR_6->bits_per_word = 16;
 FUNC_13(VAR_6);

 VAR_10->dev.parent = VAR_7;
 VAR_10->dev.of_node = VAR_6->dev.of_node;
 VAR_10->info = &VAR_4;
 VAR_10->name = FUNC_11(VAR_6)->name;
 VAR_10->modes = VAR_1;
 VAR_10->channels = VAR_3;
 FUNC_12(VAR_6, VAR_10);

 VAR_9 = FUNC_6(VAR_10);
 VAR_9->powerdown = 0;
 VAR_9->spi = VAR_6;

 VAR_8 = &VAR_5[FUNC_11(VAR_6)->driver_data];
 VAR_10->num_channels = 1;
 VAR_9->resolution = VAR_8->resolution;

 VAR_9->vref = FUNC_4(VAR_7, "vref");
 if (FUNC_0(VAR_9->vref)) {
  FUNC_2(VAR_7, "error to get regulator\n");
  return FUNC_1(VAR_9->vref);
 }

 VAR_11 = FUNC_10(VAR_9->vref);
 if (VAR_11 < 0) {
  FUNC_2(VAR_7, "can not enable regulator\n");
  return VAR_11;
 }

 FUNC_8(&VAR_9->lock);

 VAR_11 = FUNC_5(VAR_10);
 if (VAR_11) {
  FUNC_2(VAR_7, "fail to register iio device: %d\n", VAR_11);
  goto err;
 }

 return 0;

err:
 FUNC_7(&VAR_9->lock);
 FUNC_9(VAR_9->vref);
 return VAR_11;
}
