
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_offset_t ;
struct pvo_entry {int dummy; } ;
typedef int mmu_t ;
struct TYPE_9__ {int pmap_pvo; int pm_active; struct TYPE_9__* pmap_phys; scalar_t__* pm_sr; } ;
struct TYPE_7__ {TYPE_1__* slb; } ;
struct TYPE_8__ {TYPE_2__ pc_aim; } ;
struct TYPE_6__ {scalar_t__ slbe; scalar_t__ slbv; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (uintptr_t) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_4__* VAR_8 ;
 scalar_t__ FUNC_4 (int,int ) ;
 struct pvo_entry* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_14 ;
 int* VAR_15 ;
 int FUNC_6 (int *,char*,int *,int ) ;
 TYPE_3__* VAR_16 ;
 int * VAR_17 ;

void
FUNC_7(mmu_t VAR_18, vm_offset_t VAR_19, vm_offset_t VAR_20)
{
 int VAR_21;




 VAR_13 = VAR_12 - 1;




 FUNC_6(&VAR_14, "SLB table", ((void*)0), VAR_2);
 for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++)
  FUNC_6(&VAR_17[VAR_21], "page pv", ((void*)0), VAR_2);




 VAR_9 = (struct pvo_entry *)FUNC_4(
  VAR_11*sizeof(struct pvo_entry), VAR_4);
 VAR_10 = 0;


 if (VAR_7)
  VAR_9 = (struct pvo_entry *)
      FUNC_1((uintptr_t)VAR_9);





 VAR_15[(VAR_1 & (VAR_3 - 1)) / VAR_6]
  |= 1 << (VAR_1 % VAR_6);
 VAR_15[0] |= 1;
 for (VAR_21 = 0; VAR_21 < 16; VAR_21++)
  VAR_8->pm_sr[VAR_21] = VAR_0 + VAR_21;


 VAR_8->pmap_phys = VAR_8;
 FUNC_0(&VAR_8->pm_active);
 FUNC_3(&VAR_8->pmap_pvo);

 FUNC_2(VAR_8);





 FUNC_5(VAR_18, VAR_19, VAR_20);
}
