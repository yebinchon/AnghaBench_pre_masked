
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct mtk_chan {scalar_t__ dir; TYPE_1__ vc; } ;
struct dma_chan {int dummy; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtk_chan*) ;
 int FUNC_1 (struct mtk_chan*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct mtk_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct dma_chan *VAR_5 = (struct dma_chan *)VAR_4;
 struct mtk_chan *VAR_6 = FUNC_4(VAR_5);
 unsigned long VAR_7;

 FUNC_2(&VAR_6->vc.lock, VAR_7);
 if (VAR_6->dir == VAR_0)
  FUNC_0(VAR_6);
 else if (VAR_6->dir == VAR_1)
  FUNC_1(VAR_6);
 FUNC_3(&VAR_6->vc.lock, VAR_7);

 return VAR_2;
}
