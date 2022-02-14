
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct bmi160_data {int regmap; } ;


 int FUNC_0 (int ,int) ;
 struct bmi160_data* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;

__attribute__((used)) static int FUNC_3(struct iio_trigger *VAR_0,
          bool VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_2(VAR_0);
 struct bmi160_data *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_3->regmap, VAR_1);
}
