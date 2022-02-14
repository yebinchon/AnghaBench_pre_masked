
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_ooffset_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_object_t ;
typedef int vm_map_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__*,int ,scalar_t__,int,int ,int ,int) ;

int
FUNC_1(vm_map_t VAR_1, vm_object_t VAR_2, vm_ooffset_t VAR_3,
    vm_offset_t *VAR_4, vm_size_t VAR_5, vm_offset_t VAR_6,
    vm_offset_t VAR_7, int VAR_8, vm_prot_t VAR_9, vm_prot_t VAR_10,
    int VAR_11)
{
 vm_offset_t VAR_12;
 int VAR_13;

 VAR_12 = *VAR_4;
 for (;;) {
  VAR_13 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7,
      VAR_8, VAR_9, VAR_10, VAR_11);
  if (VAR_13 == VAR_0 || VAR_6 >= VAR_12)
   return (VAR_13);
  *VAR_4 = VAR_12 = VAR_6;
 }
}
