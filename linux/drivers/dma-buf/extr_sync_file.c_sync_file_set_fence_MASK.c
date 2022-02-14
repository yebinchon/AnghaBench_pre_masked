
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_file {struct dma_fence* fence; } ;
struct dma_fence {int dummy; } ;
struct dma_fence_array {struct dma_fence base; } ;


 int VAR_0 ;
 struct dma_fence_array* FUNC_0 (int,struct dma_fence**,int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dma_fence**) ;

__attribute__((used)) static int FUNC_3(struct sync_file *VAR_1,
          struct dma_fence **VAR_2, int VAR_3)
{
 struct dma_fence_array *VAR_4;







 if (VAR_3 == 1) {
  VAR_1->fence = VAR_2[0];
  FUNC_2(VAR_2);
 } else {
  VAR_4 = FUNC_0(VAR_3, VAR_2,
            FUNC_1(1),
            1, 0);
  if (!VAR_4)
   return -VAR_0;

  VAR_1->fence = &VAR_4->base;
 }

 return 0;
}
