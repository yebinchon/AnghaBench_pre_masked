
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
typedef int * vm_page_t ;
typedef int vm_object_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;

void
FUNC_5(vm_object_t VAR_2, vm_pindex_t VAR_3, int VAR_4)
{
 vm_page_t VAR_5;

 if ((VAR_4 & VAR_0) == 0)
  FUNC_0(VAR_2);
 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5 != ((void*)0)) {
  FUNC_3(VAR_5);
  FUNC_2(&VAR_1, 1);
 }
 if ((VAR_4 & VAR_0) == 0)
  FUNC_1(VAR_2);
}
