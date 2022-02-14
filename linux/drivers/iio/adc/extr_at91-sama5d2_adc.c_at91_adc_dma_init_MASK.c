
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct iio_dev {int dummy; } ;
struct dma_slave_config {int src_maxburst; int dst_maxburst; int src_addr_width; scalar_t__ src_addr; int direction; int member_0; } ;
struct TYPE_8__ {TYPE_3__* dma_chan; int rx_dma_buf; int rx_buf; scalar_t__ phys_addr; } ;
struct at91_adc_state {TYPE_2__ dma_st; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_9__ {TYPE_1__* device; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (int,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,unsigned int,int *,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,unsigned int,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,struct dma_slave_config*) ;
 struct at91_adc_state* FUNC_8 (struct iio_dev*) ;
 struct iio_dev* FUNC_9 (struct platform_device*) ;

__attribute__((used)) static void FUNC_10(struct platform_device *VAR_7)
{
 struct iio_dev *VAR_8 = FUNC_9(VAR_7);
 struct at91_adc_state *VAR_9 = FUNC_8(VAR_8);
 struct dma_slave_config VAR_10 = {0};





 unsigned int VAR_11 = FUNC_0(VAR_1 *
       VAR_0 * 2,
       VAR_6);

 if (VAR_9->dma_st.dma_chan)
  return;

 VAR_9->dma_st.dma_chan = FUNC_6(&VAR_7->dev, "rx");

 if (!VAR_9->dma_st.dma_chan) {
  FUNC_1(&VAR_7->dev, "can't get DMA channel\n");
  goto dma_exit;
 }

 VAR_9->dma_st.rx_buf = FUNC_2(VAR_9->dma_st.dma_chan->device->dev,
            VAR_11 * VAR_6,
            &VAR_9->dma_st.rx_dma_buf,
            VAR_5);
 if (!VAR_9->dma_st.rx_buf) {
  FUNC_1(&VAR_7->dev, "can't allocate coherent DMA area\n");
  goto dma_chan_disable;
 }


 VAR_10.direction = VAR_3;
 VAR_10.src_addr = (phys_addr_t)(VAR_9->dma_st.phys_addr
     + VAR_2);
 VAR_10.src_addr_width = VAR_4;
 VAR_10.src_maxburst = 1;
 VAR_10.dst_maxburst = 1;

 if (FUNC_7(VAR_9->dma_st.dma_chan, &VAR_10)) {
  FUNC_1(&VAR_7->dev, "can't configure DMA slave\n");
  goto dma_free_area;
 }

 FUNC_1(&VAR_7->dev, "using %s for rx DMA transfers\n",
   FUNC_3(VAR_9->dma_st.dma_chan));

 return;

dma_free_area:
 FUNC_4(VAR_9->dma_st.dma_chan->device->dev, VAR_11 * VAR_6,
     VAR_9->dma_st.rx_buf, VAR_9->dma_st.rx_dma_buf);
dma_chan_disable:
 FUNC_5(VAR_9->dma_st.dma_chan);
 VAR_9->dma_st.dma_chan = 0;
dma_exit:
 FUNC_1(&VAR_7->dev, "continuing without DMA support\n");
}
