
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_pindex_t ;
typedef scalar_t__ vm_offset_t ;
typedef int * vm_object_t ;
typedef TYPE_2__* vm_map_t ;
typedef TYPE_3__* vm_map_entry_t ;
typedef int boolean_t ;
struct TYPE_8__ {int * vm_object; } ;
struct TYPE_10__ {int eflags; int protection; scalar_t__ wired_count; TYPE_1__ object; scalar_t__ offset; scalar_t__ start; } ;
struct TYPE_9__ {int system_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,TYPE_3__**) ;

int
FUNC_2(vm_map_t *VAR_9,
       vm_offset_t VAR_10,
       vm_prot_t VAR_11,
       vm_map_entry_t *VAR_12,
       vm_object_t *VAR_13,
       vm_pindex_t *VAR_14,
       vm_prot_t *VAR_15,
       boolean_t *VAR_16)
{
 vm_map_entry_t VAR_17;
 vm_map_t VAR_18 = *VAR_9;
 vm_prot_t VAR_19;
 vm_prot_t VAR_20 = VAR_11;




 if (!FUNC_1(VAR_18, VAR_10, VAR_12))
  return (VAR_1);

 VAR_17 = *VAR_12;




 if (VAR_17->eflags & VAR_4)
  return (VAR_0);




 VAR_19 = VAR_17->protection;
 VAR_20 &= VAR_7 | VAR_8 | VAR_6;
 if ((VAR_20 & VAR_19) != VAR_20)
  return (VAR_2);





 *VAR_16 = (VAR_17->wired_count != 0);
 if (*VAR_16)
  VAR_20 = VAR_17->protection;

 if (VAR_17->eflags & VAR_5) {



  if (VAR_20 & VAR_8)
   return (VAR_0);




  VAR_19 &= ~VAR_8;
 }




 if (VAR_17->object.vm_object == ((void*)0) && !VAR_18->system_map)
  return (VAR_0);





 *VAR_14 = FUNC_0((VAR_10 - VAR_17->start) + VAR_17->offset);
 *VAR_13 = VAR_17->object.vm_object;

 *VAR_15 = VAR_19;
 return (VAR_3);
}
