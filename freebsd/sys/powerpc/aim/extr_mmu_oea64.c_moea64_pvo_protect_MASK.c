
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_prot_t ;
struct TYPE_4__ {int mdpg_attrs; } ;
struct vm_page {int aflags; int oflags; TYPE_2__ md; } ;
struct TYPE_3__ {int prot; int pa; } ;
struct pvo_entry {int pvo_vaddr; TYPE_1__ pvo_pte; } ;
typedef scalar_t__ pmap_t ;
typedef int mmu_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct pvo_entry*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct vm_page* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_11 ;
 int FUNC_3 (struct pvo_entry*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (int ,scalar_t__,int ,int,int ) ;
 int FUNC_6 (struct vm_page*,int) ;
 int FUNC_7 (struct vm_page*) ;

__attribute__((used)) static void
FUNC_8(mmu_t VAR_15, pmap_t VAR_16, struct pvo_entry *VAR_17, vm_prot_t VAR_18)
{
 struct vm_page *VAR_19;
 vm_prot_t VAR_20;
 int32_t VAR_21;

 FUNC_2(VAR_16, VAR_6);




 VAR_20 = VAR_17->pvo_pte.prot;
 VAR_17->pvo_pte.prot = VAR_18;
 VAR_19 = FUNC_1(VAR_17->pvo_pte.pa & VAR_5);




 VAR_21 = FUNC_0(VAR_15, VAR_17, VAR_7);
 if (VAR_21 < 0)
  VAR_21 = (VAR_20 & VAR_12) ? VAR_0 : 0;

 if (VAR_16 != VAR_14 && VAR_19 != ((void*)0) && !(VAR_19->aflags & VAR_9) &&
     (VAR_17->pvo_pte.pa & (VAR_2 | VAR_1 | VAR_3)) == 0) {
  if ((VAR_19->oflags & VAR_13) == 0)
   FUNC_6(VAR_19, VAR_9);
  FUNC_5(VAR_15, VAR_16, FUNC_3(VAR_17),
      VAR_17->pvo_pte.pa & VAR_5, VAR_8);
 }





 if (VAR_19 != ((void*)0) && (VAR_17->pvo_vaddr & VAR_11) &&
     (VAR_20 & VAR_12)) {
  VAR_21 |= FUNC_4(&VAR_19->md.mdpg_attrs);
  if (VAR_21 & VAR_0)
   FUNC_7(VAR_19);
  if (VAR_21 & VAR_4)
   FUNC_6(VAR_19, VAR_10);
 }
}
