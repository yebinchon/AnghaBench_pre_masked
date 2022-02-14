
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
 int FUNC_2 (struct dma_fence*,int,int ) ;
 struct dma_fence* FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(void *VAR_3)
{
 struct dma_fence *VAR_4;
 int VAR_5 = -VAR_0;

 VAR_4 = FUNC_3();
 if (!VAR_4)
  return -VAR_1;

 if (FUNC_2(VAR_4, 0, 0) != -VAR_2) {
  FUNC_4("Wait reported complete before being signaled\n");
  goto err_free;
 }

 FUNC_1(VAR_4);

 if (FUNC_2(VAR_4, 0, 0) != 0) {
  FUNC_4("Wait reported incomplete after being signaled\n");
  goto err_free;
 }

 VAR_5 = 0;
err_free:
 FUNC_1(VAR_4);
 FUNC_0(VAR_4);
 return VAR_5;
}
