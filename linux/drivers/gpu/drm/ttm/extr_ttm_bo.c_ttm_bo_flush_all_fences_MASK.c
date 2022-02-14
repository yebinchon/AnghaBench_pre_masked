
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int resv; int _resv; } ;
struct ttm_buffer_object {TYPE_2__ base; } ;
struct dma_resv_list {int shared_count; int * shared; } ;
struct dma_fence {TYPE_1__* ops; } ;
struct TYPE_3__ {int signaled; } ;


 int FUNC_0 (struct dma_fence*) ;
 struct dma_fence* FUNC_1 (int *) ;
 struct dma_resv_list* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct dma_fence* FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ttm_buffer_object *VAR_0)
{
 struct dma_resv_list *VAR_1;
 struct dma_fence *VAR_2;
 int VAR_3;

 VAR_1 = FUNC_2(&VAR_0->base._resv);
 VAR_2 = FUNC_1(&VAR_0->base._resv);
 if (VAR_2 && !VAR_2->ops->signaled)
  FUNC_0(VAR_2);

 for (VAR_3 = 0; VAR_1 && VAR_3 < VAR_1->shared_count; ++VAR_3) {
  VAR_2 = FUNC_4(VAR_1->shared[VAR_3],
     FUNC_3(VAR_0->base.resv));

  if (!VAR_2->ops->signaled)
   FUNC_0(VAR_2);
 }
}
