
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (int *) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct spi_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_1(VAR_2);


 return FUNC_2(VAR_1, VAR_0);
}
