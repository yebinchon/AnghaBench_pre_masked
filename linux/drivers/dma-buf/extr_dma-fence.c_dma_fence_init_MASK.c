
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct dma_fence_ops {int get_timeline_name; int get_driver_name; } ;
struct dma_fence {unsigned long flags; scalar_t__ error; void* seqno; void* context; int * lock; int cb_list; struct dma_fence_ops const* ops; int refcount; } ;
typedef int spinlock_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dma_fence*) ;

void
FUNC_4(struct dma_fence *VAR_0, const struct dma_fence_ops *VAR_1,
        spinlock_t *VAR_2, u64 VAR_3, u64 VAR_4)
{
 FUNC_0(!VAR_2);
 FUNC_0(!VAR_1 || !VAR_1->get_driver_name || !VAR_1->get_timeline_name);

 FUNC_2(&VAR_0->refcount);
 VAR_0->ops = VAR_1;
 FUNC_1(&VAR_0->cb_list);
 VAR_0->lock = VAR_2;
 VAR_0->context = VAR_3;
 VAR_0->seqno = VAR_4;
 VAR_0->flags = 0UL;
 VAR_0->error = 0;

 FUNC_3(VAR_0);
}
