
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct iio_dev {char const* name; int num_channels; int available_scan_masks; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct hmc5843_data {TYPE_2__* variant; int orientation; int lock; struct regmap* regmap; struct device* dev; } ;
struct device {int dummy; } ;
typedef enum hmc5843_ids { ____Placeholder_hmc5843_ids } hmc5843_ids ;
struct TYPE_4__ {int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct iio_dev*) ;
 struct iio_dev* FUNC_1 (struct device*,int) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct hmc5843_data*) ;
 int VAR_5 ;
 int FUNC_3 (struct hmc5843_data*,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct iio_dev*) ;
 struct hmc5843_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct device*,char*,int *) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*,int *,int ,int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct device *VAR_7, struct regmap *VAR_8,
    enum hmc5843_ids VAR_9, const char *VAR_10)
{
 struct hmc5843_data *VAR_11;
 struct iio_dev *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_1(VAR_7, sizeof(*VAR_11));
 if (!VAR_12)
  return -VAR_0;

 FUNC_0(VAR_7, VAR_12);


 VAR_11 = FUNC_5(VAR_12);
 VAR_11->dev = VAR_7;
 VAR_11->regmap = VAR_8;
 VAR_11->variant = &VAR_3[VAR_9];
 FUNC_9(&VAR_11->lock);

 VAR_13 = FUNC_6(VAR_7, "mount-matrix",
    &VAR_11->orientation);
 if (VAR_13)
  return VAR_13;

 VAR_12->dev.parent = VAR_7;
 VAR_12->name = VAR_10;
 VAR_12->info = &VAR_4;
 VAR_12->modes = VAR_2;
 VAR_12->channels = VAR_11->variant->channels;
 VAR_12->num_channels = 4;
 VAR_12->available_scan_masks = VAR_5;

 VAR_13 = FUNC_2(VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_8(VAR_12, ((void*)0),
      VAR_6, ((void*)0));
 if (VAR_13 < 0)
  goto buffer_setup_err;

 VAR_13 = FUNC_4(VAR_12);
 if (VAR_13 < 0)
  goto buffer_cleanup;

 return 0;

buffer_cleanup:
 FUNC_7(VAR_12);
buffer_setup_err:
 FUNC_3(FUNC_5(VAR_12), VAR_1);
 return VAR_13;
}
