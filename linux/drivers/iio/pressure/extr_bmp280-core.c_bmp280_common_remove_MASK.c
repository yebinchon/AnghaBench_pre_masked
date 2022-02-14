
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct bmp280_data {int vddd; int vdda; int dev; } ;


 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct bmp280_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct bmp280_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);
 FUNC_4(VAR_2->dev);
 FUNC_5(VAR_2->dev);
 FUNC_3(VAR_2->dev);
 FUNC_6(VAR_2->vdda);
 FUNC_6(VAR_2->vddd);
 return 0;
}
