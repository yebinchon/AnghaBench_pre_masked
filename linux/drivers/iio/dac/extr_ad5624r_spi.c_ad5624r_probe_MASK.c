
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; int name; TYPE_1__ dev; } ;
struct ad5624r_state {int vref_mv; int reg; TYPE_3__* chip_info; struct spi_device* us; } ;
struct TYPE_6__ {int int_vref_mv; int channels; } ;
struct TYPE_5__ {size_t driver_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct spi_device*,int ,int ,int,int) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct ad5624r_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_2__* FUNC_9 (struct spi_device*) ;
 int FUNC_10 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_6)
{
 struct ad5624r_state *VAR_7;
 struct iio_dev *VAR_8;
 int VAR_9, VAR_10 = 0;

 VAR_8 = FUNC_2(&VAR_6->dev, sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_2;
 VAR_7 = FUNC_5(VAR_8);
 VAR_7->reg = FUNC_3(&VAR_6->dev, "vcc");
 if (!FUNC_0(VAR_7->reg)) {
  VAR_9 = FUNC_7(VAR_7->reg);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_8(VAR_7->reg);
  if (VAR_9 < 0)
   goto error_disable_reg;

  VAR_10 = VAR_9;
 }

 FUNC_10(VAR_6, VAR_8);
 VAR_7->chip_info =
  &VAR_4[FUNC_9(VAR_6)->driver_data];

 if (VAR_10)
  VAR_7->vref_mv = VAR_10 / 1000;
 else
  VAR_7->vref_mv = VAR_7->chip_info->int_vref_mv;

 VAR_7->us = VAR_6;

 VAR_8->dev.parent = &VAR_6->dev;
 VAR_8->name = FUNC_9(VAR_6)->name;
 VAR_8->info = &VAR_5;
 VAR_8->modes = VAR_3;
 VAR_8->channels = VAR_7->chip_info->channels;
 VAR_8->num_channels = VAR_1;

 VAR_9 = FUNC_1(VAR_6, VAR_0, 0,
    !!VAR_10, 16);
 if (VAR_9)
  goto error_disable_reg;

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9)
  goto error_disable_reg;

 return 0;

error_disable_reg:
 if (!FUNC_0(VAR_7->reg))
  FUNC_6(VAR_7->reg);

 return VAR_9;
}
