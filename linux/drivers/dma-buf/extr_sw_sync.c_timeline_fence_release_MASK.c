
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_timeline {int pt_tree; } ;
struct sync_pt {int node; int link; } ;
struct dma_fence {int lock; } ;


 int FUNC_0 (struct dma_fence*) ;
 struct sync_timeline* FUNC_1 (struct dma_fence*) ;
 struct sync_pt* FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (struct sync_timeline*) ;

__attribute__((used)) static void FUNC_9(struct dma_fence *VAR_0)
{
 struct sync_pt *VAR_1 = FUNC_2(VAR_0);
 struct sync_timeline *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;

 FUNC_6(VAR_0->lock, VAR_3);
 if (!FUNC_4(&VAR_1->link)) {
  FUNC_3(&VAR_1->link);
  FUNC_5(&VAR_1->node, &VAR_2->pt_tree);
 }
 FUNC_7(VAR_0->lock, VAR_3);

 FUNC_8(VAR_2);
 FUNC_0(VAR_0);
}
