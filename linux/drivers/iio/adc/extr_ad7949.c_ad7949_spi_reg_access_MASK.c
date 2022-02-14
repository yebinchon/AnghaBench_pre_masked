
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad7949_adc_chip {unsigned int cfg; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct ad7949_adc_chip*,unsigned int,unsigned int) ;
 struct ad7949_adc_chip* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
   unsigned int VAR_2, unsigned int VAR_3,
   unsigned int *VAR_4)
{
 struct ad7949_adc_chip *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = 0;

 if (VAR_4)
  *VAR_4 = VAR_5->cfg;
 else
  VAR_6 = FUNC_0(VAR_5,
   VAR_3 & VAR_0, VAR_0);

 return VAR_6;
}
