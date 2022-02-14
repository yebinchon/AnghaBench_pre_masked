
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dfsdm_channel {int src; } ;
struct stm32_dfsdm_adc {int oversamp; unsigned int spi_freq; TYPE_1__* dfsdm; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct TYPE_2__ {unsigned int spi_master_freq; struct stm32_dfsdm_channel* ch_list; } ;





 int VAR_0 ;


 int FUNC_0 (struct iio_dev*,int,unsigned int) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct stm32_dfsdm_adc* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
     struct iio_chan_spec const *VAR_2,
     int VAR_3, int VAR_4, long VAR_5)
{
 struct stm32_dfsdm_adc *VAR_6 = FUNC_3(VAR_1);
 struct stm32_dfsdm_channel *VAR_7 = &VAR_6->dfsdm->ch_list[VAR_2->channel];
 unsigned int VAR_8;
 int VAR_9 = -VAR_0;

 switch (VAR_5) {
 case 129:
  VAR_9 = FUNC_1(VAR_1);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_4(VAR_1, VAR_3);
  if (!VAR_9)
   VAR_6->oversamp = VAR_3;
  FUNC_2(VAR_1);
  return VAR_9;

 case 128:
  if (!VAR_3)
   return -VAR_0;

  VAR_9 = FUNC_1(VAR_1);
  if (VAR_9)
   return VAR_9;

  switch (VAR_7->src) {
  case 132:
   VAR_8 = VAR_6->dfsdm->spi_master_freq;
   break;
  case 131:
  case 130:
   VAR_8 = VAR_6->dfsdm->spi_master_freq / 2;
   break;
  default:
   VAR_8 = VAR_6->spi_freq;
  }

  VAR_9 = FUNC_0(VAR_1, VAR_3, VAR_8);
  FUNC_2(VAR_1);
  return VAR_9;
 }

 return -VAR_0;
}
