
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int dummy; } ;


 int FUNC_0 (struct dma_fence**) ;
 int VAR_0 ;
 struct dma_fence* FUNC_1 () ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (struct dma_fence*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(void *VAR_1)
{
 struct dma_fence *VAR_2[64];
 int VAR_3 = -VAR_0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  VAR_2[VAR_4] = FUNC_1();
  if (!FUNC_2(VAR_2[VAR_4])) {
   FUNC_4("Obtained unsignaled stub fence!\n");
   goto err;
  }
 }

 VAR_3 = 0;
err:
 while (VAR_4--)
  FUNC_3(VAR_2[VAR_4]);
 return VAR_3;
}
