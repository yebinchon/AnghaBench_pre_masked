
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int * info; int num_channels; int channels; int name; TYPE_1__ dev; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int dev; } ;
struct dps310_data {int regmap; int lock; struct i2c_client* client; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,struct dps310_data*) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int VAR_14 ;
 int FUNC_7 (struct dps310_data*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (struct dps310_data*) ;
 int FUNC_9 (struct i2c_client*,struct iio_dev*) ;
 struct dps310_data* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int,int,int,int) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_18,
   const struct i2c_device_id *VAR_19)
{
 struct dps310_data *VAR_20;
 struct iio_dev *VAR_21;
 int VAR_22, VAR_23;

 VAR_21 = FUNC_4(&VAR_18->dev, sizeof(*VAR_20));
 if (!VAR_21)
  return -VAR_12;

 VAR_20 = FUNC_10(VAR_21);
 VAR_20->client = VAR_18;
 FUNC_11(&VAR_20->lock);

 VAR_21->dev.parent = &VAR_18->dev;
 VAR_21->name = VAR_19->name;
 VAR_21->channels = VAR_14;
 VAR_21->num_channels = FUNC_0(VAR_14);
 VAR_21->info = &VAR_15;
 VAR_21->modes = VAR_13;

 VAR_20->regmap = FUNC_6(VAR_18, &VAR_16);
 if (FUNC_1(VAR_20->regmap))
  return FUNC_2(VAR_20->regmap);


 VAR_22 = FUNC_3(&VAR_18->dev, VAR_17, VAR_20);
 if (VAR_22)
  return VAR_22;





 VAR_22 = FUNC_13(VAR_20->regmap, VAR_5, 0);





 VAR_22 = FUNC_13(VAR_20->regmap, VAR_9, VAR_10);
 if (VAR_22 < 0)
  return VAR_22;


 VAR_22 = FUNC_14(VAR_20->regmap, VAR_1,
          VAR_7 | VAR_11, 0);
 if (VAR_22 < 0)
  return VAR_22;


 VAR_22 = FUNC_14(VAR_20->regmap, VAR_3,
          VAR_4, 0);
 if (VAR_22 < 0)
  return VAR_22;


 VAR_22 = FUNC_14(VAR_20->regmap, VAR_3,
          VAR_4, VAR_6 |
          VAR_8 | VAR_0);
 if (VAR_22 < 0)
  return VAR_22;





 VAR_22 = FUNC_12(VAR_20->regmap, VAR_3, VAR_23,
          VAR_23 & VAR_2, 10000, 40000);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_22 = FUNC_7(VAR_20);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_22 = FUNC_8(VAR_20);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_22 = FUNC_5(&VAR_18->dev, VAR_21);
 if (VAR_22)
  return VAR_22;

 FUNC_9(VAR_18, VAR_21);

 return 0;
}
