
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dmamux_data {int lock; int dma_inuse; int iomem; } ;
struct stm32_dmamux {int chan_id; int master; int request; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct device*,char*,int ,int ,int ) ;
 struct stm32_dmamux_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct stm32_dmamux*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_0, void *VAR_1)
{
 struct stm32_dmamux_data *VAR_2 = FUNC_3(VAR_0);
 struct stm32_dmamux *VAR_3 = VAR_1;
 unsigned long VAR_4;


 FUNC_6(&VAR_2->lock, VAR_4);

 FUNC_8(VAR_2->iomem, FUNC_0(VAR_3->chan_id), 0);
 FUNC_1(VAR_3->chan_id, VAR_2->dma_inuse);

 FUNC_5(VAR_0);

 FUNC_7(&VAR_2->lock, VAR_4);

 FUNC_2(VAR_0, "Unmapping DMAMUX(%u) to DMA%u(%u)\n",
  VAR_3->request, VAR_3->master, VAR_3->chan_id);

 FUNC_4(VAR_3);
}
