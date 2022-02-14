
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int vm_map_t ;
typedef TYPE_1__* vm_map_entry_t ;
struct TYPE_13__ {scalar_t__ start; int eflags; scalar_t__ end; int wired_count; int * wiring_thread; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_2 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int ,TYPE_1__*,scalar_t__) ;
 TYPE_1__* FUNC_4 (int ,scalar_t__,scalar_t__*,int,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__,TYPE_1__**) ;
 int FUNC_11 (int ,int ,TYPE_1__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

int
FUNC_14(vm_map_t VAR_9, vm_offset_t VAR_10, vm_offset_t VAR_11,
    int VAR_12)
{
 vm_map_entry_t VAR_13, VAR_14;
 int VAR_15;
 bool VAR_16, VAR_17, VAR_18, VAR_19;

 if (VAR_10 == VAR_11)
  return (VAR_2);
 VAR_17 = (VAR_12 & VAR_6) != 0;
 VAR_19 = (VAR_12 & VAR_7) != 0;
 FUNC_9(VAR_9);
 FUNC_1(VAR_9, VAR_10, VAR_11);
 if (!FUNC_10(VAR_9, VAR_10, &VAR_14)) {
  if (VAR_17)
   VAR_14 = FUNC_6(VAR_14);
  else {
   FUNC_12(VAR_9);
   return (VAR_0);
  }
 }
 VAR_16 = 1;
 VAR_13 = VAR_14;
 VAR_15 = VAR_2;
 while (VAR_13->start < VAR_11) {
  if (VAR_13->eflags & VAR_3) {



   VAR_13 = FUNC_4(VAR_9, VAR_10, &VAR_11,
       VAR_17, VAR_13);
   if (VAR_13 == ((void*)0)) {
    if (VAR_16) {
     FUNC_12(VAR_9);
     return (VAR_0);
    }
    VAR_15 = VAR_0;
    break;
   }
   VAR_14 = VAR_16 ? VAR_13 : ((void*)0);
   continue;
  }
  VAR_16 = 0;
  FUNC_3(VAR_9, VAR_13, VAR_10);
  FUNC_2(VAR_9, VAR_13, VAR_11);




  FUNC_0((VAR_13->eflags & VAR_3) == 0 &&
      VAR_13->wiring_thread == ((void*)0),
      ("owned map entry %p", VAR_13));
  VAR_13->eflags |= VAR_3;
  VAR_13->wiring_thread = VAR_8;




  if (!VAR_17 &&
      (VAR_13->end < VAR_11 &&
      FUNC_6(VAR_13)->start > VAR_13->end)) {
   VAR_11 = VAR_13->end;
   VAR_15 = VAR_0;
   break;
  }



  if (!VAR_19 &&
      FUNC_7(VAR_13) == 0) {
   VAR_11 = VAR_13->end;
   VAR_15 = VAR_1;
   break;
  }
  VAR_13 = FUNC_6(VAR_13);
 }
 VAR_18 = 0;
 if (VAR_14 == ((void*)0) &&
     !FUNC_10(VAR_9, VAR_10, &VAR_14)) {
  FUNC_0(VAR_17, ("vm_map_unwire: lookup failed"));
  VAR_14 = FUNC_6(VAR_14);
 }
 for (VAR_13 = VAR_14; VAR_13->start < VAR_11;
     VAR_13 = FUNC_6(VAR_13)) {
  if ((VAR_13->eflags & VAR_3) == 0 ||
      VAR_13->wiring_thread != VAR_8) {
   FUNC_0(VAR_17,
       ("vm_map_unwire: !HOLESOK and new/changed entry"));
   continue;
  }

  if (VAR_15 == VAR_2 && (!VAR_19 ||
      (VAR_13->eflags & VAR_5))) {
   if (VAR_13->wired_count == 1)
    FUNC_8(VAR_9, VAR_13);
   else
    VAR_13->wired_count--;
   if (VAR_19)
    VAR_13->eflags &= ~VAR_5;
  }
  FUNC_0((VAR_13->eflags & VAR_3) != 0,
      ("vm_map_unwire: in-transition flag missing %p", VAR_13));
  FUNC_0(VAR_13->wiring_thread == VAR_8,
      ("vm_map_unwire: alien wire %p", VAR_13));
  VAR_13->eflags &= ~VAR_3;
  VAR_13->wiring_thread = ((void*)0);
  if (VAR_13->eflags & VAR_4) {
   VAR_13->eflags &= ~VAR_4;
   VAR_18 = 1;
  }
  FUNC_11(VAR_9, FUNC_5(VAR_13), VAR_13);
 }
 FUNC_11(VAR_9, FUNC_5(VAR_13), VAR_13);
 FUNC_12(VAR_9);
 if (VAR_18)
  FUNC_13(VAR_9);
 return (VAR_15);
}
