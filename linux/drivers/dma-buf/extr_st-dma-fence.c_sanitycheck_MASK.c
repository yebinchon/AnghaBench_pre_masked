
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct dma_fence*) ;
 struct dma_fence* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void *VAR_1)
{
 struct dma_fence *VAR_2;

 VAR_2 = FUNC_2();
 if (!VAR_2)
  return -VAR_0;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2);

 return 0;
}
