
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence_array {unsigned int num_fences; int * fences; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct dma_fence_array* FUNC_3 (struct dma_fence*) ;

__attribute__((used)) static void FUNC_4(struct dma_fence *VAR_0)
{
 struct dma_fence_array *VAR_1 = FUNC_3(VAR_0);
 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_fences; ++VAR_2)
  FUNC_1(VAR_1->fences[VAR_2]);

 FUNC_2(VAR_1->fences);
 FUNC_0(VAR_0);
}
