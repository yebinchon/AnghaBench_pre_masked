
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct iio_dev {int dummy; } ;
struct TYPE_6__ {TYPE_3__* dma_chan; int rx_dma_buf; int rx_buf; } ;
struct at91_adc_state {TYPE_2__ dma_st; } ;
struct TYPE_7__ {TYPE_1__* device; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int,unsigned int) ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,unsigned int,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 struct at91_adc_state* FUNC_5 (struct iio_dev*) ;
 struct iio_dev* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static void FUNC_7(struct platform_device *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_6(VAR_3);
 struct at91_adc_state *VAR_5 = FUNC_5(VAR_4);
 unsigned int VAR_6 = FUNC_0(VAR_1 *
       VAR_0 * 2,
       VAR_2);


 if (!VAR_5->dma_st.dma_chan)
  return;


 FUNC_4(VAR_5->dma_st.dma_chan);

 FUNC_2(VAR_5->dma_st.dma_chan->device->dev, VAR_6 * VAR_2,
     VAR_5->dma_st.rx_buf, VAR_5->dma_st.rx_dma_buf);
 FUNC_3(VAR_5->dma_st.dma_chan);
 VAR_5->dma_st.dma_chan = 0;

 FUNC_1(&VAR_3->dev, "continuing without DMA support\n");
}
