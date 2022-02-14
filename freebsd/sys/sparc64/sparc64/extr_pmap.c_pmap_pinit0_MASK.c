
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
struct TYPE_4__ {int pm_stats; int * pm_tsb_obj; int * pm_tsb; int pm_active; int * pm_context; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;

void
FUNC_3(pmap_t VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->pm_context[VAR_3] = VAR_1;
 FUNC_0(&VAR_2->pm_active);
 VAR_2->pm_tsb = ((void*)0);
 VAR_2->pm_tsb_obj = ((void*)0);
 FUNC_2(&VAR_2->pm_stats, sizeof(VAR_2->pm_stats));
}
