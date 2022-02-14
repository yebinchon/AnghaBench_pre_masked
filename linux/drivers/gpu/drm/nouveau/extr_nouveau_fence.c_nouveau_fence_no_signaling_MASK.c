
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refcount; } ;
struct nouveau_fence {TYPE_1__ base; int head; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 struct nouveau_fence* FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct dma_fence*) ;

__attribute__((used)) static bool FUNC_6(struct dma_fence *VAR_0)
{
 struct nouveau_fence *VAR_1 = FUNC_2(VAR_0);





 FUNC_0(FUNC_3(&VAR_1->base.refcount) <= 1);






 if (FUNC_5(VAR_0)) {
  FUNC_4(&VAR_1->head);

  FUNC_1(&VAR_1->base);
  return 0;
 }

 return 1;
}
