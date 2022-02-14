
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {char const* name; int modes; int * info; TYPE_1__ dev; } ;
struct device {scalar_t__ of_node; } ;
struct ad5592r_state {int num_channels; int * reg; struct ad5592r_rw_ops const* ops; struct device* dev; } ;
struct ad5592r_rw_ops {int (* reg_write ) (struct ad5592r_state*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ad5592r_state*) ;
 int FUNC_3 (struct ad5592r_state*) ;
 int FUNC_4 (struct ad5592r_state*) ;
 int VAR_5 ;
 int FUNC_5 (struct ad5592r_state*,int ) ;
 int FUNC_6 (struct ad5592r_state*) ;
 int FUNC_7 (struct ad5592r_state*) ;
 int FUNC_8 (struct ad5592r_state*) ;
 int FUNC_9 (struct device*,struct iio_dev*) ;
 struct iio_dev* FUNC_10 (struct device*,int) ;
 int * FUNC_11 (struct device*,char*) ;
 int FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (struct iio_dev*) ;
 struct ad5592r_state* FUNC_14 (struct iio_dev*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct ad5592r_state*,int ,int ) ;

int FUNC_18(struct device *VAR_6, const char *VAR_7,
  const struct ad5592r_rw_ops *VAR_8)
{
 struct iio_dev *VAR_9;
 struct ad5592r_state *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_10(VAR_6, sizeof(*VAR_10));
 if (!VAR_9)
  return -VAR_3;

 VAR_10 = FUNC_14(VAR_9);
 VAR_10->dev = VAR_6;
 VAR_10->ops = VAR_8;
 VAR_10->num_channels = 8;
 FUNC_9(VAR_6, VAR_9);

 VAR_10->reg = FUNC_11(VAR_6, "vref");
 if (FUNC_0(VAR_10->reg)) {
  if ((FUNC_1(VAR_10->reg) != -VAR_2) && VAR_6->of_node)
   return FUNC_1(VAR_10->reg);

  VAR_10->reg = ((void*)0);
 } else {
  VAR_11 = FUNC_16(VAR_10->reg);
  if (VAR_11)
   return VAR_11;
 }

 VAR_9->dev.parent = VAR_6;
 VAR_9->name = VAR_7;
 VAR_9->info = &VAR_5;
 VAR_9->modes = VAR_4;

 FUNC_5(VAR_10, FUNC_3(VAR_10));

 VAR_11 = FUNC_6(VAR_10);
 if (VAR_11)
  goto error_disable_reg;

 VAR_11 = VAR_8->reg_write(VAR_10, VAR_0,
       (VAR_10->reg == ((void*)0)) ? VAR_1 : 0);
 if (VAR_11)
  goto error_disable_reg;

 VAR_11 = FUNC_2(VAR_10);
 if (VAR_11)
  goto error_disable_reg;

 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11)
  goto error_reset_ch_modes;

 VAR_11 = FUNC_12(VAR_9);
 if (VAR_11)
  goto error_reset_ch_modes;

 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11)
  goto error_dev_unregister;

 return 0;

error_dev_unregister:
 FUNC_13(VAR_9);

error_reset_ch_modes:
 FUNC_7(VAR_10);

error_disable_reg:
 if (VAR_10->reg)
  FUNC_15(VAR_10->reg);

 return VAR_11;
}
