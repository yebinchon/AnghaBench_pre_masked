
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_dac_chip {int vref; int lock; } ;
struct spi_device {int dummy; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (struct iio_dev*) ;
 struct ti_dac_chip* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct iio_dev* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_4(VAR_0);
 struct ti_dac_chip *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1);
 FUNC_2(&VAR_2->lock);
 FUNC_3(VAR_2->vref);
 return 0;
}
