
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_ooffset_t ;
typedef scalar_t__ vm_offset_t ;
typedef int * vm_object_t ;
typedef TYPE_2__* vm_map_t ;
struct thread {TYPE_10__* td_proc; } ;
typedef int boolean_t ;
struct TYPE_16__ {scalar_t__ size; int flags; int pmap; } ;
struct TYPE_15__ {scalar_t__ vm_daddr; TYPE_2__ vm_map; } ;
struct TYPE_14__ {TYPE_1__* p_vmspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (TYPE_10__*) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_2 (int) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ FUNC_3 (struct thread*,int ) ;
 scalar_t__ FUNC_4 (struct thread*,int ) ;
 int VAR_41 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_10__*,int ,scalar_t__) ;
 int FUNC_8 (TYPE_10__*,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_2__*,int *,int,scalar_t__*,scalar_t__,scalar_t__,int,int ,int ,int) ;
 int FUNC_12 (TYPE_2__*,int *,int,scalar_t__*,scalar_t__,scalar_t__,scalar_t__,int,int ,int ,int) ;
 int FUNC_13 (TYPE_2__*,int *,int,scalar_t__,scalar_t__,int ,int ,int) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,scalar_t__,scalar_t__,int) ;
 int FUNC_17 (int) ;

int
FUNC_18(vm_map_t VAR_42, vm_offset_t *VAR_43, vm_size_t VAR_44, vm_prot_t VAR_45,
    vm_prot_t VAR_46, int VAR_47, vm_object_t VAR_48, vm_ooffset_t VAR_49,
    boolean_t VAR_50, struct thread *VAR_51)
{
 boolean_t VAR_52, VAR_53;
 vm_offset_t VAR_54;
 int VAR_55, VAR_56, VAR_57, VAR_58;

 VAR_52 = VAR_42 == &VAR_51->td_proc->p_vmspace->vm_map;
 if (VAR_52) {
  FUNC_0(VAR_51->td_proc);
  if (VAR_42->size + VAR_44 > FUNC_3(VAR_51, VAR_34)) {
   FUNC_1(VAR_51->td_proc);
   return (VAR_1);
  }
  if (FUNC_7(VAR_51->td_proc, VAR_31, VAR_42->size + VAR_44)) {
   FUNC_1(VAR_51->td_proc);
   return (VAR_1);
  }
  if (!VAR_41 && VAR_42->flags & VAR_27) {
   if (FUNC_6(FUNC_5(VAR_42->pmap)) + VAR_44 >
       FUNC_3(VAR_51, VAR_33)) {
    FUNC_8(VAR_51->td_proc, VAR_31,
        VAR_42->size);
    FUNC_1(VAR_51->td_proc);
    return (VAR_1);
   }
   VAR_56 = FUNC_7(VAR_51->td_proc, VAR_30,
       FUNC_6(FUNC_5(VAR_42->pmap)) + VAR_44);
   if (VAR_56 != 0) {
    FUNC_8(VAR_51->td_proc, VAR_31,
        VAR_42->size);
    FUNC_1(VAR_51->td_proc);
    return (VAR_56);
   }
  }
  FUNC_1(VAR_51->td_proc);
 }
 if (VAR_49 & VAR_29)
  return (VAR_0);

 if ((VAR_47 & VAR_16) == 0) {
  VAR_53 = VAR_35;
  *VAR_43 = FUNC_9(*VAR_43);
 } else {
  if (*VAR_43 != FUNC_10(*VAR_43))
   return (VAR_0);
  VAR_53 = VAR_2;
 }

 if (VAR_47 & VAR_9) {
  if (VAR_48 != ((void*)0) || VAR_49 != 0)
   return (VAR_0);
  VAR_55 = 0;
 } else if (VAR_47 & VAR_23)
  VAR_55 = VAR_21;
 else
  VAR_55 = VAR_22;

 if ((VAR_47 & (VAR_9|VAR_24)) == 0)
  VAR_55 |= VAR_11;
 if (VAR_47 & VAR_20)
  VAR_55 |= VAR_14;
 if (VAR_47 & VAR_19)
  VAR_55 |= VAR_13;

 if (VAR_47 & VAR_24)
  VAR_55 |= VAR_18;
 if (VAR_50)
  VAR_55 |= VAR_28;
 if (VAR_47 & VAR_25) {
  if (VAR_48 != ((void*)0))
   return (VAR_0);
  VAR_55 |= VAR_26;
 }
 if ((VAR_47 & VAR_15) != 0)
  VAR_55 |= VAR_10;
 if ((VAR_47 & VAR_17) != 0)
  VAR_55 |= VAR_12;

 if (VAR_53) {
  if ((VAR_47 & VAR_7) == VAR_6)
   VAR_57 = VAR_37;
  else if ((VAR_47 & VAR_7) != 0)
   VAR_57 = FUNC_2(VAR_47 >>
       VAR_8);
  else
   VAR_57 = VAR_36;
  VAR_54 = 0;




  if (VAR_52) {
   VAR_58 = FUNC_12(VAR_42, VAR_48, VAR_49, VAR_43, VAR_44,
       FUNC_9((vm_offset_t)VAR_51->td_proc->p_vmspace->
       vm_daddr + FUNC_4(VAR_51, VAR_32)), VAR_54,
       VAR_57, VAR_45, VAR_46, VAR_55);
  } else {
   VAR_58 = FUNC_11(VAR_42, VAR_48, VAR_49, VAR_43, VAR_44,
       VAR_54, VAR_57, VAR_45, VAR_46, VAR_55);
  }
 } else {
  VAR_58 = FUNC_13(VAR_42, VAR_48, VAR_49, *VAR_43, VAR_44,
      VAR_45, VAR_46, VAR_55);
 }

 if (VAR_58 == VAR_3) {




  if ((VAR_42->flags & VAR_27) != 0) {
   FUNC_14(VAR_42);
   if ((VAR_42->flags & VAR_27) != 0)
    (void)FUNC_16(VAR_42, *VAR_43,
        *VAR_43 + VAR_44, VAR_40 |
        ((VAR_47 & VAR_25) ? VAR_38 :
        VAR_39));
   FUNC_15(VAR_42);
  }
 }
 return (FUNC_17(VAR_58));
}
