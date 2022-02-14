
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct ltc1660_priv {int vref_reg; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (struct iio_dev*) ;
 struct ltc1660_priv* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 struct iio_dev* FUNC_3 (struct spi_device*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_3(VAR_0);
 struct ltc1660_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1);
 FUNC_2(VAR_2->vref_reg);

 return 0;
}
