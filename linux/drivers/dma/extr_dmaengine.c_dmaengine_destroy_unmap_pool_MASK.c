
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmaengine_unmap_pool {int * cache; int * pool; } ;


 int FUNC_0 (struct dmaengine_unmap_pool*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct dmaengine_unmap_pool* VAR_0 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  struct dmaengine_unmap_pool *VAR_2 = &VAR_0[VAR_1];

  FUNC_2(VAR_2->pool);
  VAR_2->pool = ((void*)0);
  FUNC_1(VAR_2->cache);
  VAR_2->cache = ((void*)0);
 }
}
