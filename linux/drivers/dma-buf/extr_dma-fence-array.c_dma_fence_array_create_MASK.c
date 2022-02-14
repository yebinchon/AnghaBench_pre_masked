
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct dma_fence_array_cb {int dummy; } ;
struct TYPE_2__ {int error; } ;
struct dma_fence_array {int num_fences; TYPE_1__ base; struct dma_fence** fences; int num_pending; int work; int lock; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int *,int ,unsigned int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 struct dma_fence_array* FUNC_3 (size_t,int ) ;
 int FUNC_4 (int *) ;

struct dma_fence_array *FUNC_5(int VAR_4,
            struct dma_fence **VAR_5,
            u64 VAR_6, unsigned VAR_7,
            bool VAR_8)
{
 struct dma_fence_array *VAR_9;
 size_t VAR_10 = sizeof(*VAR_9);


 VAR_10 += VAR_4 * sizeof(struct dma_fence_array_cb);
 VAR_9 = FUNC_3(VAR_10, VAR_0);
 if (!VAR_9)
  return ((void*)0);

 FUNC_4(&VAR_9->lock);
 FUNC_1(&VAR_9->base, &VAR_2, &VAR_9->lock,
         VAR_6, VAR_7);
 FUNC_2(&VAR_9->work, VAR_3);

 VAR_9->num_fences = VAR_4;
 FUNC_0(&VAR_9->num_pending, VAR_8 ? 1 : VAR_4);
 VAR_9->fences = VAR_5;

 VAR_9->base.error = VAR_1;

 return VAR_9;
}
