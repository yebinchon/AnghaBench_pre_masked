
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {scalar_t__ driver_data; } ;
struct spi_device {int dummy; } ;
struct max1118 {int reg; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (struct iio_dev*) ;
 struct max1118* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 struct spi_device_id* FUNC_4 (struct spi_device*) ;
 struct iio_dev* FUNC_5 (struct spi_device*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_5(VAR_1);
 struct max1118 *VAR_3 = FUNC_1(VAR_2);
 const struct spi_device_id *VAR_4 = FUNC_4(VAR_1);

 FUNC_0(VAR_2);
 FUNC_2(VAR_2);
 if (VAR_4->driver_data == VAR_0)
  return FUNC_3(VAR_3->reg);

 return 0;
}
