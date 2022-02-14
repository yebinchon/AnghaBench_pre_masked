
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_resv_list {int shared_max; unsigned int shared_count; int * shared; } ;
struct dma_resv {int seq; int fence; int fence_excl; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence**) ;
 struct dma_fence** FUNC_3 (struct dma_fence**,size_t,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 unsigned int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,unsigned int) ;

int FUNC_9(struct dma_resv *VAR_4,
       struct dma_fence **VAR_5,
       unsigned *VAR_6,
       struct dma_fence ***VAR_7)
{
 struct dma_fence **VAR_8 = ((void*)0);
 struct dma_fence *VAR_9;
 unsigned int VAR_10;
 int VAR_11 = 1;

 do {
  struct dma_resv_list *VAR_12;
  unsigned int VAR_13, VAR_14;
  size_t VAR_15 = 0;

  VAR_10 = VAR_13 = 0;

  FUNC_5();
  VAR_14 = FUNC_7(&VAR_4->seq);

  VAR_9 = FUNC_4(VAR_4->fence_excl);
  if (VAR_9 && !FUNC_0(VAR_9))
   goto unlock;

  VAR_12 = FUNC_4(VAR_4->fence);
  if (VAR_12)
   VAR_15 += sizeof(*VAR_8) * VAR_12->shared_max;

  if (!VAR_5 && VAR_9)
   VAR_15 += sizeof(*VAR_8);

  if (VAR_15) {
   struct dma_fence **VAR_16;

   VAR_16 = FUNC_3(VAR_8, VAR_15,
        VAR_2 | VAR_3);
   if (!VAR_16) {
    FUNC_6();

    FUNC_1(VAR_9);
    VAR_9 = ((void*)0);

    VAR_16 = FUNC_3(VAR_8, VAR_15, VAR_1);
    if (VAR_16) {
     VAR_8 = VAR_16;
     continue;
    }

    VAR_11 = -VAR_0;
    break;
   }
   VAR_8 = VAR_16;
   VAR_10 = VAR_12 ? VAR_12->shared_count : 0;
   for (VAR_13 = 0; VAR_13 < VAR_10; ++VAR_13) {
    VAR_8[VAR_13] = FUNC_4(VAR_12->shared[VAR_13]);
    if (!FUNC_0(VAR_8[VAR_13]))
     break;
   }
  }

  if (VAR_13 != VAR_10 || FUNC_8(&VAR_4->seq, VAR_14)) {
   while (VAR_13--)
    FUNC_1(VAR_8[VAR_13]);
   FUNC_1(VAR_9);
   goto unlock;
  }

  VAR_11 = 0;
unlock:
  FUNC_6();
 } while (VAR_11);

 if (VAR_5)
  *VAR_5 = VAR_9;
 else if (VAR_9)
  VAR_8[VAR_10++] = VAR_9;

 if (!VAR_10) {
  FUNC_2(VAR_8);
  VAR_8 = ((void*)0);
 }

 *VAR_6 = VAR_10;
 *VAR_7 = VAR_8;
 return VAR_11;
}
