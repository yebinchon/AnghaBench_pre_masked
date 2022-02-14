
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct mma7455_data {struct regmap* regmap; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {char const* name; int available_scan_masks; int num_channels; int channels; int modes; TYPE_1__ dev; int * info; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct iio_dev*) ;
 struct mma7455_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*,int *,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (struct regmap*,int ,unsigned int*) ;
 int FUNC_9 (struct regmap*,int ,int ) ;

int FUNC_10(struct device *VAR_11, struct regmap *VAR_12,
         const char *VAR_13)
{
 struct mma7455_data *VAR_14;
 struct iio_dev *VAR_15;
 unsigned int VAR_16;
 int VAR_17;

 VAR_17 = FUNC_8(VAR_12, VAR_5, &VAR_16);
 if (VAR_17) {
  FUNC_1(VAR_11, "unable to read reg\n");
  return VAR_17;
 }

 if (VAR_16 != VAR_6) {
  FUNC_1(VAR_11, "device id mismatch\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_3(VAR_11, sizeof(*VAR_14));
 if (!VAR_15)
  return -VAR_1;

 FUNC_2(VAR_11, VAR_15);
 VAR_14 = FUNC_5(VAR_15);
 VAR_14->regmap = VAR_12;

 VAR_15->info = &VAR_8;
 VAR_15->name = VAR_13;
 VAR_15->dev.parent = VAR_11;
 VAR_15->modes = VAR_2;
 VAR_15->channels = VAR_7;
 VAR_15->num_channels = FUNC_0(VAR_7);
 VAR_15->available_scan_masks = VAR_9;

 FUNC_9(VAR_14->regmap, VAR_4,
       VAR_3);

 VAR_17 = FUNC_7(VAR_15, ((void*)0),
      VAR_10, ((void*)0));
 if (VAR_17) {
  FUNC_1(VAR_11, "unable to setup triggered buffer\n");
  return VAR_17;
 }

 VAR_17 = FUNC_4(VAR_15);
 if (VAR_17) {
  FUNC_1(VAR_11, "unable to register device\n");
  FUNC_6(VAR_15);
  return VAR_17;
 }

 return 0;
}
