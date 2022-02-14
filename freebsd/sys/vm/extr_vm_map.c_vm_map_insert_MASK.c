
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_29__ ;
typedef struct TYPE_34__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ vm_prot_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* vm_map_t ;
typedef TYPE_4__* vm_map_entry_t ;
typedef scalar_t__ vm_inherit_t ;
typedef int vm_eflags_t ;
struct ucred {int dummy; } ;
struct TYPE_34__ {TYPE_2__* vm_object; } ;
struct TYPE_38__ {scalar_t__ start; int eflags; scalar_t__ end; scalar_t__ offset; scalar_t__ inheritance; scalar_t__ protection; scalar_t__ max_protection; scalar_t__ wired_count; struct ucred* cred; scalar_t__ next_read; int read_ahead; int * wiring_thread; TYPE_1__ object; } ;
struct TYPE_37__ {int size; } ;
struct TYPE_36__ {int ref_count; scalar_t__ shadow_count; struct ucred* cred; } ;
struct TYPE_35__ {struct ucred* td_ucred; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int,char*) ;
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
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int FUNC_6 (struct ucred*) ;
 TYPE_29__* VAR_40 ;
 TYPE_3__* VAR_41 ;
 TYPE_2__* VAR_42 ;
 scalar_t__ VAR_43 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 TYPE_4__* FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*,scalar_t__) ;
 TYPE_4__* FUNC_12 (TYPE_4__*) ;
 scalar_t__ FUNC_13 (TYPE_3__*,scalar_t__,TYPE_4__**) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 scalar_t__ FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*,scalar_t__,scalar_t__,TYPE_2__*,int ,scalar_t__,int) ;
 int FUNC_17 (TYPE_3__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_18 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_19 (TYPE_2__*,scalar_t__,int ,int ,int) ;
 int FUNC_20 (TYPE_2__*) ;

int
FUNC_21(vm_map_t VAR_44, vm_object_t VAR_45, vm_ooffset_t VAR_46,
    vm_offset_t VAR_47, vm_offset_t VAR_48, vm_prot_t VAR_49, vm_prot_t VAR_50, int VAR_51)
{
 vm_map_entry_t VAR_52, VAR_53;
 struct ucred *VAR_54;
 vm_eflags_t VAR_55;
 vm_inherit_t VAR_56;

 FUNC_3(VAR_44);
 FUNC_1(VAR_45 != VAR_42 ||
     (VAR_51 & VAR_7) == 0,
     ("vm_map_insert: kernel object and COW"));
 FUNC_1(VAR_45 == ((void*)0) || (VAR_51 & VAR_27) == 0,
     ("vm_map_insert: paradoxical MAP_NOFAULT request"));
 FUNC_1((VAR_49 & ~VAR_50) == 0,
     ("prot %#x is not subset of max_prot %#x", VAR_49, VAR_50));




 if (VAR_47 < FUNC_15(VAR_44) || VAR_48 > FUNC_14(VAR_44) ||
     VAR_47 >= VAR_48)
  return (VAR_0);





 if (FUNC_13(VAR_44, VAR_47, &VAR_53))
  return (VAR_2);




 if (FUNC_12(VAR_53)->start < VAR_48)
  return (VAR_2);

 if ((VAR_51 & VAR_8) != 0 && (VAR_45 != ((void*)0) ||
     VAR_50 != VAR_38))
  return (VAR_1);

 VAR_55 = 0;
 if (VAR_51 & VAR_7)
  VAR_55 |= VAR_13 | VAR_17;
 if (VAR_51 & VAR_27)
  VAR_55 |= VAR_19;
 if (VAR_51 & VAR_12)
  VAR_55 |= VAR_20;
 if (VAR_51 & VAR_11)
  VAR_55 |= VAR_18;
 if (VAR_51 & VAR_30)
  VAR_55 |= VAR_14;
 if (VAR_51 & VAR_31)
  VAR_55 |= VAR_15;
 if (VAR_51 & VAR_33)
  VAR_55 |= VAR_25;
 if (VAR_51 & VAR_32)
  VAR_55 |= VAR_24;
 if ((VAR_51 & VAR_8) != 0)
  VAR_55 |= VAR_16;
 if ((VAR_51 & VAR_9) != 0)
  VAR_55 |= VAR_21;
 if ((VAR_51 & VAR_10) != 0)
  VAR_55 |= VAR_22;
 if (VAR_51 & VAR_26)
  VAR_56 = VAR_37;
 else
  VAR_56 = VAR_36;

 VAR_54 = ((void*)0);
 if ((VAR_51 & (VAR_6 | VAR_27 | VAR_8)) != 0)
  goto charged;
 if ((VAR_51 & VAR_5) || ((VAR_49 & VAR_39) &&
     ((VAR_55 & VAR_17) || VAR_45 == ((void*)0)))) {
  if (!(VAR_51 & VAR_5) && !FUNC_8(VAR_48 - VAR_47))
   return (VAR_3);
  FUNC_1(VAR_45 == ((void*)0) ||
      (VAR_55 & VAR_17) != 0 ||
      VAR_45->cred == ((void*)0),
      ("overcommit: vm_map_insert o %p", VAR_45));
  VAR_54 = VAR_40->td_ucred;
 }

charged:

 if (VAR_44 == VAR_41 && VAR_48 > VAR_43)
  FUNC_7(VAR_48);
 if (VAR_45 != ((void*)0)) {







  FUNC_4(VAR_45);
  if (VAR_45->ref_count > 1 || VAR_45->shadow_count != 0)
   FUNC_18(VAR_45, VAR_34);
  FUNC_5(VAR_45);
 } else if ((VAR_53->eflags & ~VAR_23) ==
     VAR_55 &&
     (VAR_51 & (VAR_30 | VAR_31 |
     VAR_32)) == 0 &&
     VAR_53->end == VAR_47 && (VAR_53->cred == VAR_54 ||
     (VAR_53->object.vm_object != ((void*)0) &&
     VAR_53->object.vm_object->cred == VAR_54)) &&
     FUNC_19(VAR_53->object.vm_object,
     VAR_53->offset,
     (vm_size_t)(VAR_53->end - VAR_53->start),
     (vm_size_t)(VAR_48 - VAR_53->end), VAR_54 != ((void*)0) &&
     (VAR_55 & VAR_17) == 0)) {





  if (VAR_53->inheritance == VAR_56 &&
      VAR_53->protection == VAR_49 &&
      VAR_53->max_protection == VAR_50 &&
      VAR_53->wired_count == 0) {
   FUNC_1((VAR_53->eflags & VAR_23) ==
       0, ("prev_entry %p has incoherent wiring",
       VAR_53));
   if ((VAR_53->eflags & VAR_16) == 0)
    VAR_44->size += VAR_48 - VAR_53->end;
   FUNC_11(VAR_44, VAR_53,
       VAR_48 - VAR_53->end);
   FUNC_17(VAR_44, VAR_53,
       FUNC_12(VAR_53));
   return (VAR_4);
  }







  VAR_45 = VAR_53->object.vm_object;
  VAR_46 = VAR_53->offset +
      (VAR_53->end - VAR_53->start);
  FUNC_20(VAR_45);
  if (VAR_54 != ((void*)0) && VAR_45 != ((void*)0) && VAR_45->cred != ((void*)0) &&
      !(VAR_53->eflags & VAR_17)) {

   VAR_54 = ((void*)0);
  }
 }
 if (VAR_54 != ((void*)0))
  FUNC_6(VAR_54);




 VAR_52 = FUNC_9(VAR_44);
 VAR_52->start = VAR_47;
 VAR_52->end = VAR_48;
 VAR_52->cred = ((void*)0);

 VAR_52->eflags = VAR_55;
 VAR_52->object.vm_object = VAR_45;
 VAR_52->offset = VAR_46;

 VAR_52->inheritance = VAR_56;
 VAR_52->protection = VAR_49;
 VAR_52->max_protection = VAR_50;
 VAR_52->wired_count = 0;
 VAR_52->wiring_thread = ((void*)0);
 VAR_52->read_ahead = VAR_35;
 VAR_52->next_read = VAR_47;

 FUNC_1(VAR_54 == ((void*)0) || !FUNC_0(VAR_52),
     ("overcommit: vm_map_insert leaks vm_map %p", VAR_52));
 VAR_52->cred = VAR_54;




 FUNC_10(VAR_44, VAR_52);
 if ((VAR_52->eflags & VAR_16) == 0)
  VAR_44->size += VAR_52->end - VAR_52->start;







 FUNC_17(VAR_44, VAR_53, VAR_52);
 FUNC_17(VAR_44, VAR_52, FUNC_12(VAR_52));

 if ((VAR_51 & (VAR_28 | VAR_29)) != 0) {
  FUNC_16(VAR_44, VAR_47, VAR_49, VAR_45, FUNC_2(VAR_46),
      VAR_48 - VAR_47, VAR_51 & VAR_29);
 }

 return (VAR_4);
}
