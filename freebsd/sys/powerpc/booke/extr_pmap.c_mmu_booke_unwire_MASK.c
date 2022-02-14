
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int pte_t ;
typedef TYPE_2__* pmap_t ;
typedef int mmu_t ;
struct TYPE_7__ {int wired_count; } ;
struct TYPE_8__ {TYPE_1__ pm_stats; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (char*,int *) ;
 int * FUNC_5 (int ,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(mmu_t VAR_2, pmap_t VAR_3, vm_offset_t VAR_4, vm_offset_t VAR_5)
{
 vm_offset_t VAR_6;
 pte_t *VAR_7;

 FUNC_0(VAR_3);
 for (VAR_6 = VAR_4; VAR_6 < VAR_5; VAR_6 += VAR_0) {
  if ((VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_6)) != ((void*)0) &&
      FUNC_2(VAR_7)) {
   if (!FUNC_3(VAR_7))
    FUNC_4("mmu_booke_unwire: pte %p isn't wired",
        VAR_7);
   *VAR_7 &= ~VAR_1;
   VAR_3->pm_stats.wired_count--;
  }
 }
 FUNC_1(VAR_3);

}
