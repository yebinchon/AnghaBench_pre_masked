
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(vm_offset_t VAR_1, vm_size_t VAR_2)
{




 if (VAR_1 & (VAR_0 - 1))
  FUNC_1(VAR_1, 1);
 if ((VAR_1 + VAR_2) & (VAR_0 - 1))
  FUNC_1(VAR_1 + VAR_2, 1);

 FUNC_0(VAR_1, VAR_2);
}
