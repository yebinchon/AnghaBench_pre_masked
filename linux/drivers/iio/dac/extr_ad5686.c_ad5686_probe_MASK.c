
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {struct device* parent; } ;
struct iio_dev {char const* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct ad5686_state {int (* write ) (struct ad5686_state*,int ,int ,int) ;int vref_mv; int pwr_down_mode; int use_internal_vref; int reg; TYPE_2__* chip_info; int read; struct device* dev; } ;
typedef enum ad5686_supported_device_ids { ____Placeholder_ad5686_supported_device_ids } ad5686_supported_device_ids ;
typedef int (* ad5686_write_func ) (struct ad5686_state*,int ,int ,int) ;
typedef int ad5686_read_func ;
struct TYPE_4__ {int int_vref_mv; int num_channels; int regmap_type; int channels; } ;


 unsigned int VAR_0 ;

 unsigned int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 unsigned int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct device*,struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct device*,int) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct ad5686_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ad5686_state*,int ,int ,int) ;

int FUNC_10(struct device *VAR_10,
   enum ad5686_supported_device_ids VAR_11,
   const char *VAR_12, ad5686_write_func VAR_13,
   ad5686_read_func VAR_14)
{
 struct ad5686_state *VAR_15;
 struct iio_dev *VAR_16;
 unsigned int VAR_17, VAR_18;
 u8 VAR_19;
 int VAR_20, VAR_21, VAR_22 = 0;

 VAR_16 = FUNC_2(VAR_10, sizeof(*VAR_15));
 if (VAR_16 == ((void*)0))
  return -VAR_6;

 VAR_15 = FUNC_5(VAR_16);
 FUNC_1(VAR_10, VAR_16);

 VAR_15->dev = VAR_10;
 VAR_15->write = VAR_13;
 VAR_15->read = VAR_14;

 VAR_15->reg = FUNC_3(VAR_10, "vcc");
 if (!FUNC_0(VAR_15->reg)) {
  VAR_20 = FUNC_7(VAR_15->reg);
  if (VAR_20)
   return VAR_20;

  VAR_20 = FUNC_8(VAR_15->reg);
  if (VAR_20 < 0)
   goto error_disable_reg;

  VAR_22 = VAR_20;
 }

 VAR_15->chip_info = &VAR_8[VAR_11];

 if (VAR_22)
  VAR_15->vref_mv = VAR_22 / 1000;
 else
  VAR_15->vref_mv = VAR_15->chip_info->int_vref_mv;


 for (VAR_21 = 0; VAR_21 < VAR_15->chip_info->num_channels; VAR_21++)
  VAR_15->pwr_down_mode |= (0x01 << (VAR_21 * 2));

 VAR_16->dev.parent = VAR_10;
 VAR_16->name = VAR_12;
 VAR_16->info = &VAR_9;
 VAR_16->modes = VAR_7;
 VAR_16->channels = VAR_15->chip_info->channels;
 VAR_16->num_channels = VAR_15->chip_info->num_channels;

 switch (VAR_15->chip_info->regmap_type) {
 case 131:
  VAR_19 = VAR_2;
  VAR_18 = VAR_0;
  VAR_15->use_internal_vref = !VAR_22;
  break;
 case 130:
  VAR_19 = VAR_2;
  VAR_18 = VAR_1;
  VAR_15->use_internal_vref = !VAR_22;
  break;
 case 129:
  VAR_19 = VAR_3;
  VAR_18 = 0;
  break;
 case 128:
  VAR_19 = VAR_2;
  VAR_18 = VAR_4;
  VAR_15->use_internal_vref = !VAR_22;
  break;
 default:
  VAR_20 = -VAR_5;
  goto error_disable_reg;
 }

 VAR_17 = (VAR_22 | VAR_18);

 VAR_20 = VAR_15->write(VAR_15, VAR_19, 0, !!VAR_17);
 if (VAR_20)
  goto error_disable_reg;

 VAR_20 = FUNC_4(VAR_16);
 if (VAR_20)
  goto error_disable_reg;

 return 0;

error_disable_reg:
 if (!FUNC_0(VAR_15->reg))
  FUNC_6(VAR_15->reg);
 return VAR_20;
}
