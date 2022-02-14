
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct adc12138 {int cclk; int vref_p; int vref_n; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct adc12138* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ) ;
 struct iio_dev* FUNC_6 (struct spi_device*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_6(VAR_0);
 struct adc12138 *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_1);
 FUNC_4(VAR_1);
 if (!FUNC_0(VAR_2->vref_n))
  FUNC_5(VAR_2->vref_n);
 FUNC_5(VAR_2->vref_p);
 FUNC_1(VAR_2->cclk);

 return 0;
}
