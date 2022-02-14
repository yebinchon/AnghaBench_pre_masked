
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence_chain {int prev; } ;
struct dma_fence {int dummy; } ;


 struct dma_fence* FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static struct dma_fence *FUNC_3(struct dma_fence_chain *VAR_0)
{
 struct dma_fence *VAR_1;

 FUNC_1();
 VAR_1 = FUNC_0(&VAR_0->prev);
 FUNC_2();
 return VAR_1;
}
