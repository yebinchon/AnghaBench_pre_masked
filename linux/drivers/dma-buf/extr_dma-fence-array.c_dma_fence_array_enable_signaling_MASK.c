
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_fence_array_cb {int cb; struct dma_fence_array* array; } ;
struct dma_fence_array {unsigned int num_fences; int num_pending; int base; TYPE_1__** fences; } ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {int error; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct dma_fence_array*) ;
 int FUNC_3 (struct dma_fence_array*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct dma_fence_array* FUNC_6 (struct dma_fence*) ;

__attribute__((used)) static bool FUNC_7(struct dma_fence *VAR_1)
{
 struct dma_fence_array *VAR_2 = FUNC_6(VAR_1);
 struct dma_fence_array_cb *VAR_3 = (void *)(&VAR_2[1]);
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_fences; ++VAR_4) {
  VAR_3[VAR_4].array = VAR_2;
  FUNC_4(&VAR_2->base);
  if (FUNC_1(VAR_2->fences[VAR_4], &VAR_3[VAR_4].cb,
        VAR_0)) {
   int VAR_5 = VAR_2->fences[VAR_4]->error;

   FUNC_3(VAR_2, VAR_5);
   FUNC_5(&VAR_2->base);
   if (FUNC_0(&VAR_2->num_pending)) {
    FUNC_2(VAR_2);
    return 0;
   }
  }
 }

 return 1;
}
