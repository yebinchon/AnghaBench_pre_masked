
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dfsdm_channel {scalar_t__ src; } ;
struct stm32_dfsdm_adc {TYPE_1__* dfsdm; int spi_freq; } ;
struct iio_dev {int num_channels; struct iio_chan_spec* channels; int dev; } ;
struct iio_chan_spec {size_t channel; int info_mask_separate; scalar_t__ scan_index; } ;
struct TYPE_2__ {int spi_master_freq; struct stm32_dfsdm_channel* ch_list; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 struct iio_chan_spec* FUNC_2 (int *,int,int ) ;
 struct stm32_dfsdm_adc* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,struct iio_chan_spec*) ;
 int FUNC_5 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_4)
{
 struct iio_chan_spec *VAR_5;
 struct stm32_dfsdm_adc *VAR_6 = FUNC_3(VAR_4);
 struct stm32_dfsdm_channel *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_2(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->scan_index = 0;

 VAR_8 = FUNC_4(VAR_4, VAR_5);
 if (VAR_8 < 0) {
  FUNC_1(&VAR_4->dev, "Channels init failed\n");
  return VAR_8;
 }
 VAR_5->info_mask_separate = FUNC_0(VAR_3);

 VAR_7 = &VAR_6->dfsdm->ch_list[VAR_5->channel];
 if (VAR_7->src != VAR_0)
  VAR_6->spi_freq = VAR_6->dfsdm->spi_master_freq;

 VAR_4->num_channels = 1;
 VAR_4->channels = VAR_5;

 return FUNC_5(VAR_4);
}
