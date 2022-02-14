
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_20__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef void* vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_pindex_t ;
typedef void* vm_offset_t ;
typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* vm_map_t ;
typedef TYPE_4__* vm_map_entry_t ;
struct ucred {int dummy; } ;
typedef int boolean_t ;
struct TYPE_23__ {TYPE_2__* vm_object; TYPE_3__* sub_map; } ;
struct TYPE_27__ {int eflags; int protection; int max_protection; scalar_t__ wired_count; TYPE_1__ object; void* offset; void* start; struct ucred* cred; void* end; } ;
struct TYPE_26__ {int system_map; } ;
struct TYPE_25__ {void* charge; struct ucred* cred; } ;
struct TYPE_24__ {struct ucred* td_ucred; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct ucred*) ;
 int FUNC_6 (struct ucred*) ;
 TYPE_20__* VAR_18 ;
 TYPE_3__* VAR_19 ;
 int FUNC_7 (void*,struct ucred*) ;
 int FUNC_8 (void*,struct ucred*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,void*,TYPE_4__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,void*,TYPE_4__**) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 TYPE_2__* FUNC_16 (int ,int ) ;
 int FUNC_17 (TYPE_2__**,void**,void*) ;

int
FUNC_18(vm_map_t *VAR_20,
       vm_offset_t VAR_21,
       vm_prot_t VAR_22,
       vm_map_entry_t *VAR_23,
       vm_object_t *VAR_24,
       vm_pindex_t *VAR_25,
       vm_prot_t *VAR_26,
       boolean_t *VAR_27)
{
 vm_map_entry_t VAR_28;
 vm_map_t VAR_29 = *VAR_20;
 vm_prot_t VAR_30;
 vm_prot_t VAR_31 = VAR_22;
 vm_object_t VAR_32;
 vm_size_t VAR_33;
 struct ucred *VAR_34;

RetryLookup:

 FUNC_11(VAR_29);

RetryLookupLocked:



 if (!FUNC_13(VAR_29, VAR_21, VAR_23)) {
  FUNC_15(VAR_29);
  return (VAR_0);
 }

 VAR_28 = *VAR_23;




 if (VAR_28->eflags & VAR_6) {
  vm_map_t VAR_35 = VAR_29;

  *VAR_20 = VAR_29 = VAR_28->object.sub_map;
  FUNC_15(VAR_35);
  goto RetryLookup;
 }




 VAR_30 = VAR_28->protection;
 if ((VAR_22 & VAR_14) != 0) {
  VAR_22 &= ~VAR_14;
  if (VAR_30 == VAR_15 && VAR_29 != VAR_19 &&
      (VAR_28->eflags & VAR_5) != 0 &&
      (VAR_28->eflags & (VAR_8 |
      VAR_9)) != 0 &&
      FUNC_9(VAR_29, VAR_21, VAR_28) == VAR_3)
   goto RetryLookupLocked;
 }
 VAR_31 &= VAR_16 | VAR_17 | VAR_13;
 if ((VAR_31 & VAR_30) != VAR_31 || VAR_30 == VAR_15) {
  FUNC_15(VAR_29);
  return (VAR_1);
 }
 FUNC_0((VAR_30 & VAR_17) == 0 || (VAR_28->eflags &
     (VAR_10 | VAR_7)) !=
     (VAR_10 | VAR_7),
     ("entry %p flags %x", VAR_28, VAR_28->eflags));
 if ((VAR_22 & VAR_12) != 0 &&
     (VAR_28->max_protection & VAR_17) == 0 &&
     (VAR_28->eflags & VAR_4) == 0) {
  FUNC_15(VAR_29);
  return (VAR_1);
 }





 *VAR_27 = (VAR_28->wired_count != 0);
 if (*VAR_27)
  VAR_31 = VAR_28->protection;
 VAR_33 = VAR_28->end - VAR_28->start;



 if (VAR_28->eflags & VAR_7) {







  if ((VAR_31 & VAR_17) != 0 ||
      (VAR_22 & VAR_12) != 0) {






   if (FUNC_12(VAR_29))
    goto RetryLookup;

   if (VAR_28->cred == ((void*)0)) {




    VAR_34 = VAR_18->td_ucred;
    FUNC_6(VAR_34);
    if (!FUNC_8(VAR_33, VAR_34)) {
     FUNC_5(VAR_34);
     FUNC_14(VAR_29);
     return (VAR_2);
    }
    VAR_28->cred = VAR_34;
   }
   FUNC_17(&VAR_28->object.vm_object,
       &VAR_28->offset, VAR_33);
   VAR_28->eflags &= ~VAR_7;
   VAR_32 = VAR_28->object.vm_object;
   if (VAR_32->cred != ((void*)0)) {



    FUNC_7(VAR_33, VAR_28->cred);
    FUNC_5(VAR_28->cred);
    VAR_28->cred = ((void*)0);
   } else if (VAR_28->cred != ((void*)0)) {
    FUNC_2(VAR_32);
    VAR_32->cred = VAR_28->cred;
    VAR_32->charge = VAR_33;
    FUNC_3(VAR_32);
    VAR_28->cred = ((void*)0);
   }

   FUNC_10(VAR_29);
  } else {




   VAR_30 &= ~VAR_17;
  }
 }




 if (VAR_28->object.vm_object == ((void*)0) &&
     !VAR_29->system_map) {
  if (FUNC_12(VAR_29))
   goto RetryLookup;
  VAR_28->object.vm_object = FUNC_16(VAR_11,
      FUNC_4(VAR_33));
  VAR_28->offset = 0;
  if (VAR_28->cred != ((void*)0)) {
   FUNC_2(VAR_28->object.vm_object);
   VAR_28->object.vm_object->cred = VAR_28->cred;
   VAR_28->object.vm_object->charge = VAR_33;
   FUNC_3(VAR_28->object.vm_object);
   VAR_28->cred = ((void*)0);
  }
  FUNC_10(VAR_29);
 }





 *VAR_25 = FUNC_1((VAR_21 - VAR_28->start) + VAR_28->offset);
 *VAR_24 = VAR_28->object.vm_object;

 *VAR_26 = VAR_30;
 return (VAR_3);
}
