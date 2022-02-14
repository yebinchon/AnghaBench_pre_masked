
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct dma_fence*) ;
 scalar_t__ FUNC_2 (struct dma_fence*) ;
 struct dma_fence* FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(void *VAR_2)
{
 struct dma_fence *VAR_3;
 int VAR_4 = -VAR_0;

 VAR_3 = FUNC_3();
 if (!VAR_3)
  return -VAR_1;

 if (FUNC_0(VAR_3)) {
  FUNC_4("Fence unexpectedly signaled on creation\n");
  goto err_free;
 }

 if (FUNC_2(VAR_3)) {
  FUNC_4("Fence reported being already signaled\n");
  goto err_free;
 }

 if (!FUNC_0(VAR_3)) {
  FUNC_4("Fence not reporting signaled\n");
  goto err_free;
 }

 if (!FUNC_2(VAR_3)) {
  FUNC_4("Fence reported not being already signaled\n");
  goto err_free;
 }

 VAR_4 = 0;
err_free:
 FUNC_1(VAR_3);
 return VAR_4;
}
