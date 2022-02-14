
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_fence {int base; } ;
struct TYPE_3__ {struct dma_resv* resv; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct nouveau_bo {TYPE_2__ bo; } ;
struct dma_resv {int dummy; } ;


 int FUNC_0 (struct dma_resv*,int *) ;
 int FUNC_1 (struct dma_resv*,int *) ;

void
FUNC_2(struct nouveau_bo *VAR_0, struct nouveau_fence *VAR_1, bool VAR_2)
{
 struct dma_resv *VAR_3 = VAR_0->bo.base.resv;

 if (VAR_2)
  FUNC_0(VAR_3, &VAR_1->base);
 else if (VAR_1)
  FUNC_1(VAR_3, &VAR_1->base);
}
