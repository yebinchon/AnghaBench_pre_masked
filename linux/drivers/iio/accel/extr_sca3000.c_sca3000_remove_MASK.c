
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {scalar_t__ irq; } ;
struct sca3000_state {int dummy; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (scalar_t__,struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct sca3000_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct sca3000_state*) ;
 struct iio_dev* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_4(VAR_0);
 struct sca3000_state *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);


 FUNC_3(VAR_2);
 if (VAR_0->irq)
  FUNC_0(VAR_0->irq, VAR_1);

 return 0;
}
