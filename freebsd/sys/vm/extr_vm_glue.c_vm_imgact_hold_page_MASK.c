
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
typedef int vm_page_t ;
typedef int vm_ooffset_t ;
typedef int vm_object_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int) ;

__attribute__((used)) static vm_page_t
FUNC_4(vm_object_t VAR_3, vm_ooffset_t VAR_4)
{
 vm_page_t VAR_5;
 vm_pindex_t VAR_6;

 VAR_6 = FUNC_0(VAR_4);
 FUNC_1(VAR_3);
 (void)FUNC_3(&VAR_5, VAR_3, VAR_6,
     VAR_1 | VAR_0 | VAR_2);
 FUNC_2(VAR_3);
 return (VAR_5);
}
