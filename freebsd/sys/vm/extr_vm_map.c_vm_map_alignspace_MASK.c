
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_ooffset_t ;
typedef int vm_offset_t ;
typedef int vm_object_t ;
typedef int vm_map_t ;
typedef int uintmax_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(vm_map_t VAR_2, vm_object_t VAR_3, vm_ooffset_t VAR_4,
    vm_offset_t *VAR_5, vm_size_t VAR_6, vm_offset_t VAR_7,
    vm_offset_t VAR_8)
{
 vm_offset_t VAR_9, VAR_10;

 FUNC_1(VAR_2);
 VAR_10 = *VAR_5;
 FUNC_0(VAR_10 == FUNC_3(VAR_2, VAR_10, VAR_6),
     ("caller failed to provide space %#jx at address %p",
      (uintmax_t)VAR_6, (void *)VAR_10));
 for (;;) {




  if (VAR_8 == 0)
   FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
  else if ((*VAR_5 & (VAR_8 - 1)) != 0) {
   *VAR_5 &= ~(VAR_8 - 1);
   *VAR_5 += VAR_8;
  }
  VAR_9 = *VAR_5;
  if (VAR_9 == VAR_10) {




   return (VAR_1);
  }






  if (VAR_9 < VAR_10)
   return (VAR_0);
  *VAR_5 = FUNC_3(VAR_2, VAR_9, VAR_6);
  if (*VAR_5 + VAR_6 > FUNC_4(VAR_2) ||
      (VAR_7 != 0 && *VAR_5 + VAR_6 > VAR_7))
   return (VAR_0);
  VAR_10 = *VAR_5;
  if (VAR_10 == VAR_9) {





   return (VAR_1);
  }
 }
}
