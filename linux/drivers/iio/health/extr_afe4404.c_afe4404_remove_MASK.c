
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct afe4404_data {scalar_t__ irq; int dev; int regulator; int trig; } ;


 int FUNC_0 (int ,char*) ;
 struct iio_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct afe4404_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_1(VAR_0);
 struct afe4404_data *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 FUNC_2(VAR_1);

 FUNC_5(VAR_1);

 if (VAR_2->irq > 0)
  FUNC_4(VAR_2->trig);

 VAR_3 = FUNC_6(VAR_2->regulator);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "Unable to disable regulator\n");
  return VAR_3;
 }

 return 0;
}
