
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_8__ {int * parent; } ;
struct iio_dev {int channels; int num_channels; int modes; int * info; int name; TYPE_1__ dev; } ;
struct ad5764_state {TYPE_3__* vref_reg; TYPE_6__* chip_info; struct spi_device* spi; } ;
typedef enum ad5764_type { ____Placeholder_ad5764_type } ad5764_type ;
struct TYPE_11__ {scalar_t__ int_vref; int channels; } ;
struct TYPE_10__ {char* supply; } ;
struct TYPE_9__ {int driver_data; int name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,...) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,TYPE_3__*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct ad5764_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 TYPE_2__* FUNC_8 (struct spi_device*) ;
 int FUNC_9 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_5)
{
 enum ad5764_type VAR_6 = FUNC_8(VAR_5)->driver_data;
 struct iio_dev *VAR_7;
 struct ad5764_state *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(&VAR_5->dev, sizeof(*VAR_8));
 if (VAR_7 == ((void*)0)) {
  FUNC_1(&VAR_5->dev, "Failed to allocate iio device\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_5(VAR_7);
 FUNC_9(VAR_5, VAR_7);

 VAR_8->spi = VAR_5;
 VAR_8->chip_info = &VAR_3[VAR_6];

 VAR_7->dev.parent = &VAR_5->dev;
 VAR_7->name = FUNC_8(VAR_5)->name;
 VAR_7->info = &VAR_4;
 VAR_7->modes = VAR_2;
 VAR_7->num_channels = VAR_0;
 VAR_7->channels = VAR_8->chip_info->channels;

 if (VAR_8->chip_info->int_vref == 0) {
  VAR_8->vref_reg[0].supply = "vrefAB";
  VAR_8->vref_reg[1].supply = "vrefCD";

  VAR_9 = FUNC_3(&VAR_8->spi->dev,
   FUNC_0(VAR_8->vref_reg), VAR_8->vref_reg);
  if (VAR_9) {
   FUNC_1(&VAR_5->dev, "Failed to request vref regulators: %d\n",
    VAR_9);
   return VAR_9;
  }

  VAR_9 = FUNC_7(FUNC_0(VAR_8->vref_reg),
   VAR_8->vref_reg);
  if (VAR_9) {
   FUNC_1(&VAR_5->dev, "Failed to enable vref regulators: %d\n",
    VAR_9);
   return VAR_9;
  }
 }

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9) {
  FUNC_1(&VAR_5->dev, "Failed to register iio device: %d\n", VAR_9);
  goto error_disable_reg;
 }

 return 0;

error_disable_reg:
 if (VAR_8->chip_info->int_vref == 0)
  FUNC_6(FUNC_0(VAR_8->vref_reg), VAR_8->vref_reg);
 return VAR_9;
}
