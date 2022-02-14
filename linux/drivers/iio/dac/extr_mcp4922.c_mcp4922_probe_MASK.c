
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device_id {size_t driver_data; int name; } ;
struct spi_device {int dev; } ;
struct mcp4922_state {int vref_mv; int vref_reg; struct spi_device* spi; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct mcp4922_state* FUNC_6 (struct iio_dev*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct spi_device_id* FUNC_10 (struct spi_device*) ;
 int FUNC_11 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_5)
{
 struct iio_dev *VAR_6;
 struct mcp4922_state *VAR_7;
 const struct spi_device_id *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(&VAR_5->dev, sizeof(*VAR_7));
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_6);
 VAR_7->spi = VAR_5;
 VAR_7->vref_reg = FUNC_4(&VAR_5->dev, "vref");
 if (FUNC_0(VAR_7->vref_reg)) {
  FUNC_2(&VAR_5->dev, "Vref regulator not specified\n");
  return FUNC_1(VAR_7->vref_reg);
 }

 VAR_9 = FUNC_8(VAR_7->vref_reg);
 if (VAR_9) {
  FUNC_2(&VAR_5->dev, "Failed to enable vref regulator: %d\n",
    VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_9(VAR_7->vref_reg);
 if (VAR_9 < 0) {
  FUNC_2(&VAR_5->dev, "Failed to read vref regulator: %d\n",
    VAR_9);
  goto error_disable_reg;
 }
 VAR_7->vref_mv = VAR_9 / 1000;

 FUNC_11(VAR_5, VAR_6);
 VAR_8 = FUNC_10(VAR_5);
 VAR_6->dev.parent = &VAR_5->dev;
 VAR_6->info = &VAR_4;
 VAR_6->modes = VAR_1;
 VAR_6->channels = VAR_3[VAR_8->driver_data];
 VAR_6->num_channels = VAR_2;
 VAR_6->name = VAR_8->name;

 VAR_9 = FUNC_5(VAR_6);
 if (VAR_9) {
  FUNC_2(&VAR_5->dev, "Failed to register iio device: %d\n",
    VAR_9);
  goto error_disable_reg;
 }

 return 0;

error_disable_reg:
 FUNC_7(VAR_7->vref_reg);

 return VAR_9;
}
