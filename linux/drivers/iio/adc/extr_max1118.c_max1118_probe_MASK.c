
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device_id {scalar_t__ driver_data; int name; } ;
struct spi_device {int dev; } ;
struct max1118 {int reg; int lock; struct spi_device* spi; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; TYPE_1__ dev; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct iio_dev*) ;
 struct max1118* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*,int *,int ,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (struct spi_device*,int ) ;
 int VAR_5 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 struct spi_device_id* FUNC_14 (struct spi_device*) ;
 int FUNC_15 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_16(struct spi_device *VAR_6)
{
 struct iio_dev *VAR_7;
 struct max1118 *VAR_8;
 const struct spi_device_id *VAR_9 = FUNC_14(VAR_6);
 int VAR_10;

 VAR_7 = FUNC_4(&VAR_6->dev, sizeof(*VAR_8));
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_7(VAR_7);
 VAR_8->spi = VAR_6;
 FUNC_11(&VAR_8->lock);

 if (VAR_9->driver_data == VAR_2) {
  VAR_8->reg = FUNC_5(&VAR_6->dev, "vref");
  if (FUNC_1(VAR_8->reg)) {
   FUNC_3(&VAR_6->dev, "failed to get vref regulator\n");
   return FUNC_2(VAR_8->reg);
  }
  VAR_10 = FUNC_13(VAR_8->reg);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_15(VAR_6, VAR_7);

 VAR_7->name = FUNC_14(VAR_6)->name;
 VAR_7->dev.parent = &VAR_6->dev;
 VAR_7->info = &VAR_4;
 VAR_7->modes = VAR_1;
 VAR_7->channels = VAR_3;
 VAR_7->num_channels = FUNC_0(VAR_3);







 FUNC_10(VAR_6, 0);

 VAR_10 = FUNC_9(VAR_7, ((void*)0),
     VAR_5, ((void*)0));
 if (VAR_10)
  goto err_reg_disable;

 VAR_10 = FUNC_6(VAR_7);
 if (VAR_10)
  goto err_buffer_cleanup;

 return 0;

err_buffer_cleanup:
 FUNC_8(VAR_7);
err_reg_disable:
 if (VAR_9->driver_data == VAR_2)
  FUNC_12(VAR_8->reg);

 return VAR_10;
}
