
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int func; int * private; scalar_t__ flags; } ;
struct radeon_fence {size_t ring; scalar_t__ seq; int base; TYPE_2__ fence_wake; struct radeon_device* rdev; } ;
struct radeon_device {int fence_queue; TYPE_1__* fence_drv; int exclusive_lock; } ;
struct dma_fence {int dummy; } ;
struct TYPE_3__ {int delayed_irq; int last_seq; } ;


 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct dma_fence*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct radeon_device*,size_t) ;
 int VAR_0 ;
 int FUNC_6 (struct radeon_device*,size_t) ;
 int FUNC_7 (struct radeon_device*,size_t) ;
 scalar_t__ FUNC_8 (struct radeon_device*,size_t) ;
 int FUNC_9 (struct radeon_device*,size_t) ;
 struct radeon_fence* FUNC_10 (struct dma_fence*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static bool FUNC_13(struct dma_fence *VAR_1)
{
 struct radeon_fence *VAR_2 = FUNC_10(VAR_1);
 struct radeon_device *VAR_3 = VAR_2->rdev;

 if (FUNC_2(&VAR_3->fence_drv[VAR_2->ring].last_seq) >= VAR_2->seq)
  return 0;

 if (FUNC_4(&VAR_3->exclusive_lock)) {
  FUNC_7(VAR_3, VAR_2->ring);

  if (FUNC_5(VAR_3, VAR_2->ring))
   FUNC_12(&VAR_3->fence_queue);


  if (FUNC_2(&VAR_3->fence_drv[VAR_2->ring].last_seq) >= VAR_2->seq) {
   FUNC_9(VAR_3, VAR_2->ring);
   FUNC_11(&VAR_3->exclusive_lock);
   return 0;
  }

  FUNC_11(&VAR_3->exclusive_lock);
 } else {

  if (FUNC_8(VAR_3, VAR_2->ring))
   VAR_3->fence_drv[VAR_2->ring].delayed_irq = 1;
  FUNC_6(VAR_3, VAR_2->ring);
 }

 VAR_2->fence_wake.flags = 0;
 VAR_2->fence_wake.private = ((void*)0);
 VAR_2->fence_wake.func = VAR_0;
 FUNC_1(&VAR_3->fence_queue, &VAR_2->fence_wake);
 FUNC_3(VAR_1);

 FUNC_0(&VAR_2->base, "armed on ring %i!\n", VAR_2->ring);
 return 1;
}
