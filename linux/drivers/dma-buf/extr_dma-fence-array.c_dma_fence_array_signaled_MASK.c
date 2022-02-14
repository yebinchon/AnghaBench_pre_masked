
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence_array {int num_pending; } ;
struct dma_fence {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct dma_fence_array* FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static bool FUNC_2(struct dma_fence *VAR_0)
{
 struct dma_fence_array *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_1->num_pending) <= 0;
}
