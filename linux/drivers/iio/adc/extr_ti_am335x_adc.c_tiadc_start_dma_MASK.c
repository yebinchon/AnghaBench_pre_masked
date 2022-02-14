
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int src_maxburst; } ;
struct tiadc_dma {int fifo_thresh; int period_size; int chan; int cookie; int addr; TYPE_1__ conf; scalar_t__ current_period; } ;
struct tiadc_device {int total_ch_enabled; struct tiadc_dma dma; } ;
struct iio_dev {int dummy; } ;
struct dma_async_tx_descriptor {struct iio_dev* callback_param; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 struct dma_async_tx_descriptor* FUNC_1 (int ,int ,int,int,int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 struct tiadc_device* FUNC_4 (struct iio_dev*) ;
 void* FUNC_5 (int,int) ;
 int VAR_9 ;
 int FUNC_6 (struct tiadc_device*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_10)
{
 struct tiadc_device *VAR_11 = FUNC_4(VAR_10);
 struct tiadc_dma *VAR_12 = &VAR_11->dma;
 struct dma_async_tx_descriptor *VAR_13;

 VAR_12->current_period = 0;







 VAR_12->fifo_thresh = FUNC_5(VAR_5 + 1,
         VAR_11->total_ch_enabled) - 1;

 VAR_12->period_size = FUNC_5(VAR_0 / 2,
        (VAR_12->fifo_thresh + 1) * sizeof(u16));

 VAR_12->conf.src_maxburst = VAR_12->fifo_thresh + 1;
 FUNC_2(VAR_12->chan, &VAR_12->conf);

 VAR_13 = FUNC_1(VAR_12->chan, VAR_12->addr,
      VAR_12->period_size * 2,
      VAR_12->period_size, VAR_1,
      VAR_3);
 if (!VAR_13)
  return -VAR_4;

 VAR_13->callback = VAR_9;
 VAR_13->callback_param = VAR_10;

 VAR_12->cookie = FUNC_3(VAR_13);

 FUNC_0(VAR_12->chan);

 FUNC_6(VAR_11, VAR_8, VAR_12->fifo_thresh);
 FUNC_6(VAR_11, VAR_6, VAR_12->fifo_thresh);
 FUNC_6(VAR_11, VAR_7, VAR_2);

 return 0;
}
