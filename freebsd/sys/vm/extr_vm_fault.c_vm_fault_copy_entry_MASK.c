
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_30__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_pindex_t ;
typedef TYPE_2__* vm_page_t ;
typedef int vm_ooffset_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_3__* vm_object_t ;
typedef TYPE_4__* vm_map_t ;
typedef TYPE_5__* vm_map_entry_t ;
typedef int boolean_t ;
struct TYPE_35__ {TYPE_3__* vm_object; } ;
struct TYPE_40__ {int protection; int eflags; scalar_t__ end; scalar_t__ start; int * cred; scalar_t__ offset; TYPE_1__ object; } ;
struct TYPE_39__ {int pmap; } ;
struct TYPE_38__ {scalar_t__ charge; scalar_t__ type; scalar_t__ size; scalar_t__ backing_object_offset; struct TYPE_38__* backing_object; int * cred; int domain; int pg_color; int flags; } ;
struct TYPE_37__ {int * td_ucred; } ;
struct TYPE_36__ {scalar_t__ pindex; int valid; int dirty; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_11 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 TYPE_30__* VAR_12 ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (int ,scalar_t__,TYPE_2__*,int,int,int ) ;
 TYPE_3__* FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 TYPE_2__* FUNC_15 (TYPE_3__*,scalar_t__,int ) ;
 scalar_t__ FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (TYPE_2__*) ;
 TYPE_2__* FUNC_18 (TYPE_3__*,scalar_t__) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*,int ) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_3__*) ;

void
FUNC_25(vm_map_t VAR_13, vm_map_t VAR_14,
    vm_map_entry_t VAR_15, vm_map_entry_t VAR_16,
    vm_ooffset_t *VAR_17)
{
 vm_object_t VAR_18, VAR_19, VAR_20, VAR_21;
 vm_pindex_t VAR_22, VAR_23, VAR_24;
 vm_prot_t VAR_25, VAR_26;
 vm_offset_t VAR_27;
 vm_page_t VAR_28;
 vm_page_t VAR_29;
 boolean_t VAR_30;





 VAR_30 = VAR_16 == VAR_15;
 VAR_25 = VAR_26 = VAR_15->protection;

 VAR_21 = VAR_16->object.vm_object;
 VAR_24 = FUNC_1(VAR_16->offset);

 if (VAR_30 && (VAR_15->eflags & VAR_1) == 0) {
  VAR_19 = VAR_21;
  FUNC_12(VAR_19);
 } else {




  VAR_19 = FUNC_10(VAR_3,
      FUNC_6(VAR_15->end - VAR_15->start));




  VAR_19->domain = VAR_21->domain;
  VAR_19->charge = VAR_15->end - VAR_15->start;
 }

 FUNC_4(VAR_19);
 FUNC_0(VAR_30 || VAR_15->object.vm_object == ((void*)0),
     ("vm_fault_copy_entry: vm_object not NULL"));
 if (VAR_21 != VAR_19) {
  VAR_15->object.vm_object = VAR_19;
  VAR_15->offset = 0;
  VAR_15->eflags &= ~VAR_2;
 }
 if (VAR_17 != ((void*)0)) {
  FUNC_0(VAR_15->cred == ((void*)0),
      ("vm_fault_copy_entry: leaked swp charge"));
  VAR_19->cred = VAR_12->td_ucred;
  FUNC_7(VAR_19->cred);
  *VAR_17 += VAR_19->charge;
 } else if ((VAR_19->type == VAR_3 ||
     VAR_19->type == VAR_4) &&
     VAR_19->cred == ((void*)0)) {
  FUNC_0(VAR_15->cred != ((void*)0), ("no cred for entry %p",
      VAR_15));
  VAR_19->cred = VAR_15->cred;
  VAR_15->cred = ((void*)0);
 }
 if (!VAR_30)
  VAR_25 &= ~VAR_11;
 for (VAR_27 = VAR_15->start, VAR_22 = 0;
     VAR_27 < VAR_15->end;
     VAR_27 += VAR_6, VAR_22++) {
again:





  if (VAR_21 != VAR_19)
   FUNC_2(VAR_21);
  VAR_20 = VAR_21;
  VAR_23 = VAR_24 + VAR_22;
  while ((VAR_29 = FUNC_18(VAR_20, VAR_23)) == ((void*)0) &&
      (VAR_18 = VAR_20->backing_object) != ((void*)0)) {
   FUNC_0((VAR_16->protection & VAR_11) == 0 ||
       VAR_30,
       ("vm_fault_copy_entry: main object missing page"));

   FUNC_2(VAR_18);
   VAR_23 += FUNC_1(VAR_20->backing_object_offset);
   if (VAR_20 != VAR_19)
    FUNC_3(VAR_20);
   VAR_20 = VAR_18;
  }
  FUNC_0(VAR_29 != ((void*)0), ("vm_fault_copy_entry: page missing"));

  if (VAR_20 != VAR_19) {



   VAR_28 = FUNC_15(VAR_19, (VAR_21 ==
       VAR_19 ? VAR_24 : 0) + VAR_22,
       VAR_9);
   if (VAR_28 == ((void*)0)) {
    FUNC_5(VAR_19);
    FUNC_3(VAR_20);
    FUNC_24(VAR_19);
    FUNC_4(VAR_19);
    goto again;
   }
   FUNC_8(VAR_29, VAR_28);
   FUNC_3(VAR_20);
   VAR_28->dirty = VAR_28->valid = VAR_29->valid;
  } else {
   VAR_28 = VAR_29;
   if (FUNC_16(VAR_28, VAR_10) == 0)
    goto again;
   if (VAR_28->pindex >= VAR_19->size) {





    FUNC_23(VAR_28);
    break;
   }
  }
  FUNC_5(VAR_19);
  if (FUNC_14(VAR_28)) {
   FUNC_9(VAR_13->pmap, VAR_27, VAR_28, VAR_26,
       VAR_25 | (VAR_30 ? VAR_7 : 0), 0);
  }




  FUNC_4(VAR_19);

  if (VAR_30) {
   if (VAR_29 != VAR_28) {
    FUNC_20(VAR_29, VAR_8);
    FUNC_21(VAR_28);
   } else {
    FUNC_0(FUNC_22(VAR_28),
        ("dst_m %p is not wired", VAR_28));
   }
  } else {
   FUNC_17(VAR_28);
   FUNC_13(VAR_28);
   FUNC_19(VAR_28);
  }
  FUNC_23(VAR_28);
 }
 FUNC_5(VAR_19);
 if (VAR_30) {
  VAR_15->eflags &= ~(VAR_0 | VAR_1);
  FUNC_11(VAR_21);
 }
}
