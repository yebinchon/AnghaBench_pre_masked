
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dfsdm_adc {int spi_freq; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct stm32_dfsdm_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct iio_dev *VAR_1,
       uintptr_t VAR_2,
       const struct iio_chan_spec *VAR_3,
       char *VAR_4)
{
 struct stm32_dfsdm_adc *VAR_5 = FUNC_0(VAR_1);

 return FUNC_1(VAR_4, VAR_0, "%d\n", VAR_5->spi_freq);
}
