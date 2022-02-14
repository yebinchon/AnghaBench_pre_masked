
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syncobj_wait_entry {int node; int task; struct dma_fence* fence; int point; } ;
struct drm_syncobj {int lock; int fence; } ;
struct dma_fence {int dummy; } ;


 scalar_t__ FUNC_0 (struct dma_fence**,int ) ;
 int FUNC_1 (struct dma_fence*) ;
 struct dma_fence* FUNC_2 () ;
 int FUNC_3 (struct dma_fence*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct dma_fence* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct drm_syncobj *VAR_0,
          struct syncobj_wait_entry *VAR_1)
{
 struct dma_fence *VAR_2;


 VAR_2 = FUNC_6(VAR_0->fence,
       FUNC_5(&VAR_0->lock));
 FUNC_1(VAR_2);
 if (!VAR_2 || FUNC_0(&VAR_2, VAR_1->point)) {
  FUNC_3(VAR_2);
  return;
 } else if (!VAR_2) {
  VAR_1->fence = FUNC_2();
 } else {
  VAR_1->fence = VAR_2;
 }

 FUNC_7(VAR_1->task);
 FUNC_4(&VAR_1->node);
}
