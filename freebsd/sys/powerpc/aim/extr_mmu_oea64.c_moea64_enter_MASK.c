
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef TYPE_3__* vm_page_t ;
typedef int vm_offset_t ;
typedef int uint64_t ;
typedef int u_int ;
struct pvo_head {int dummy; } ;
struct TYPE_12__ {int prot; int pa; } ;
struct pvo_entry {scalar_t__ pvo_pmap; TYPE_2__ pvo_pte; int pvo_vaddr; } ;
typedef scalar_t__ pmap_t ;
typedef int mmu_t ;
typedef int int8_t ;
struct TYPE_11__ {struct pvo_head mdpg_pvoh; } ;
struct TYPE_13__ {int oflags; int aflags; TYPE_1__ md; int object; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct pvo_entry*) ;
 scalar_t__ FUNC_2 (int ,struct pvo_entry*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_13 ;
 int VAR_14 ;
 struct pvo_entry* FUNC_11 (int ) ;
 int FUNC_12 (struct pvo_entry*) ;
 int FUNC_13 (struct pvo_entry*,scalar_t__,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_14 (int,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_15 (int ,struct pvo_entry*,struct pvo_head*,struct pvo_entry**) ;
 int FUNC_16 (int ,struct pvo_entry*) ;
 int FUNC_17 (int ,struct pvo_entry*) ;
 int FUNC_18 (int ,scalar_t__,int ,int,int ) ;
 scalar_t__ VAR_18 ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*,int) ;

int
FUNC_21(mmu_t VAR_19, pmap_t VAR_20, vm_offset_t VAR_21, vm_page_t VAR_22,
    vm_prot_t VAR_23, u_int VAR_24, int8_t VAR_25)
{
 struct pvo_entry *VAR_26, *VAR_27;
 struct pvo_head *VAR_28;
 uint64_t VAR_29;
 int VAR_30;

 if ((VAR_22->oflags & VAR_14) == 0) {
  if ((VAR_24 & VAR_9) == 0)
   FUNC_9(VAR_22);
  else
   FUNC_8(VAR_22->object);
 }

 VAR_26 = FUNC_11(0);
 if (VAR_26 == ((void*)0))
  return (VAR_1);
 VAR_26->pvo_pmap = ((void*)0);
 VAR_26->pvo_pte.prot = VAR_23;

 VAR_29 = FUNC_14(FUNC_10(VAR_22), FUNC_19(VAR_22));
 VAR_26->pvo_pte.pa = FUNC_10(VAR_22) | VAR_29;

 if ((VAR_24 & VAR_10) != 0)
  VAR_26->pvo_vaddr |= VAR_12;

 if ((VAR_22->oflags & VAR_14) != 0 || !VAR_16) {
  VAR_28 = ((void*)0);
 } else {
  VAR_28 = &VAR_22->md.mdpg_pvoh;
  VAR_26->pvo_vaddr |= VAR_11;
 }

 FUNC_5(VAR_22);
 FUNC_3(VAR_20);
 if (VAR_26->pvo_pmap == ((void*)0))
  FUNC_13(VAR_26, VAR_20, VAR_21);
 if (VAR_23 & VAR_13)
  if (VAR_18 &&
      (VAR_22->oflags & VAR_14) == 0)
   FUNC_20(VAR_22, VAR_8);

 VAR_30 = FUNC_15(VAR_19, VAR_26, VAR_28, &VAR_27);
 if (VAR_30 == VAR_0) {
  if (VAR_27->pvo_vaddr == VAR_26->pvo_vaddr &&
      VAR_27->pvo_pte.pa == VAR_26->pvo_pte.pa &&
      VAR_27->pvo_pte.prot == VAR_23) {

   VAR_30 = 0;


   if (FUNC_2(VAR_19, VAR_27) < 0) {
    FUNC_7(VAR_17--);
    FUNC_1(VAR_19, VAR_27);
   }


   FUNC_6(VAR_22);
   FUNC_4(VAR_20);
   FUNC_12(VAR_26);
   goto out;
  } else {

   FUNC_0(VAR_27->pvo_pmap == VAR_20, ("pmap of old "
       "mapping does not match new mapping"));
   FUNC_17(VAR_19, VAR_27);
   FUNC_15(VAR_19, VAR_26, VAR_28, ((void*)0));
  }
 }
 FUNC_4(VAR_20);
 FUNC_6(VAR_22);


 if (VAR_30 == VAR_0) {
  FUNC_16(VAR_19, VAR_27);
  FUNC_12(VAR_27);
 }

out:




 if (VAR_20 != VAR_15 && !(VAR_22->aflags & VAR_7) &&
     (VAR_29 & (VAR_4 | VAR_3 | VAR_5)) == 0) {
  FUNC_20(VAR_22, VAR_7);
  FUNC_18(VAR_19, VAR_20, VAR_21, FUNC_10(VAR_22), VAR_6);
 }
 return (VAR_2);
}
