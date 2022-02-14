
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_pool {int * cache_list; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct intel_engine_pool *VAR_0)
{
 int VAR_1;

 FUNC_2(&VAR_0->lock);
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->cache_list); VAR_1++)
  FUNC_1(&VAR_0->cache_list[VAR_1]);
}
