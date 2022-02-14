
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
typedef int mmu_t ;
struct TYPE_4__ {scalar_t__* pm_sr; int pm_slb; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

void
FUNC_5(mmu_t VAR_0, pmap_t VAR_1)
{
 FUNC_0(VAR_1->pm_sr[0] != 0, ("moea64_release: pm_sr[0] = 0"));

 FUNC_2(FUNC_1(VAR_1->pm_sr[0]));

}
