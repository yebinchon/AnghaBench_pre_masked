
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_cb {int seen; int cb; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dma_fence*,int *,int ) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*) ;
 struct dma_fence* FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(void *VAR_3)
{
 struct simple_cb VAR_4 = {};
 struct dma_fence *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_3();
 if (!VAR_5)
  return -VAR_1;

 if (FUNC_0(VAR_5, &VAR_4.cb, VAR_2)) {
  FUNC_4("Failed to add callback, fence already signaled!\n");
  goto err_free;
 }

 FUNC_2(VAR_5);
 if (!VAR_4.seen) {
  FUNC_4("Callback failed!\n");
  goto err_free;
 }

 VAR_6 = 0;
err_free:
 FUNC_1(VAR_5);
 return VAR_6;
}
