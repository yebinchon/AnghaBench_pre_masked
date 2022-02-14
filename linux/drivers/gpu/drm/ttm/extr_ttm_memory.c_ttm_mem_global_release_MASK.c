
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_zone {int kobj; } ;
struct ttm_mem_global {unsigned int num_zones; int kobj; struct ttm_mem_zone** zones; int * swap_queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ttm_mem_global*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(struct ttm_mem_global *VAR_0)
{
 struct ttm_mem_zone *VAR_1;
 unsigned int VAR_2;


 FUNC_6();
 FUNC_5();

 FUNC_1(VAR_0->swap_queue);
 FUNC_0(VAR_0->swap_queue);
 VAR_0->swap_queue = ((void*)0);
 for (VAR_2 = 0; VAR_2 < VAR_0->num_zones; ++VAR_2) {
  VAR_1 = VAR_0->zones[VAR_2];
  FUNC_2(&VAR_1->kobj);
  FUNC_3(&VAR_1->kobj);
 }
 FUNC_2(&VAR_0->kobj);
 FUNC_3(&VAR_0->kobj);
 FUNC_4(VAR_0, 0, sizeof(*VAR_0));
}
