
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_cb {scalar_t__ seen; int cb; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dma_fence*,int *,int ) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*,int *) ;
 int FUNC_3 (struct dma_fence*) ;
 struct dma_fence* FUNC_4 () ;
 int FUNC_5 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(void *VAR_3)
{
 struct simple_cb VAR_4 = {};
 struct dma_fence *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_4();
 if (!VAR_5)
  return -VAR_1;

 if (FUNC_0(VAR_5, &VAR_4.cb, VAR_2)) {
  FUNC_5("Failed to add callback, fence already signaled!\n");
  goto err_free;
 }

 if (!FUNC_2(VAR_5, &VAR_4.cb)) {
  FUNC_5("Failed to remove callback!\n");
  goto err_free;
 }

 FUNC_3(VAR_5);
 if (VAR_4.seen) {
  FUNC_5("Callback still signaled after removal!\n");
  goto err_free;
 }

 VAR_6 = 0;
err_free:
 FUNC_1(VAR_5);
 return VAR_6;
}
