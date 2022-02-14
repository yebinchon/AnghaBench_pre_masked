
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syncobj_wait_entry {struct dma_fence* fence; int node; int point; } ;
struct drm_syncobj {int lock; int cb_list; int fence; } ;
struct dma_fence {int dummy; } ;


 scalar_t__ FUNC_0 (struct dma_fence**,int ) ;
 struct dma_fence* FUNC_1 (int ) ;
 struct dma_fence* FUNC_2 () ;
 int FUNC_3 (struct dma_fence*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct drm_syncobj *VAR_0,
           struct syncobj_wait_entry *VAR_1)
{
 struct dma_fence *VAR_2;

 if (VAR_1->fence)
  return;

 FUNC_6(&VAR_0->lock);




 VAR_2 = FUNC_1(FUNC_5(VAR_0->fence, 1));
 if (!VAR_2 || FUNC_0(&VAR_2, VAR_1->point)) {
  FUNC_3(VAR_2);
  FUNC_4(&VAR_1->node, &VAR_0->cb_list);
 } else if (!VAR_2) {
  VAR_1->fence = FUNC_2();
 } else {
  VAR_1->fence = VAR_2;
 }
 FUNC_7(&VAR_0->lock);
}
