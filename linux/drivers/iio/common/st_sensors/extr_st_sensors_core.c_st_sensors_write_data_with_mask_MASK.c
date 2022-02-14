
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st_sensor_data {int regmap; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int) ;
 struct st_sensor_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int,int,int) ;

int FUNC_3(struct iio_dev *VAR_0,
        u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct st_sensor_data *VAR_4 = FUNC_1(VAR_0);

 return FUNC_2(VAR_4->regmap,
      VAR_1, VAR_2, VAR_3 << FUNC_0(VAR_2));
}
