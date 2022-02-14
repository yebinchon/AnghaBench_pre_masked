
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tpl0102_data {TYPE_2__* cfg; int regmap; } ;
struct TYPE_3__ {struct device* parent; } ;
struct iio_dev {int name; int num_channels; int channels; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {size_t driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct TYPE_4__ {int wipers; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct iio_dev* FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*,struct iio_dev*) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct iio_dev*) ;
 struct tpl0102_data* FUNC_7 (struct iio_dev*) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct tpl0102_data *VAR_8;
 struct iio_dev *VAR_9;

 VAR_9 = FUNC_3(VAR_7, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_0;
 VAR_8 = FUNC_7(VAR_9);
 FUNC_6(VAR_5, VAR_9);

 VAR_8->cfg = &VAR_1[VAR_6->driver_data];
 VAR_8->regmap = FUNC_5(VAR_5, &VAR_4);
 if (FUNC_0(VAR_8->regmap)) {
  FUNC_2(VAR_7, "regmap initialization failed\n");
  return FUNC_1(VAR_8->regmap);
 }

 VAR_9->dev.parent = VAR_7;
 VAR_9->info = &VAR_3;
 VAR_9->channels = VAR_2;
 VAR_9->num_channels = VAR_8->cfg->wipers;
 VAR_9->name = VAR_5->name;

 return FUNC_4(VAR_7, VAR_9);
}
