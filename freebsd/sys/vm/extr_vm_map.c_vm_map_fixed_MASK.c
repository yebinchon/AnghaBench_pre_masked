
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_ooffset_t ;
typedef scalar_t__ vm_offset_t ;
typedef int * vm_object_t ;
typedef int vm_map_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int *,int ,scalar_t__,scalar_t__,int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int ,int ,int ,int) ;
 int FUNC_6 (int ) ;

int
FUNC_7(vm_map_t VAR_4, vm_object_t VAR_5, vm_ooffset_t VAR_6,
    vm_offset_t VAR_7, vm_size_t VAR_8, vm_prot_t VAR_9,
    vm_prot_t VAR_10, int VAR_11)
{
 vm_offset_t VAR_12;
 int VAR_13;

 VAR_12 = VAR_7 + VAR_8;
 FUNC_0((VAR_11 & (VAR_1 | VAR_2)) == 0 ||
     VAR_5 == ((void*)0),
     ("vm_map_fixed: non-NULL backing object for stack"));
 FUNC_4(VAR_4);
 FUNC_1(VAR_4, VAR_7, VAR_12);
 if ((VAR_11 & VAR_0) == 0)
  FUNC_2(VAR_4, VAR_7, VAR_12);
 if ((VAR_11 & (VAR_1 | VAR_2)) != 0) {
  VAR_13 = FUNC_5(VAR_4, VAR_7, VAR_8, VAR_3,
      VAR_9, VAR_10, VAR_11);
 } else {
  VAR_13 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_12,
      VAR_9, VAR_10, VAR_11);
 }
 FUNC_6(VAR_4);
 return (VAR_13);
}
