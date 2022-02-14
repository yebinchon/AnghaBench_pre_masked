
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct mtk_hsdma_vchan {TYPE_1__ vc; } ;
struct mtk_hsdma_device {int dummy; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct mtk_hsdma_device*,struct mtk_hsdma_vchan*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct mtk_hsdma_device* FUNC_3 (struct dma_chan*) ;
 struct mtk_hsdma_vchan* FUNC_4 (struct dma_chan*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct dma_chan *VAR_0)
{
 struct mtk_hsdma_device *VAR_1 = FUNC_3(VAR_0);
 struct mtk_hsdma_vchan *VAR_2 = FUNC_4(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->vc.lock, VAR_3);

 if (FUNC_5(&VAR_2->vc))
  FUNC_0(VAR_1, VAR_2);

 FUNC_2(&VAR_2->vc.lock, VAR_3);
}
