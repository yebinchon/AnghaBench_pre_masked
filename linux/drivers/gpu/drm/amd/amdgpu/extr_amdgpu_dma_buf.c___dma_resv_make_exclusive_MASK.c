
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_resv {int dummy; } ;
struct dma_fence {int dummy; } ;
struct dma_fence_array {struct dma_fence base; } ;


 int VAR_0 ;
 struct dma_fence_array* FUNC_0 (unsigned int,struct dma_fence**,int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (struct dma_resv*,struct dma_fence*) ;
 int FUNC_4 (struct dma_resv*,int *,unsigned int*,struct dma_fence***) ;
 int FUNC_5 (struct dma_resv*) ;
 int FUNC_6 (struct dma_fence**) ;

__attribute__((used)) static int
FUNC_7(struct dma_resv *VAR_1)
{
 struct dma_fence **VAR_2;
 unsigned int VAR_3;
 int VAR_4;

 if (!FUNC_5(VAR_1))
  return 0;

 VAR_4 = FUNC_4(VAR_1, ((void*)0), &VAR_3, &VAR_2);
 if (VAR_4)
  return VAR_4;

 if (VAR_3 == 0) {

 } else if (VAR_3 == 1) {
  FUNC_3(VAR_1, VAR_2[0]);
  FUNC_2(VAR_2[0]);
  FUNC_6(VAR_2);
 } else {
  struct dma_fence_array *VAR_5;

  VAR_5 = FUNC_0(VAR_3, VAR_2,
            FUNC_1(1), 0,
            0);
  if (!VAR_5)
   goto err_fences_put;

  FUNC_3(VAR_1, &VAR_5->base);
  FUNC_2(&VAR_5->base);
 }

 return 0;

err_fences_put:
 while (VAR_3--)
  FUNC_2(VAR_2[VAR_3]);
 FUNC_6(VAR_2);
 return -VAR_0;
}
