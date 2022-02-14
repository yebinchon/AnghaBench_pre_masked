
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_sw_fence {int dummy; } ;
struct dma_resv {int dummy; } ;
struct dma_fence_ops {int dummy; } ;
struct dma_fence {struct dma_fence_ops const* ops; } ;
typedef int gfp_t ;


 int FUNC_0 (struct i915_sw_fence*) ;
 int FUNC_1 (struct dma_fence*) ;
 struct dma_fence* FUNC_2 (struct dma_resv*) ;
 int FUNC_3 (struct dma_resv*,struct dma_fence**,unsigned int*,struct dma_fence***) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct i915_sw_fence*,struct dma_fence*,unsigned long,int ) ;
 int FUNC_6 (struct dma_fence**) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct i915_sw_fence *VAR_0,
        struct dma_resv *VAR_1,
        const struct dma_fence_ops *VAR_2,
        bool VAR_3,
        unsigned long VAR_4,
        gfp_t VAR_5)
{
 struct dma_fence *VAR_6;
 int VAR_7 = 0, VAR_8;

 FUNC_0(VAR_0);
 FUNC_7(FUNC_4(VAR_5));

 if (VAR_3) {
  struct dma_fence **VAR_9;
  unsigned int VAR_10, VAR_11;

  VAR_7 = FUNC_3(VAR_1,
       &VAR_6, &VAR_10, &VAR_9);
  if (VAR_7)
   return VAR_7;

  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
   if (VAR_9[VAR_11]->ops == VAR_2)
    continue;

   VAR_8 = FUNC_5(VAR_0,
        VAR_9[VAR_11],
        VAR_4,
        VAR_5);
   if (VAR_8 < 0) {
    VAR_7 = VAR_8;
    break;
   }

   VAR_7 |= VAR_8;
  }

  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
   FUNC_1(VAR_9[VAR_11]);
  FUNC_6(VAR_9);
 } else {
  VAR_6 = FUNC_2(VAR_1);
 }

 if (VAR_7 >= 0 && VAR_6 && VAR_6->ops != VAR_2) {
  VAR_8 = FUNC_5(VAR_0,
       VAR_6,
       VAR_4,
       VAR_5);
  if (VAR_8 < 0)
   VAR_7 = VAR_8;
  else
   VAR_7 |= VAR_8;
 }

 FUNC_1(VAR_6);

 return VAR_7;
}
