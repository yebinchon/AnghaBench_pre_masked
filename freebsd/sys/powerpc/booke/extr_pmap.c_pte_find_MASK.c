
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int pte_t ;
typedef TYPE_1__* pmap_t ;
typedef int mmu_t ;
struct TYPE_3__ {int ** pm_pdir; } ;


 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static pte_t *
FUNC_3(mmu_t VAR_0, pmap_t VAR_1, vm_offset_t VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4 = FUNC_2(VAR_2);

 FUNC_0((VAR_1 != ((void*)0)), ("pte_find: invalid pmap"));

 if (VAR_1->pm_pdir[VAR_3])
  return (&(VAR_1->pm_pdir[VAR_3][VAR_4]));

 return (((void*)0));
}
