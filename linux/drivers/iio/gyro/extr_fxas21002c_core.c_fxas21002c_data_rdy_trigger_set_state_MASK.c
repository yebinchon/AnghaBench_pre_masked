
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct fxas21002c_data {int * regmap_fields; } ;


 size_t VAR_0 ;
 struct fxas21002c_data* FUNC_0 (struct iio_dev*) ;
 struct iio_dev* FUNC_1 (struct iio_trigger*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct iio_trigger *VAR_1,
       bool VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_1(VAR_1);
 struct fxas21002c_data *VAR_4 = FUNC_0(VAR_3);

 return FUNC_2(VAR_4->regmap_fields[VAR_0], VAR_2);
}
