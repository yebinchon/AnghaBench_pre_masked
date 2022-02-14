
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int flags; } ;


 int VAR_0 ;
 struct dma_fence* FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static inline int FUNC_4(struct dma_fence *VAR_1)
{
 struct dma_fence *VAR_2, *VAR_3 = VAR_1;
 int VAR_4 = 1;

 if (!FUNC_3(VAR_0, &VAR_3->flags)) {
  VAR_2 = FUNC_0(VAR_3);
  if (!VAR_2)
   return -1;

  VAR_4 = !!FUNC_1(VAR_2);
  FUNC_2(VAR_2);
 }
 return VAR_4;
}
