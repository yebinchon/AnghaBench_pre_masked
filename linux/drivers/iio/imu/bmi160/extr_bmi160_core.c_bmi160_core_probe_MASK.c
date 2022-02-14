
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct iio_dev {char const* name; TYPE_1__ dev; int * info; int modes; int num_channels; int channels; } ;
struct device {int of_node; } ;
struct bmi160_data {struct regmap* regmap; } ;
typedef enum bmi160_int_pin { ____Placeholder_bmi160_int_pin } bmi160_int_pin ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bmi160_data*,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int*) ;
 int VAR_4 ;
 char* FUNC_4 (struct device*) ;
 int FUNC_5 (struct iio_dev*,int,int) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (struct device*,struct iio_dev*) ;
 int FUNC_9 (struct device*,int ,struct bmi160_data*) ;
 struct iio_dev* FUNC_10 (struct device*,int) ;
 int FUNC_11 (struct device*,struct iio_dev*) ;
 int FUNC_12 (struct device*,struct iio_dev*,int ,int ,int *) ;
 int VAR_6 ;
 struct bmi160_data* FUNC_13 (struct iio_dev*) ;

int FUNC_14(struct device *VAR_7, struct regmap *VAR_8,
        const char *VAR_9, bool VAR_10)
{
 struct iio_dev *VAR_11;
 struct bmi160_data *VAR_12;
 int VAR_13;
 enum bmi160_int_pin VAR_14;
 int VAR_15;

 VAR_11 = FUNC_10(VAR_7, sizeof(*VAR_12));
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_13(VAR_11);
 FUNC_8(VAR_7, VAR_11);
 VAR_12->regmap = VAR_8;

 VAR_15 = FUNC_2(VAR_12, VAR_10);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_9(VAR_7, VAR_3, VAR_12);
 if (VAR_15)
  return VAR_15;

 if (!VAR_9 && FUNC_0(VAR_7))
  VAR_9 = FUNC_4(VAR_7);

 VAR_11->dev.parent = VAR_7;
 VAR_11->channels = VAR_2;
 VAR_11->num_channels = FUNC_1(VAR_2);
 VAR_11->name = VAR_9;
 VAR_11->modes = VAR_1;
 VAR_11->info = &VAR_4;

 VAR_15 = FUNC_12(VAR_7, VAR_11,
           VAR_6,
           VAR_5, ((void*)0));
 if (VAR_15)
  return VAR_15;

 VAR_13 = FUNC_3(VAR_7->of_node, &VAR_14);
 if (VAR_13 > 0) {
  VAR_15 = FUNC_5(VAR_11, VAR_13, VAR_14);
  if (VAR_15)
   FUNC_6(&VAR_11->dev, "Failed to setup IRQ %d\n",
    VAR_13);
 } else {
  FUNC_7(&VAR_11->dev, "Not setting up IRQ trigger\n");
 }

 return FUNC_11(VAR_7, VAR_11);
}
