
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxc4005_data {int trigger_enabled; int mutex; int dev; int regmap; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct mxc4005_data* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct iio_trigger *VAR_2,
         bool VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_2(VAR_2);
 struct mxc4005_data *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 FUNC_3(&VAR_5->mutex);
 if (VAR_3) {
  VAR_6 = FUNC_5(VAR_5->regmap, VAR_0,
       VAR_1);
 } else {
  VAR_6 = FUNC_5(VAR_5->regmap, VAR_0,
       ~VAR_1);
 }

 if (VAR_6 < 0) {
  FUNC_4(&VAR_5->mutex);
  FUNC_0(VAR_5->dev, "failed to update reg_int_mask1");
  return VAR_6;
 }

 VAR_5->trigger_enabled = VAR_3;
 FUNC_4(&VAR_5->mutex);

 return 0;
}
