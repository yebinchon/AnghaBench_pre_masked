
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
typedef int mmu_t ;
struct TYPE_5__ {int pm_stats; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,TYPE_1__*) ;

void
FUNC_3(mmu_t VAR_0, pmap_t VAR_1)
{

 FUNC_0(VAR_1);
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_1->pm_stats, sizeof(VAR_1->pm_stats));
}
