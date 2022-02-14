
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;

void
FUNC_2(vm_paddr_t VAR_3, vm_paddr_t VAR_4)
{
 vm_paddr_t VAR_5;

 FUNC_0((VAR_3 & VAR_0) == 0,
     ("vm_phys_define_seg: start is not page aligned"));
 FUNC_0((VAR_4 & VAR_0) == 0,
     ("vm_phys_define_seg: end is not page aligned"));





 VAR_5 = VAR_3;
 FUNC_1(VAR_5, VAR_4);
}
