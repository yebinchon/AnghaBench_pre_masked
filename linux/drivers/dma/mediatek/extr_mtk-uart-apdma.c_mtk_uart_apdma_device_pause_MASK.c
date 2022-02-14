
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct mtk_chan {TYPE_1__ vc; int irq; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtk_chan*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 struct mtk_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_4)
{
 struct mtk_chan *VAR_5 = FUNC_4(VAR_4);
 unsigned long VAR_6;

 FUNC_1(&VAR_5->vc.lock, VAR_6);

 FUNC_0(VAR_5, VAR_0, VAR_1);
 FUNC_0(VAR_5, VAR_2, VAR_3);

 FUNC_3(VAR_5->irq);

 FUNC_2(&VAR_5->vc.lock, VAR_6);

 return 0;
}
