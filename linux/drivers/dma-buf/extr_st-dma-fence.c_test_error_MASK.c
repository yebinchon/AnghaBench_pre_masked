
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*,int) ;
 int FUNC_3 (struct dma_fence*) ;
 struct dma_fence* FUNC_4 () ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(void *VAR_3)
{
 struct dma_fence *VAR_4;
 int VAR_5 = -VAR_0;

 VAR_4 = FUNC_4();
 if (!VAR_4)
  return -VAR_2;

 FUNC_2(VAR_4, -VAR_1);

 if (FUNC_0(VAR_4)) {
  FUNC_5("Fence unexpectedly has error status before signal\n");
  goto err_free;
 }

 FUNC_3(VAR_4);
 if (FUNC_0(VAR_4) != -VAR_1) {
  FUNC_5("Fence not reporting error status, got %d\n",
         FUNC_0(VAR_4));
  goto err_free;
 }

 VAR_5 = 0;
err_free:
 FUNC_1(VAR_4);
 return VAR_5;
}
