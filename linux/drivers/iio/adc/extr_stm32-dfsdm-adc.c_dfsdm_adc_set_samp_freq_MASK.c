
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dfsdm_adc {unsigned int sample_freq; unsigned int oversamp; } ;
struct iio_dev {int dev; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int) ;
 struct stm32_dfsdm_adc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_0,
       unsigned int VAR_1,
       unsigned int VAR_2)
{
 struct stm32_dfsdm_adc *VAR_3 = FUNC_2(VAR_0);
 unsigned int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_2 % VAR_1)
  FUNC_1(&VAR_0->dev,
   "Rate not accurate. requested (%u), actual (%u)\n",
   VAR_1, VAR_2 / VAR_4);

 VAR_5 = FUNC_3(VAR_0, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->sample_freq = VAR_2 / VAR_4;
 VAR_3->oversamp = VAR_4;

 return 0;
}
