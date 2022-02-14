
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (struct spi_device*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct spi_device*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);

 return FUNC_0(VAR_0);
}
