
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct virt_dma_desc {int tx; } ;
struct TYPE_3__ {int lock; } ;
struct mtk_chan {scalar_t__ dir; TYPE_1__ vc; int desc; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mtk_chan*) ;
 int FUNC_1 (struct mtk_chan*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct mtk_chan* FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 struct virt_dma_desc* FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(struct dma_chan *VAR_2)
{
 struct mtk_chan *VAR_3 = FUNC_4(VAR_2);
 struct virt_dma_desc *VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_3->vc.lock, VAR_5);
 if (FUNC_6(&VAR_3->vc)) {
  VAR_4 = FUNC_7(&VAR_3->vc);
  VAR_3->desc = FUNC_5(&VAR_4->tx);

  if (VAR_3->dir == VAR_0)
   FUNC_0(VAR_3);
  else if (VAR_3->dir == VAR_1)
   FUNC_1(VAR_3);
 }

 FUNC_3(&VAR_3->vc.lock, VAR_5);
}
