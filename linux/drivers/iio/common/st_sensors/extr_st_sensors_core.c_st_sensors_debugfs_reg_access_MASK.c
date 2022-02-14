
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_sensor_data {int regmap; } ;
struct iio_dev {int dummy; } ;


 struct st_sensor_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,unsigned int,unsigned int*) ;
 int FUNC_2 (int ,unsigned int,unsigned int) ;

int FUNC_3(struct iio_dev *VAR_0,
      unsigned VAR_1, unsigned VAR_2,
      unsigned *VAR_3)
{
 struct st_sensor_data *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;

 if (!VAR_3)
  return FUNC_2(VAR_4->regmap, VAR_1, VAR_2);

 VAR_5 = FUNC_1(VAR_4->regmap, VAR_1, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
