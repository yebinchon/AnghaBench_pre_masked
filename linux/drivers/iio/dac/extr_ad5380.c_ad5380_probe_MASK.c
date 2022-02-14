
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct iio_dev {char const* name; int channels; int num_channels; int modes; int * info; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct ad5380_state {int vref; int vref_reg; struct regmap* regmap; TYPE_2__* chip_info; } ;
typedef enum ad5380_type { ____Placeholder_ad5380_type } ad5380_type ;
struct TYPE_4__ {int int_vref; int num_channels; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_dev*) ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,struct iio_dev*) ;
 struct iio_dev* FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct iio_dev*) ;
 struct ad5380_state* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct regmap*,int ,unsigned int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_7, struct regmap *VAR_8,
   enum ad5380_type VAR_9, const char *VAR_10)
{
 struct iio_dev *VAR_11;
 struct ad5380_state *VAR_12;
 unsigned int VAR_13 = 0;
 int VAR_14;

 VAR_11 = FUNC_4(VAR_7, sizeof(*VAR_12));
 if (VAR_11 == ((void*)0)) {
  FUNC_2(VAR_7, "Failed to allocate iio device\n");
  return -VAR_3;
 }

 VAR_12 = FUNC_7(VAR_11);
 FUNC_3(VAR_7, VAR_11);

 VAR_12->chip_info = &VAR_5[VAR_9];
 VAR_12->regmap = VAR_8;

 VAR_11->dev.parent = VAR_7;
 VAR_11->name = VAR_10;
 VAR_11->info = &VAR_6;
 VAR_11->modes = VAR_4;
 VAR_11->num_channels = VAR_12->chip_info->num_channels;

 VAR_14 = FUNC_1(VAR_11);
 if (VAR_14) {
  FUNC_2(VAR_7, "Failed to allocate channel spec: %d\n", VAR_14);
  return VAR_14;
 }

 if (VAR_12->chip_info->int_vref == 2500)
  VAR_13 |= VAR_0;

 VAR_12->vref_reg = FUNC_5(VAR_7, "vref");
 if (!FUNC_0(VAR_12->vref_reg)) {
  VAR_14 = FUNC_11(VAR_12->vref_reg);
  if (VAR_14) {
   FUNC_2(VAR_7, "Failed to enable vref regulators: %d\n",
    VAR_14);
   goto error_free_reg;
  }

  VAR_14 = FUNC_12(VAR_12->vref_reg);
  if (VAR_14 < 0)
   goto error_disable_reg;

  VAR_12->vref = VAR_14 / 1000;
 } else {
  VAR_12->vref = VAR_12->chip_info->int_vref;
  VAR_13 |= VAR_1;
 }

 VAR_14 = FUNC_9(VAR_12->regmap, VAR_2, VAR_13);
 if (VAR_14) {
  FUNC_2(VAR_7, "Failed to write to device: %d\n", VAR_14);
  goto error_disable_reg;
 }

 VAR_14 = FUNC_6(VAR_11);
 if (VAR_14) {
  FUNC_2(VAR_7, "Failed to register iio device: %d\n", VAR_14);
  goto error_disable_reg;
 }

 return 0;

error_disable_reg:
 if (!FUNC_0(VAR_12->vref_reg))
  FUNC_10(VAR_12->vref_reg);
error_free_reg:
 FUNC_8(VAR_11->channels);

 return VAR_14;
}
