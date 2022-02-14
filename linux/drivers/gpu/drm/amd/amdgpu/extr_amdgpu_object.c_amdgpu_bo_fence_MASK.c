
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_resv {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_3__ {struct dma_resv* resv; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct amdgpu_bo {TYPE_2__ tbo; } ;


 int FUNC_0 (struct dma_resv*,struct dma_fence*) ;
 int FUNC_1 (struct dma_resv*,struct dma_fence*) ;

void FUNC_2(struct amdgpu_bo *VAR_0, struct dma_fence *VAR_1,
       bool VAR_2)
{
 struct dma_resv *VAR_3 = VAR_0->tbo.base.resv;

 if (VAR_2)
  FUNC_1(VAR_3, VAR_1);
 else
  FUNC_0(VAR_3, VAR_1);
}
