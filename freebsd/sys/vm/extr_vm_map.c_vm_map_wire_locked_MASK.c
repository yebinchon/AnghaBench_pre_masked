
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef int u_long ;
typedef scalar_t__ u_int ;
struct TYPE_31__ {scalar_t__ start; int eflags; int protection; scalar_t__ end; int wired_count; int * wiring_thread; } ;
struct TYPE_30__ {scalar_t__ timestamp; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (scalar_t__) ;
 int * VAR_16 ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,scalar_t__) ;
 TYPE_2__* FUNC_8 (TYPE_1__*,scalar_t__,scalar_t__*,int,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,scalar_t__,TYPE_2__**) ;
 int FUNC_14 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,TYPE_2__*,scalar_t__) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;

int
FUNC_21(vm_map_t VAR_17, vm_offset_t VAR_18, vm_offset_t VAR_19, int VAR_20)
{
 vm_map_entry_t VAR_21, VAR_22, VAR_23;
 vm_offset_t VAR_24, VAR_25, VAR_26;
 u_long VAR_27;
 u_int VAR_28;
 int VAR_29;
 bool VAR_30, VAR_31, VAR_32, VAR_33;
 vm_prot_t VAR_34;

 FUNC_1(VAR_17);

 if (VAR_18 == VAR_19)
  return (VAR_2);
 VAR_34 = 0;
 if (VAR_20 & VAR_11)
  VAR_34 |= VAR_15;
 VAR_31 = (VAR_20 & VAR_9) != 0;
 VAR_33 = (VAR_20 & VAR_10) != 0;
 FUNC_2(VAR_17, VAR_18, VAR_19);
 if (!FUNC_13(VAR_17, VAR_18, &VAR_22)) {
  if (VAR_31)
   VAR_22 = FUNC_10(VAR_22);
  else
   return (VAR_0);
 }
 VAR_30 = 1;
 VAR_21 = VAR_22;
 while (VAR_21->start < VAR_19) {
  if (VAR_21->eflags & VAR_3) {



   VAR_21 = FUNC_8(VAR_17, VAR_18, &VAR_19,
       VAR_31, VAR_21);
   if (VAR_21 == ((void*)0)) {
    if (VAR_30)
     return (VAR_0);
    VAR_29 = VAR_0;
    goto done;
   }
   VAR_22 = VAR_30 ? VAR_21 : ((void*)0);
   continue;
  }
  VAR_30 = 0;
  FUNC_7(VAR_17, VAR_21, VAR_18);
  FUNC_6(VAR_17, VAR_21, VAR_19);




  FUNC_0((VAR_21->eflags & VAR_3) == 0 &&
      VAR_21->wiring_thread == ((void*)0),
      ("owned map entry %p", VAR_21));
  VAR_21->eflags |= VAR_3;
  VAR_21->wiring_thread = VAR_16;
  if ((VAR_21->protection & (VAR_14 | VAR_12)) == 0
      || (VAR_21->protection & VAR_34) != VAR_34) {
   VAR_21->eflags |= VAR_6;
   if (!VAR_31) {
    VAR_19 = VAR_21->end;
    VAR_29 = VAR_0;
    goto done;
   }
  } else if (VAR_21->wired_count == 0) {
   VAR_21->wired_count++;

   VAR_27 = FUNC_3(VAR_21->end - VAR_21->start);
   if (VAR_33 && !FUNC_19(VAR_27)) {
    FUNC_18(VAR_17, VAR_21,
        VAR_21->start);
    VAR_19 = VAR_21->end;
    VAR_29 = VAR_1;
    goto done;
   }





   VAR_26 = VAR_21->start;
   VAR_25 = VAR_21->end;
   VAR_28 = VAR_17->timestamp;
   FUNC_5(VAR_17);
   FUNC_16(VAR_17);

   VAR_24 = VAR_26;
   do {




    if ((VAR_29 = FUNC_4(VAR_17, VAR_24,
        VAR_13, VAR_8, ((void*)0))) !=
        VAR_2)
     break;
   } while ((VAR_24 += VAR_7) < VAR_25);
   FUNC_12(VAR_17);
   FUNC_15(VAR_17);
   if (VAR_28 + 1 != VAR_17->timestamp) {






    if (!FUNC_13(VAR_17, VAR_26,
        &VAR_23))
     FUNC_0(0,
         ("vm_map_wire: lookup failed"));
    if (VAR_21 == VAR_22)
     VAR_22 = VAR_23;
    else
     VAR_22 = ((void*)0);
    VAR_21 = VAR_23;
    while (VAR_21->end < VAR_25) {






     if (VAR_29 != VAR_2 &&
         VAR_24 < VAR_21->end)
      FUNC_18(VAR_17,
          VAR_21, VAR_24);
     VAR_21 = FUNC_10(VAR_21);
    }
   }
   if (VAR_29 != VAR_2) {
    FUNC_18(VAR_17, VAR_21, VAR_24);
    if (VAR_33)
     FUNC_20(VAR_27);
    VAR_19 = VAR_21->end;
    goto done;
   }
  } else if (!VAR_33 ||
      (VAR_21->eflags & VAR_5) == 0) {
   VAR_21->wired_count++;
  }




  if (!VAR_31 &&
      VAR_21->end < VAR_19 &&
      FUNC_10(VAR_21)->start > VAR_21->end) {
   VAR_19 = VAR_21->end;
   VAR_29 = VAR_0;
   goto done;
  }
  VAR_21 = FUNC_10(VAR_21);
 }
 VAR_29 = VAR_2;
done:
 VAR_32 = 0;
 if (VAR_22 == ((void*)0) &&
     !FUNC_13(VAR_17, VAR_18, &VAR_22)) {
  FUNC_0(VAR_31, ("vm_map_wire: lookup failed"));
  VAR_22 = FUNC_10(VAR_22);
 }
 for (VAR_21 = VAR_22; VAR_21->start < VAR_19;
     VAR_21 = FUNC_10(VAR_21)) {
  if ((VAR_21->eflags & VAR_3) == 0 ||
      VAR_21->wiring_thread != VAR_16) {
   FUNC_0(VAR_31,
       ("vm_map_wire: !HOLESOK and new/changed entry"));
   continue;
  }

  if ((VAR_21->eflags & VAR_6) != 0) {

  } else if (VAR_29 == VAR_2) {
   if (VAR_33)
    VAR_21->eflags |= VAR_5;
  } else if (VAR_21->wired_count == -1) {




   VAR_21->wired_count = 0;
  } else if (!VAR_33 ||
      (VAR_21->eflags & VAR_5) == 0) {




   if (VAR_21->wired_count == 1) {
    FUNC_11(VAR_17, VAR_21);
    if (VAR_33)
     FUNC_20(
         FUNC_3(VAR_21->end - VAR_21->start));
   } else
    VAR_21->wired_count--;
  }
  FUNC_0((VAR_21->eflags & VAR_3) != 0,
      ("vm_map_wire: in-transition flag missing %p", VAR_21));
  FUNC_0(VAR_21->wiring_thread == VAR_16,
      ("vm_map_wire: alien wire %p", VAR_21));
  VAR_21->eflags &= ~(VAR_3 |
      VAR_6);
  VAR_21->wiring_thread = ((void*)0);
  if (VAR_21->eflags & VAR_4) {
   VAR_21->eflags &= ~VAR_4;
   VAR_32 = 1;
  }
  FUNC_14(VAR_17, FUNC_9(VAR_21), VAR_21);
 }
 FUNC_14(VAR_17, FUNC_9(VAR_21), VAR_21);
 if (VAR_32)
  FUNC_17(VAR_17);
 return (VAR_29);
}
