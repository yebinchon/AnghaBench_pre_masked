
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_request {int semaphore; int submit; } ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {int slab_requests; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct i915_request*) ;
 struct i915_request* FUNC_2 (struct dma_fence*) ;

__attribute__((used)) static void FUNC_3(struct dma_fence *VAR_1)
{
 struct i915_request *VAR_2 = FUNC_2(VAR_1);
 FUNC_0(&VAR_2->submit);
 FUNC_0(&VAR_2->semaphore);

 FUNC_1(VAR_0.slab_requests, VAR_2);
}
