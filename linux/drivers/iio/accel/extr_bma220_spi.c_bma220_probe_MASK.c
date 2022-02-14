
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int available_scan_masks; int num_channels; int channels; int modes; int name; int * info; TYPE_1__ dev; } ;
struct bma220_data {struct spi_device* spi_device; int lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct spi_device*) ;
 int VAR_5 ;
 int FUNC_2 (struct spi_device*) ;
 int VAR_6 ;
 int FUNC_3 (int *,char*) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (struct iio_dev*) ;
 int VAR_7 ;
 struct bma220_data* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*,int ,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_8)
{
 int VAR_9;
 struct iio_dev *VAR_10;
 struct bma220_data *VAR_11;

 VAR_10 = FUNC_4(&VAR_8->dev, sizeof(*VAR_11));
 if (!VAR_10) {
  FUNC_3(&VAR_8->dev, "iio allocation failed!\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_6(VAR_10);
 VAR_11->spi_device = VAR_8;
 FUNC_10(VAR_8, VAR_10);
 FUNC_9(&VAR_11->lock);

 VAR_10->dev.parent = &VAR_8->dev;
 VAR_10->info = &VAR_5;
 VAR_10->name = VAR_0;
 VAR_10->modes = VAR_2;
 VAR_10->channels = VAR_4;
 VAR_10->num_channels = FUNC_0(VAR_4);
 VAR_10->available_scan_masks = VAR_3;

 VAR_9 = FUNC_2(VAR_11->spi_device);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_8(VAR_10, VAR_7,
      VAR_6, ((void*)0));
 if (VAR_9 < 0) {
  FUNC_3(&VAR_8->dev, "iio triggered buffer setup failed\n");
  goto err_suspend;
 }

 VAR_9 = FUNC_5(VAR_10);
 if (VAR_9 < 0) {
  FUNC_3(&VAR_8->dev, "iio_device_register failed\n");
  FUNC_7(VAR_10);
  goto err_suspend;
 }

 return 0;

err_suspend:
 return FUNC_1(VAR_8);
}
