
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct max5481_data {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (int *) ;
 int FUNC_1 (struct iio_dev*) ;
 struct max5481_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct max5481_data*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_0(&VAR_1->dev);
 struct max5481_data *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_2);


 return FUNC_3(VAR_3, VAR_0, 0);
}
