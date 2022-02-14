
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct device* parent; } ;
struct iio_dev {char const* name; unsigned int num_channels; TYPE_3__* channels; int modes; int * info; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct ad5064_state {unsigned int* dac_cache; int vref_reg; int use_internal_vref; int * pwr_down_mode; TYPE_4__* chip_info; int write; struct device* dev; int lock; } ;
typedef enum ad5064_type { ____Placeholder_ad5064_type } ad5064_type ;
typedef int ad5064_write_func ;
struct TYPE_8__ {unsigned int num_channels; TYPE_3__* channels; } ;
struct TYPE_6__ {int realbits; } ;
struct TYPE_7__ {TYPE_2__ scan_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ad5064_state*) ;
 int FUNC_1 (struct ad5064_state*,struct device*) ;
 int FUNC_2 (struct device*,struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct iio_dev*) ;
 struct ad5064_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_5, enum ad5064_type VAR_6,
   const char *VAR_7, ad5064_write_func VAR_8)
{
 struct iio_dev *VAR_9;
 struct ad5064_state *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_9 = FUNC_3(VAR_5, sizeof(*VAR_10));
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_10 = FUNC_5(VAR_9);
 FUNC_6(&VAR_10->lock);
 FUNC_2(VAR_5, VAR_9);

 VAR_10->chip_info = &VAR_3[VAR_6];
 VAR_10->dev = VAR_5;
 VAR_10->write = VAR_8;

 VAR_13 = FUNC_1(VAR_10, VAR_5);
 if (VAR_13)
  return VAR_13;

 if (!VAR_10->use_internal_vref) {
  VAR_13 = FUNC_8(FUNC_0(VAR_10), VAR_10->vref_reg);
  if (VAR_13)
   return VAR_13;
 }

 VAR_9->dev.parent = VAR_5;
 VAR_9->name = VAR_7;
 VAR_9->info = &VAR_4;
 VAR_9->modes = VAR_2;
 VAR_9->channels = VAR_10->chip_info->channels;
 VAR_9->num_channels = VAR_10->chip_info->num_channels;

 VAR_11 = (1 << VAR_9->channels[0].scan_type.realbits) / 2;

 for (VAR_12 = 0; VAR_12 < VAR_10->chip_info->num_channels; ++VAR_12) {
  VAR_10->pwr_down_mode[VAR_12] = VAR_0;
  VAR_10->dac_cache[VAR_12] = VAR_11;
 }

 VAR_13 = FUNC_4(VAR_9);
 if (VAR_13)
  goto error_disable_reg;

 return 0;

error_disable_reg:
 if (!VAR_10->use_internal_vref)
  FUNC_7(FUNC_0(VAR_10), VAR_10->vref_reg);

 return VAR_13;
}
