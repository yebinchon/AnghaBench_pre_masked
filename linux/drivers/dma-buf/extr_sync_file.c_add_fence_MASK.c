
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int dummy; } ;


 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static void FUNC_2(struct dma_fence **VAR_0,
        int *VAR_1, struct dma_fence *VAR_2)
{
 VAR_0[*VAR_1] = VAR_2;

 if (!FUNC_1(VAR_2)) {
  FUNC_0(VAR_2);
  (*VAR_1)++;
 }
}
