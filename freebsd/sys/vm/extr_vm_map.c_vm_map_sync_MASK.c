
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_object_t ;
typedef TYPE_2__* vm_map_t ;
typedef TYPE_3__* vm_map_entry_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {int vm_object; TYPE_2__* sub_map; } ;
struct TYPE_14__ {scalar_t__ start; scalar_t__ end; int eflags; scalar_t__ offset; TYPE_1__ object; } ;
struct TYPE_13__ {unsigned int timestamp; int pmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,TYPE_3__**) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

int
FUNC_9(
 vm_map_t VAR_8,
 vm_offset_t VAR_9,
 vm_offset_t VAR_10,
 boolean_t VAR_11,
 boolean_t VAR_12)
{
 vm_map_entry_t VAR_13;
 vm_map_entry_t VAR_14;
 vm_size_t VAR_15;
 vm_object_t VAR_16;
 vm_ooffset_t VAR_17;
 unsigned int VAR_18;
 boolean_t VAR_19;

 FUNC_3(VAR_8);
 FUNC_0(VAR_8, VAR_9, VAR_10);
 if (!FUNC_4(VAR_8, VAR_9, &VAR_14)) {
  FUNC_5(VAR_8);
  return (VAR_2);
 } else if (VAR_9 == VAR_10) {
  VAR_9 = VAR_14->start;
  VAR_10 = VAR_14->end;
 }



 for (VAR_13 = VAR_14; VAR_13->start < VAR_10;
     VAR_13 = FUNC_2(VAR_13)) {
  if (VAR_12 && (VAR_13->eflags & VAR_6)) {
   FUNC_5(VAR_8);
   return (VAR_3);
  }
  if (VAR_10 > VAR_13->end &&
      VAR_13->end != FUNC_2(VAR_13)->start) {
   FUNC_5(VAR_8);
   return (VAR_2);
  }
 }

 if (VAR_12)
  FUNC_1(VAR_8->pmap, VAR_9, VAR_10);
 VAR_19 = VAR_0;





 for (VAR_13 = VAR_14; VAR_13->start < VAR_10;) {
  VAR_17 = VAR_13->offset + (VAR_9 - VAR_13->start);
  VAR_15 = (VAR_10 <= VAR_13->end ? VAR_10 : VAR_13->end) - VAR_9;
  if (VAR_13->eflags & VAR_5) {
   vm_map_t VAR_20;
   vm_map_entry_t VAR_21;
   vm_size_t VAR_22;

   VAR_20 = VAR_13->object.sub_map;
   FUNC_3(VAR_20);
   (void) FUNC_4(VAR_20, VAR_17, &VAR_21);
   VAR_22 = VAR_21->end - VAR_17;
   if (VAR_22 < VAR_15)
    VAR_15 = VAR_22;
   VAR_16 = VAR_21->object.vm_object;
   VAR_17 = VAR_21->offset + (VAR_17 - VAR_21->start);
   FUNC_5(VAR_20);
  } else {
   VAR_16 = VAR_13->object.vm_object;
  }
  FUNC_7(VAR_16);
  VAR_18 = VAR_8->timestamp;
  FUNC_5(VAR_8);
  if (!FUNC_8(VAR_16, VAR_17, VAR_15, VAR_11, VAR_12))
   VAR_19 = VAR_7;
  VAR_9 += VAR_15;
  FUNC_6(VAR_16);
  FUNC_3(VAR_8);
  if (VAR_18 == VAR_8->timestamp ||
      !FUNC_4(VAR_8, VAR_9, &VAR_13))
   VAR_13 = FUNC_2(VAR_13);
 }

 FUNC_5(VAR_8);
 return (VAR_19 ? VAR_1 : VAR_4);
}
