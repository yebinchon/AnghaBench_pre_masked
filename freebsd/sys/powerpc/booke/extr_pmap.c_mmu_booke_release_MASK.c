
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* pmap_t ;
typedef int mmu_t ;
struct TYPE_4__ {scalar_t__ resident_count; } ;
struct TYPE_5__ {int pm_pdir; int pm_pp2d; TYPE_1__ pm_stats; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(mmu_t VAR_1, pmap_t VAR_2)
{

 FUNC_0(VAR_2->pm_stats.resident_count == 0,
     ("pmap_release: pmap resident count %ld != 0",
     VAR_2->pm_stats.resident_count));



 FUNC_1(VAR_0, VAR_2->pm_pdir);

}
