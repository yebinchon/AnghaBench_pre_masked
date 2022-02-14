
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma7455_data {int regmap; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct mma7455_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5(struct device *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_2);
 struct mma7455_data *VAR_4 = FUNC_2(VAR_3);

 FUNC_1(VAR_3);
 FUNC_3(VAR_3);

 FUNC_4(VAR_4->regmap, VAR_1,
       VAR_0);

 return 0;
}
