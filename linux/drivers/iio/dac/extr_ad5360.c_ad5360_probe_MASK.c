
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_7__ {int * parent; } ;
struct iio_dev {int channels; int num_channels; int modes; int * info; int name; TYPE_1__ dev; } ;
struct ad5360_state {TYPE_3__* vref_reg; TYPE_6__* chip_info; struct spi_device* spi; } ;
typedef enum ad5360_type { ____Placeholder_ad5360_type } ad5360_type ;
struct TYPE_10__ {unsigned int num_vrefs; int num_channels; } ;
struct TYPE_9__ {int supply; } ;
struct TYPE_8__ {int driver_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_dev*) ;
 TYPE_6__* VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int *,char*,...) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned int,TYPE_3__*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct ad5360_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned int,TYPE_3__*) ;
 int FUNC_8 (unsigned int,TYPE_3__*) ;
 TYPE_2__* FUNC_9 (struct spi_device*) ;
 int FUNC_10 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_5)
{
 enum ad5360_type VAR_6 = FUNC_9(VAR_5)->driver_data;
 struct iio_dev *VAR_7;
 struct ad5360_state *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_7 = FUNC_2(&VAR_5->dev, sizeof(*VAR_8));
 if (VAR_7 == ((void*)0)) {
  FUNC_1(&VAR_5->dev, "Failed to allocate iio device\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_5(VAR_7);
 FUNC_10(VAR_5, VAR_7);

 VAR_8->chip_info = &VAR_2[VAR_6];
 VAR_8->spi = VAR_5;

 VAR_7->dev.parent = &VAR_5->dev;
 VAR_7->name = FUNC_9(VAR_5)->name;
 VAR_7->info = &VAR_3;
 VAR_7->modes = VAR_1;
 VAR_7->num_channels = VAR_8->chip_info->num_channels;

 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10) {
  FUNC_1(&VAR_5->dev, "Failed to allocate channel spec: %d\n", VAR_10);
  return VAR_10;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->chip_info->num_vrefs; ++VAR_9)
  VAR_8->vref_reg[VAR_9].supply = VAR_4[VAR_9];

 VAR_10 = FUNC_3(&VAR_8->spi->dev, VAR_8->chip_info->num_vrefs,
  VAR_8->vref_reg);
 if (VAR_10) {
  FUNC_1(&VAR_5->dev, "Failed to request vref regulators: %d\n", VAR_10);
  goto error_free_channels;
 }

 VAR_10 = FUNC_8(VAR_8->chip_info->num_vrefs, VAR_8->vref_reg);
 if (VAR_10) {
  FUNC_1(&VAR_5->dev, "Failed to enable vref regulators: %d\n", VAR_10);
  goto error_free_channels;
 }

 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10) {
  FUNC_1(&VAR_5->dev, "Failed to register iio device: %d\n", VAR_10);
  goto error_disable_reg;
 }

 return 0;

error_disable_reg:
 FUNC_7(VAR_8->chip_info->num_vrefs, VAR_8->vref_reg);
error_free_channels:
 FUNC_6(VAR_7->channels);

 return VAR_10;
}
