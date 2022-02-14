
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isl29018_chip {int type; int calibscale; size_t int_time; int suspended; int regmap; int vcc_reg; int scale; scalar_t__ ucalibscale; int lock; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {char const* name; int modes; TYPE_1__ dev; int num_channels; int channels; int info; } ;
struct i2c_device_id {char* name; int driver_data; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int num_channels; int channels; int indio_info; int regmap_cfg; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int ,struct isl29018_chip*) ;
 struct iio_dev* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,struct iio_dev*) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct i2c_client*,struct iio_dev*) ;
 struct isl29018_chip* FUNC_10 (struct iio_dev*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_11 (struct isl29018_chip*) ;
 int VAR_5 ;
 char* FUNC_12 (int *,int*) ;
 int ** VAR_6 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_7,
     const struct i2c_device_id *VAR_8)
{
 struct isl29018_chip *VAR_9;
 struct iio_dev *VAR_10;
 int VAR_11;
 const char *VAR_12 = ((void*)0);
 int VAR_13 = 0;

 VAR_10 = FUNC_5(&VAR_7->dev, sizeof(*VAR_9));
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_10(VAR_10);

 FUNC_9(VAR_7, VAR_10);

 if (VAR_8) {
  VAR_12 = VAR_8->name;
  VAR_13 = VAR_8->driver_data;
 }

 if (FUNC_0(&VAR_7->dev))
  VAR_12 = FUNC_12(&VAR_7->dev, &VAR_13);

 FUNC_13(&VAR_9->lock);

 VAR_9->type = VAR_13;
 VAR_9->calibscale = 1;
 VAR_9->ucalibscale = 0;
 VAR_9->int_time = VAR_3;
 VAR_9->scale = VAR_6[VAR_9->int_time][0];
 VAR_9->suspended = 0;

 VAR_9->vcc_reg = FUNC_8(&VAR_7->dev, "vcc");
 if (FUNC_1(VAR_9->vcc_reg)) {
  VAR_11 = FUNC_2(VAR_9->vcc_reg);
  if (VAR_11 != -VAR_1)
   FUNC_3(&VAR_7->dev, "failed to get VCC regulator!\n");
  return VAR_11;
 }

 VAR_11 = FUNC_14(VAR_9->vcc_reg);
 if (VAR_11) {
  FUNC_3(&VAR_7->dev, "failed to enable VCC regulator!\n");
  return VAR_11;
 }

 VAR_11 = FUNC_4(&VAR_7->dev, VAR_5,
     VAR_9);
 if (VAR_11) {
  FUNC_3(&VAR_7->dev, "failed to setup regulator cleanup action!\n");
  return VAR_11;
 }

 VAR_9->regmap = FUNC_7(VAR_7,
    VAR_4[VAR_13].regmap_cfg);
 if (FUNC_1(VAR_9->regmap)) {
  VAR_11 = FUNC_2(VAR_9->regmap);
  FUNC_3(&VAR_7->dev, "regmap initialization fails: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_11(VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_10->info = VAR_4[VAR_13].indio_info;
 VAR_10->channels = VAR_4[VAR_13].channels;
 VAR_10->num_channels = VAR_4[VAR_13].num_channels;
 VAR_10->name = VAR_12;
 VAR_10->dev.parent = &VAR_7->dev;
 VAR_10->modes = VAR_2;

 return FUNC_6(&VAR_7->dev, VAR_10);
}
