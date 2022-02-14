
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device_id {scalar_t__ driver_data; int name; } ;
struct spi_device {int dev; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct ad8801_state {int vrefh_mv; int vrefl_mv; int * vrefh_reg; int * vrefl_reg; struct spi_device* spi; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,char*,...) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 void* FUNC_5 (int *,char*) ;
 int FUNC_6 (struct iio_dev*) ;
 struct ad8801_state* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct spi_device_id* FUNC_11 (struct spi_device*) ;
 int FUNC_12 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_13(struct spi_device *VAR_5)
{
 struct iio_dev *VAR_6;
 struct ad8801_state *VAR_7;
 const struct spi_device_id *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7));
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_6);
 VAR_7->spi = VAR_5;
 VAR_8 = FUNC_11(VAR_5);

 VAR_7->vrefh_reg = FUNC_5(&VAR_5->dev, "vrefh");
 if (FUNC_1(VAR_7->vrefh_reg)) {
  FUNC_3(&VAR_5->dev, "Vrefh regulator not specified\n");
  return FUNC_2(VAR_7->vrefh_reg);
 }

 VAR_9 = FUNC_9(VAR_7->vrefh_reg);
 if (VAR_9) {
  FUNC_3(&VAR_5->dev, "Failed to enable vrefh regulator: %d\n",
    VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_10(VAR_7->vrefh_reg);
 if (VAR_9 < 0) {
  FUNC_3(&VAR_5->dev, "Failed to read vrefh regulator: %d\n",
    VAR_9);
  goto error_disable_vrefh_reg;
 }
 VAR_7->vrefh_mv = VAR_9 / 1000;

 if (VAR_8->driver_data == VAR_1) {
  VAR_7->vrefl_reg = FUNC_5(&VAR_5->dev, "vrefl");
  if (FUNC_1(VAR_7->vrefl_reg)) {
   FUNC_3(&VAR_5->dev, "Vrefl regulator not specified\n");
   VAR_9 = FUNC_2(VAR_7->vrefl_reg);
   goto error_disable_vrefh_reg;
  }

  VAR_9 = FUNC_9(VAR_7->vrefl_reg);
  if (VAR_9) {
   FUNC_3(&VAR_5->dev, "Failed to enable vrefl regulator: %d\n",
     VAR_9);
   goto error_disable_vrefh_reg;
  }

  VAR_9 = FUNC_10(VAR_7->vrefl_reg);
  if (VAR_9 < 0) {
   FUNC_3(&VAR_5->dev, "Failed to read vrefl regulator: %d\n",
     VAR_9);
   goto error_disable_vrefl_reg;
  }
  VAR_7->vrefl_mv = VAR_9 / 1000;
 } else {
  VAR_7->vrefl_mv = 0;
  VAR_7->vrefl_reg = ((void*)0);
 }

 FUNC_12(VAR_5, VAR_6);
 VAR_6->dev.parent = &VAR_5->dev;
 VAR_6->info = &VAR_4;
 VAR_6->modes = VAR_2;
 VAR_6->channels = VAR_3;
 VAR_6->num_channels = FUNC_0(VAR_3);
 VAR_6->name = VAR_8->name;

 VAR_9 = FUNC_6(VAR_6);
 if (VAR_9) {
  FUNC_3(&VAR_5->dev, "Failed to register iio device: %d\n",
    VAR_9);
  goto error_disable_vrefl_reg;
 }

 return 0;

error_disable_vrefl_reg:
 if (VAR_7->vrefl_reg)
  FUNC_8(VAR_7->vrefl_reg);
error_disable_vrefh_reg:
 FUNC_8(VAR_7->vrefh_reg);
 return VAR_9;
}
