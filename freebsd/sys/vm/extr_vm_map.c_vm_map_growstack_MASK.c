
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_3__* vm_map_t ;
typedef TYPE_4__* vm_map_entry_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_25__ {int flags; scalar_t__ size; int pmap; int system_map; } ;
struct vmspace {int vm_ssize; scalar_t__ vm_maxsaddr; TYPE_3__ vm_map; } ;
struct ucred {int dummy; } ;
struct proc {int p_flag2; int p_fctl0; TYPE_2__* p_sysent; int * p_textvp; struct vmspace* p_vmspace; } ;
typedef scalar_t__ rlim_t ;
struct TYPE_27__ {struct ucred* cred; } ;
struct TYPE_23__ {TYPE_5__* vm_object; } ;
struct TYPE_26__ {int eflags; scalar_t__ start; scalar_t__ end; scalar_t__ next_read; int offset; TYPE_1__ object; struct ucred* cred; int max_protection; int protection; } ;
struct TYPE_24__ {scalar_t__ sv_usrstack; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 struct proc* VAR_23 ;
 int VAR_24 ;
 struct proc* VAR_25 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_26 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_27 ;
 scalar_t__ FUNC_9 (struct proc*,int ) ;
 int FUNC_10 (struct proc*,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;
 int VAR_28 ;
 int FUNC_13 (scalar_t__,struct ucred*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_3__*,TYPE_4__*) ;
 TYPE_4__* FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_3__*,TYPE_4__*,scalar_t__) ;
 TYPE_4__* FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_3__*,int *,int ,scalar_t__,scalar_t__,int ,int ,int) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*) ;
 scalar_t__ FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*,scalar_t__,TYPE_4__**) ;
 int FUNC_24 (TYPE_3__*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_25 (TYPE_5__*,int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_26(vm_map_t VAR_29, vm_offset_t VAR_30, vm_map_entry_t VAR_31)
{
 vm_map_entry_t VAR_32;
 struct proc *VAR_33;
 struct vmspace *VAR_34;
 struct ucred *VAR_35;
 vm_offset_t VAR_36, VAR_37, VAR_38;
 vm_size_t VAR_39, VAR_40, VAR_41;
 rlim_t VAR_42, VAR_43, VAR_44;
 int VAR_45, VAR_46;
 bool VAR_47, VAR_48, VAR_49;







 VAR_33 = VAR_23;
 VAR_34 = VAR_33->p_vmspace;






 if (VAR_33 != VAR_25 && (VAR_29 != &VAR_33->p_vmspace->vm_map ||
     VAR_33->p_textvp == ((void*)0)))
  return (VAR_0);

 FUNC_1(!VAR_29->system_map);

 VAR_42 = FUNC_6(VAR_24, VAR_17);
 VAR_43 = FUNC_6(VAR_24, VAR_18);
 VAR_44 = FUNC_6(VAR_24, VAR_19);
retry:

 if (VAR_31 == ((void*)0) && !FUNC_23(VAR_29, VAR_30, &VAR_31))
  return (VAR_0);
 if ((VAR_31->eflags & VAR_7) == 0)
  return (VAR_2);
 if ((VAR_31->eflags & VAR_8) != 0) {
  VAR_32 = FUNC_18(VAR_31);
  if ((VAR_32->eflags & VAR_5) == 0 ||
      VAR_32->start != VAR_31->end)
   return (VAR_0);
  VAR_39 = FUNC_11(VAR_32->start - VAR_30);
  VAR_48 = 1;
 } else if ((VAR_31->eflags & VAR_9) != 0) {
  VAR_32 = FUNC_16(VAR_31);
  if ((VAR_32->eflags & VAR_6) == 0 ||
      VAR_32->end != VAR_31->start)
   return (VAR_0);
  VAR_39 = FUNC_11(VAR_30 + 1 - VAR_32->end);
  VAR_48 = 0;
 } else {
  return (VAR_0);
 }
 VAR_40 = ((VAR_23->p_flag2 & VAR_13) != 0 ||
     (VAR_23->p_fctl0 & VAR_12) != 0) ? 0 :
     VAR_31->next_read;
 VAR_41 = VAR_31->end - VAR_31->start;
 if (VAR_40 > VAR_41)
  return (VAR_1);
 VAR_41 -= VAR_40;
 if (VAR_39 > VAR_41)
  return (VAR_1);





 VAR_49 = VAR_30 >= (vm_offset_t)VAR_34->vm_maxsaddr &&
     VAR_30 < (vm_offset_t)VAR_33->p_sysent->sv_usrstack;
 if (VAR_49 && (FUNC_5(VAR_34->vm_ssize) + VAR_39 > VAR_43))
  return (VAR_1);
 VAR_39 = FUNC_12(VAR_39, VAR_28);
 if (VAR_39 > VAR_41)
  VAR_39 = VAR_41;
 if (VAR_49 && (FUNC_5(VAR_34->vm_ssize) + VAR_39 > VAR_43)) {
  VAR_39 = FUNC_14((vm_size_t)VAR_43) -
      FUNC_5(VAR_34->vm_ssize);
 }
 if (!VAR_26 && (VAR_29->flags & VAR_11) != 0) {
  if (FUNC_8(FUNC_7(VAR_29->pmap)) + VAR_39 > VAR_42) {
   VAR_45 = VAR_1;
   goto out;
  }
 }


 if (VAR_29->size + VAR_39 > VAR_44) {
  VAR_45 = VAR_1;
  goto out;
 }
 if (FUNC_22(VAR_29)) {
  VAR_31 = ((void*)0);
  FUNC_21(VAR_29);
  goto retry;
 }

 if (VAR_48) {
  VAR_38 = VAR_31->end - VAR_39;
  if (VAR_31->start + VAR_39 == VAR_31->end) {
   VAR_37 = VAR_31->start;
   VAR_36 = VAR_31->end;
   FUNC_15(VAR_29, VAR_31);
   VAR_47 = 1;
  } else {
   FUNC_1(VAR_31->start < VAR_31->end - VAR_39);
   FUNC_17(VAR_29, VAR_31, -VAR_39);
   VAR_47 = 0;
  }
  VAR_45 = FUNC_19(VAR_29, ((void*)0), 0, VAR_38,
      VAR_38 + VAR_39,
      VAR_32->protection, VAR_32->max_protection,
      VAR_10);
  if (VAR_45 != VAR_2) {
   if (VAR_47) {
    VAR_46 = FUNC_19(VAR_29, ((void*)0), 0, VAR_37,
        VAR_36, VAR_22, VAR_22,
        VAR_3 | VAR_4);
    FUNC_1(VAR_46 == VAR_2);
   } else
    FUNC_17(VAR_29, VAR_31,
        VAR_39);
  }
 } else {
  VAR_38 = VAR_32->end;
  VAR_35 = VAR_32->cred;
  if (VAR_35 == ((void*)0) && VAR_32->object.vm_object != ((void*)0))
   VAR_35 = VAR_32->object.vm_object->cred;
  if (VAR_35 != ((void*)0) && !FUNC_13(VAR_39, VAR_35))
   VAR_45 = VAR_1;

  else if (VAR_32->object.vm_object == ((void*)0) ||
      FUNC_25(VAR_32->object.vm_object,
      VAR_32->offset,
      (vm_size_t)(VAR_32->end - VAR_32->start),
      VAR_39, VAR_35 != ((void*)0))) {
   if (VAR_31->start + VAR_39 == VAR_31->end) {
    FUNC_15(VAR_29, VAR_31);
    FUNC_17(VAR_29, VAR_32,
        VAR_39);
   } else {
    VAR_31->start += VAR_39;
    VAR_32->end += VAR_39;
   }
   VAR_29->size += VAR_39;
   VAR_45 = VAR_2;
  } else
   VAR_45 = VAR_0;
 }
 if (VAR_45 == VAR_2 && VAR_49)
  VAR_34->vm_ssize += FUNC_4(VAR_39);




 if (VAR_45 == VAR_2 && (VAR_29->flags & VAR_11) != 0) {
  VAR_45 = FUNC_24(VAR_29, VAR_38,
      VAR_38 + VAR_39,
      VAR_21 | VAR_20);
 }
 FUNC_20(VAR_29);

out:
 return (VAR_45);
}
