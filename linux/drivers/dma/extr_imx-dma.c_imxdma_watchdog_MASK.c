
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct imxdma_engine {int dev; } ;
struct imxdma_channel {int channel; int dma_tasklet; struct imxdma_engine* imxdma; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 struct imxdma_channel* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (struct imxdma_engine*,int ,int ) ;
 struct imxdma_channel* VAR_0 ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct imxdma_channel *VAR_3 = FUNC_2(VAR_3, VAR_2, VAR_1);
 struct imxdma_engine *VAR_4 = VAR_3->imxdma;
 int VAR_5 = VAR_3->channel;

 FUNC_3(VAR_4, 0, FUNC_0(VAR_5));


 FUNC_4(&VAR_3->dma_tasklet);
 FUNC_1(VAR_4->dev, "channel %d: watchdog timeout!\n",
  VAR_3->channel);
}
