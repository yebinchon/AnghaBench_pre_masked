
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dma_channel {int lock; scalar_t__ cyclic; int busy; int pending_sg_req; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tegra_dma_channel*) ;
 int FUNC_5 (struct tegra_dma_channel*) ;
 int FUNC_6 (struct tegra_dma_channel*) ;
 struct tegra_dma_channel* FUNC_7 (struct dma_chan*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct dma_chan *VAR_1)
{
 struct tegra_dma_channel *VAR_2 = FUNC_7(VAR_1);
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock, VAR_3);
 if (FUNC_1(&VAR_2->pending_sg_req)) {
  FUNC_0(FUNC_4(VAR_2), "No DMA request\n");
  goto end;
 }
 if (!VAR_2->busy) {
  FUNC_6(VAR_2);


  if (VAR_2->cyclic) {




   FUNC_8(VAR_0);
   FUNC_5(VAR_2);
  }
 }
end:
 FUNC_3(&VAR_2->lock, VAR_3);
}
