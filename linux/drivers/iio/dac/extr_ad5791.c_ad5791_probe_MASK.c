
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {struct ad5791_platform_data* platform_data; } ;
struct spi_device {TYPE_3__ dev; } ;
struct TYPE_7__ {TYPE_3__* parent; } ;
struct iio_dev {int num_channels; int name; int * channels; int modes; int * info; TYPE_1__ dev; } ;
struct ad5791_state {int pwr_down; int vref_mv; int vref_neg_mv; int ctrl; void* reg_vdd; void* reg_vss; struct spi_device* spi; TYPE_6__* chip_info; } ;
struct ad5791_platform_data {int vref_pos_mv; int vref_neg_mv; scalar_t__ use_rbuf_gain2; } ;
struct TYPE_10__ {int (* get_lin_comp ) (int) ;} ;
struct TYPE_8__ {size_t driver_data; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (void*) ;
 int * VAR_9 ;
 TYPE_6__* VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct ad5791_state*,int ,int) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 struct iio_dev* FUNC_4 (TYPE_3__*,int) ;
 void* FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (struct iio_dev*) ;
 struct ad5791_state* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 TYPE_2__* FUNC_11 (struct spi_device*) ;
 int FUNC_12 (struct spi_device*,struct iio_dev*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct spi_device *VAR_12)
{
 struct ad5791_platform_data *VAR_13 = VAR_12->dev.platform_data;
 struct iio_dev *VAR_14;
 struct ad5791_state *VAR_15;
 int VAR_16, VAR_17 = 0, VAR_18 = 0;

 VAR_14 = FUNC_4(&VAR_12->dev, sizeof(*VAR_15));
 if (!VAR_14)
  return -VAR_7;
 VAR_15 = FUNC_7(VAR_14);
 VAR_15->reg_vdd = FUNC_5(&VAR_12->dev, "vdd");
 if (!FUNC_1(VAR_15->reg_vdd)) {
  VAR_16 = FUNC_9(VAR_15->reg_vdd);
  if (VAR_16)
   return VAR_16;

  VAR_16 = FUNC_10(VAR_15->reg_vdd);
  if (VAR_16 < 0)
   goto error_disable_reg_pos;

  VAR_17 = VAR_16;
 }

 VAR_15->reg_vss = FUNC_5(&VAR_12->dev, "vss");
 if (!FUNC_1(VAR_15->reg_vss)) {
  VAR_16 = FUNC_9(VAR_15->reg_vss);
  if (VAR_16)
   goto error_disable_reg_pos;

  VAR_16 = FUNC_10(VAR_15->reg_vss);
  if (VAR_16 < 0)
   goto error_disable_reg_neg;

  VAR_18 = VAR_16;
 }

 VAR_15->pwr_down = 1;
 VAR_15->spi = VAR_12;

 if (!FUNC_1(VAR_15->reg_vss) && !FUNC_1(VAR_15->reg_vdd)) {
  VAR_15->vref_mv = (VAR_17 + VAR_18) / 1000;
  VAR_15->vref_neg_mv = VAR_18 / 1000;
 } else if (VAR_13) {
  VAR_15->vref_mv = VAR_13->vref_pos_mv + VAR_13->vref_neg_mv;
  VAR_15->vref_neg_mv = VAR_13->vref_neg_mv;
 } else {
  FUNC_3(&VAR_12->dev, "reference voltage unspecified\n");
 }

 VAR_16 = FUNC_2(VAR_15, VAR_1, VAR_6);
 if (VAR_16)
  goto error_disable_reg_neg;

 VAR_15->chip_info = &VAR_10[FUNC_11(VAR_12)
           ->driver_data];


 VAR_15->ctrl = FUNC_0(VAR_15->chip_info->get_lin_comp(VAR_15->vref_mv))
    | ((VAR_13 && VAR_13->use_rbuf_gain2) ? 0 : VAR_5) |
    VAR_2;

 VAR_16 = FUNC_2(VAR_15, VAR_0, VAR_15->ctrl |
  VAR_4 | VAR_3);
 if (VAR_16)
  goto error_disable_reg_neg;

 FUNC_12(VAR_12, VAR_14);
 VAR_14->dev.parent = &VAR_12->dev;
 VAR_14->info = &VAR_11;
 VAR_14->modes = VAR_8;
 VAR_14->channels
  = &VAR_9[FUNC_11(VAR_12)->driver_data];
 VAR_14->num_channels = 1;
 VAR_14->name = FUNC_11(VAR_15->spi)->name;
 VAR_16 = FUNC_6(VAR_14);
 if (VAR_16)
  goto error_disable_reg_neg;

 return 0;

error_disable_reg_neg:
 if (!FUNC_1(VAR_15->reg_vss))
  FUNC_8(VAR_15->reg_vss);
error_disable_reg_pos:
 if (!FUNC_1(VAR_15->reg_vdd))
  FUNC_8(VAR_15->reg_vdd);
 return VAR_16;
}
