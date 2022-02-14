
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {char const* name; int num_channels; int * channels; int modes; int * info; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct ad5446_state {int vref_mv; struct ad5446_chip_info const* chip_info; int pwr_down_mode; struct device* dev; struct regulator* reg; } ;
struct ad5446_chip_info {int int_vref_mv; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regulator*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,struct iio_dev*) ;
 int FUNC_2 (struct device*,char*) ;
 struct iio_dev* FUNC_3 (struct device*,int) ;
 struct regulator* FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct ad5446_state* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct regulator*) ;
 int FUNC_8 (struct regulator*) ;
 int FUNC_9 (struct regulator*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_4, const char *VAR_5,
   const struct ad5446_chip_info *VAR_6)
{
 struct ad5446_state *VAR_7;
 struct iio_dev *VAR_8;
 struct regulator *VAR_9;
 int VAR_10, VAR_11 = 0;

 VAR_9 = FUNC_4(VAR_4, "vcc");
 if (!FUNC_0(VAR_9)) {
  VAR_10 = FUNC_8(VAR_9);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_9(VAR_9);
  if (VAR_10 < 0)
   goto error_disable_reg;

  VAR_11 = VAR_10;
 }

 VAR_8 = FUNC_3(VAR_4, sizeof(*VAR_7));
 if (VAR_8 == ((void*)0)) {
  VAR_10 = -VAR_0;
  goto error_disable_reg;
 }
 VAR_7 = FUNC_6(VAR_8);
 VAR_7->chip_info = VAR_6;

 FUNC_1(VAR_4, VAR_8);
 VAR_7->reg = VAR_9;
 VAR_7->dev = VAR_4;


 VAR_8->dev.parent = VAR_4;
 VAR_8->name = VAR_5;
 VAR_8->info = &VAR_3;
 VAR_8->modes = VAR_1;
 VAR_8->channels = &VAR_7->chip_info->channel;
 VAR_8->num_channels = 1;

 VAR_7->pwr_down_mode = VAR_2;

 if (VAR_7->chip_info->int_vref_mv)
  VAR_7->vref_mv = VAR_7->chip_info->int_vref_mv;
 else if (VAR_11)
  VAR_7->vref_mv = VAR_11 / 1000;
 else
  FUNC_2(VAR_4, "reference voltage unspecified\n");

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10)
  goto error_disable_reg;

 return 0;

error_disable_reg:
 if (!FUNC_0(VAR_9))
  FUNC_7(VAR_9);
 return VAR_10;
}
