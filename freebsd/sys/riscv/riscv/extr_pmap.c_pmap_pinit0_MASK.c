
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
struct TYPE_7__ {int pm_l1; } ;
struct TYPE_6__ {int pm_satp; int pm_active; int pm_l1; int pm_stats; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 TYPE_4__* VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

void
FUNC_5(pmap_t VAR_3)
{

 FUNC_1(VAR_3);
 FUNC_2(&VAR_3->pm_stats, sizeof(VAR_3->pm_stats));
 VAR_3->pm_l1 = VAR_2->pm_l1;
 VAR_3->pm_satp = VAR_1 | (FUNC_4(VAR_3->pm_l1) >> VAR_0);
 FUNC_0(&VAR_3->pm_active);
 FUNC_3(VAR_3);
}
