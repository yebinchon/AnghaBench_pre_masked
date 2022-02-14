
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint32_t ;
typedef TYPE_1__* pmap_t ;
typedef int mmu_t ;
struct TYPE_3__ {int * pm_sr; struct TYPE_3__* pmap_phys; int pmap_pvo; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ VAR_0 ;

void
FUNC_5(mmu_t VAR_1, pmap_t VAR_2)
{
 int VAR_3;
 uint32_t VAR_4;

 FUNC_1(&VAR_2->pmap_pvo);

 if (VAR_0)
  VAR_2->pmap_phys = (pmap_t)FUNC_4(VAR_1,
      (vm_offset_t)VAR_2);
 else
  VAR_2->pmap_phys = VAR_2;




 VAR_4 = FUNC_3();

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
  VAR_2->pm_sr[VAR_3] = FUNC_2(VAR_3, VAR_4);

 FUNC_0(VAR_2->pm_sr[0] != 0, ("moea64_pinit: pm_sr[0] = 0"));
}
