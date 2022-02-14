
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_fence_chan {int notify; int notify_ref; } ;
struct TYPE_2__ {int flags; } ;
struct nouveau_fence {TYPE_1__ base; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 struct nouveau_fence* FUNC_0 (struct dma_fence*) ;
 struct nouveau_fence_chan* FUNC_1 (struct nouveau_fence*) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static bool FUNC_6(struct dma_fence *VAR_1)
{
 struct nouveau_fence *VAR_2 = FUNC_0(VAR_1);
 struct nouveau_fence_chan *VAR_3 = FUNC_1(VAR_2);
 bool VAR_4;

 if (!VAR_3->notify_ref++)
  FUNC_3(&VAR_3->notify);

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4)
  FUNC_5(VAR_0, &VAR_2->base.flags);
 else if (!--VAR_3->notify_ref)
  FUNC_4(&VAR_3->notify);

 return VAR_4;
}
