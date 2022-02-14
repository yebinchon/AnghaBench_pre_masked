
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int of_node; } ;
struct spi_device {struct device dev; } ;
struct TYPE_3__ {int of_node; struct device* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int name; int * info; TYPE_1__ dev; } ;
struct ad7949_adc_spec {int resolution; int num_channels; } ;
struct ad7949_adc_chip {int vref; int lock; int resolution; struct spi_device* spi; struct iio_dev* indio_dev; } ;
struct TYPE_4__ {size_t driver_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 struct ad7949_adc_spec* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ad7949_adc_chip*) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct iio_dev* FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct iio_dev*) ;
 struct ad7949_adc_chip* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 TYPE_2__* FUNC_12 (struct spi_device*) ;
 int FUNC_13 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_14(struct spi_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 const struct ad7949_adc_spec *VAR_7;
 struct ad7949_adc_chip *VAR_8;
 struct iio_dev *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_6, sizeof(*VAR_8));
 if (!VAR_9) {
  FUNC_3(VAR_6, "can not allocate iio device\n");
  return -VAR_0;
 }

 VAR_9->dev.parent = VAR_6;
 VAR_9->dev.of_node = VAR_6->of_node;
 VAR_9->info = &VAR_4;
 VAR_9->name = FUNC_12(VAR_5)->name;
 VAR_9->modes = VAR_1;
 VAR_9->channels = VAR_2;
 FUNC_13(VAR_5, VAR_9);

 VAR_8 = FUNC_7(VAR_9);
 VAR_8->indio_dev = VAR_9;
 VAR_8->spi = VAR_5;

 VAR_7 = &VAR_3[FUNC_12(VAR_5)->driver_data];
 VAR_9->num_channels = VAR_7->num_channels;
 VAR_8->resolution = VAR_7->resolution;

 VAR_8->vref = FUNC_5(VAR_6, "vref");
 if (FUNC_0(VAR_8->vref)) {
  FUNC_3(VAR_6, "fail to request regulator\n");
  return FUNC_1(VAR_8->vref);
 }

 VAR_10 = FUNC_11(VAR_8->vref);
 if (VAR_10 < 0) {
  FUNC_3(VAR_6, "fail to enable regulator\n");
  return VAR_10;
 }

 FUNC_9(&VAR_8->lock);

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10) {
  FUNC_3(VAR_6, "enable to init this device: %d\n", VAR_10);
  goto err;
 }

 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10) {
  FUNC_3(VAR_6, "fail to register iio device: %d\n", VAR_10);
  goto err;
 }

 return 0;

err:
 FUNC_8(&VAR_8->lock);
 FUNC_10(VAR_8->vref);

 return VAR_10;
}
