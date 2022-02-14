
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct owl_dma_vchan {TYPE_2__ vc; TYPE_1__* txd; scalar_t__ pchan; } ;
struct owl_dma {int dummy; } ;
struct dma_chan {int device; } ;
struct TYPE_4__ {int vd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct owl_dma*,struct owl_dma_vchan*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct owl_dma* FUNC_5 (int ) ;
 struct owl_dma_vchan* FUNC_6 (struct dma_chan*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_9(struct dma_chan *VAR_1)
{
 struct owl_dma *VAR_2 = FUNC_5(VAR_1->device);
 struct owl_dma_vchan *VAR_3 = FUNC_6(VAR_1);
 unsigned long VAR_4;
 FUNC_0(VAR_0);

 FUNC_3(&VAR_3->vc.lock, VAR_4);

 if (VAR_3->pchan)
  FUNC_2(VAR_2, VAR_3);

 if (VAR_3->txd) {
  FUNC_1(&VAR_3->txd->vd);
  VAR_3->txd = ((void*)0);
 }

 FUNC_8(&VAR_3->vc, &VAR_0);
 FUNC_7(&VAR_3->vc, &VAR_0);

 FUNC_4(&VAR_3->vc.lock, VAR_4);

 return 0;
}
