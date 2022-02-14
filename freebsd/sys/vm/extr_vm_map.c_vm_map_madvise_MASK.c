
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* vm_map_t ;
typedef TYPE_3__* vm_map_entry_t ;
struct TYPE_28__ {int * backing_object; } ;
struct TYPE_25__ {TYPE_4__* vm_object; } ;
struct TYPE_27__ {scalar_t__ start; int eflags; scalar_t__ end; scalar_t__ wired_count; TYPE_1__ object; int protection; int offset; } ;
struct TYPE_26__ {int pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,scalar_t__) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,scalar_t__,TYPE_3__**) ;
 int FUNC_13 (TYPE_2__*,scalar_t__,int ,TYPE_4__*,scalar_t__,int ,int ) ;
 int FUNC_14 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_4__*,scalar_t__,scalar_t__,int) ;

int
FUNC_18(
 vm_map_t VAR_8,
 vm_offset_t VAR_9,
 vm_offset_t VAR_10,
 int VAR_11)
{
 vm_map_entry_t VAR_12, VAR_13;
 bool VAR_14;







 switch(VAR_11) {
 case 132:
 case 129:
 case 130:
 case 131:
 case 137:
 case 133:
 case 136:
  if (VAR_9 == VAR_10)
   return (0);
  VAR_14 = 1;
  FUNC_10(VAR_8);
  break;
 case 128:
 case 135:
 case 134:
  if (VAR_9 == VAR_10)
   return (0);
  VAR_14 = 0;
  FUNC_11(VAR_8);
  break;
 default:
  return (VAR_0);
 }




 FUNC_1(VAR_8, VAR_9, VAR_10);

 if (FUNC_12(VAR_8, VAR_9, &VAR_13)) {
  if (VAR_14)
   FUNC_6(VAR_8, VAR_13, VAR_9);
 } else {
  VAR_13 = FUNC_9(VAR_13);
 }

 if (VAR_14) {






  for (VAR_12 = VAR_13; VAR_12->start < VAR_10;
      VAR_12 = FUNC_9(VAR_12)) {
   if (VAR_12->eflags & VAR_4)
    continue;

   FUNC_5(VAR_8, VAR_12, VAR_10);

   switch (VAR_11) {
   case 132:
    FUNC_8(VAR_12, VAR_1);
    break;
   case 129:
    FUNC_8(VAR_12, VAR_3);
    break;
   case 130:
    FUNC_8(VAR_12, VAR_2);
    break;
   case 131:
    VAR_12->eflags |= VAR_6;
    break;
   case 137:
    VAR_12->eflags &= ~VAR_6;
    break;
   case 133:
    VAR_12->eflags |= VAR_5;
    break;
   case 136:
    VAR_12->eflags &= ~VAR_5;
    break;
   default:
    break;
   }
   FUNC_14(VAR_8,
       FUNC_7(VAR_12), VAR_12);
  }
  FUNC_14(VAR_8, FUNC_7(VAR_12),
      VAR_12);
  FUNC_15(VAR_8);
 } else {
  vm_pindex_t VAR_15, VAR_16;
  for (VAR_12 = VAR_13; VAR_12->start < VAR_10;
      VAR_12 = FUNC_9(VAR_12)) {
   vm_offset_t VAR_17, VAR_18;

   if (VAR_12->eflags & VAR_4)
    continue;
   if (VAR_11 == 134 &&
       VAR_12->object.vm_object != ((void*)0) &&
       VAR_12->object.vm_object->backing_object != ((void*)0))
    continue;

   VAR_15 = FUNC_0(VAR_12->offset);
   VAR_16 = VAR_15 + FUNC_2(VAR_12->end - VAR_12->start);
   VAR_18 = VAR_12->start;
   VAR_17 = VAR_12->end;

   if (VAR_12->start < VAR_9) {
    VAR_15 += FUNC_2(VAR_9 - VAR_12->start);
    VAR_18 = VAR_9;
   }
   if (VAR_12->end > VAR_10) {
    VAR_16 -= FUNC_2(VAR_12->end - VAR_10);
    VAR_17 = VAR_10;
   }

   if (VAR_15 >= VAR_16)
    continue;
   if (VAR_11 == 135 || VAR_11 == 134)
    FUNC_3(VAR_8->pmap, VAR_18, VAR_17,
        VAR_11);

   FUNC_17(VAR_12->object.vm_object, VAR_15,
       VAR_16, VAR_11);






   if (VAR_11 == 128 &&
       VAR_12->wired_count == 0) {
    FUNC_13(VAR_8,
        VAR_18,
        VAR_12->protection,
        VAR_12->object.vm_object,
        VAR_15,
        FUNC_4(VAR_16 - VAR_15),
        VAR_7
    );
   }
  }
  FUNC_16(VAR_8);
 }
 return (0);
}
