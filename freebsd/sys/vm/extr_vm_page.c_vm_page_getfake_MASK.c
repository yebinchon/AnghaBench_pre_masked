
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_memattr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ) ;

vm_page_t
FUNC_2(vm_paddr_t VAR_3, vm_memattr_t VAR_4)
{
 vm_page_t VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0 | VAR_1);
 FUNC_1(VAR_5, VAR_3, VAR_4);
 return (VAR_5);
}
