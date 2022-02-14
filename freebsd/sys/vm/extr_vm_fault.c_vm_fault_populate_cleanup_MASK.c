
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_pindex_t ;
typedef int vm_page_t ;
typedef int vm_object_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(vm_object_t VAR_0, vm_pindex_t VAR_1,
    vm_pindex_t VAR_2)
{
 vm_page_t VAR_3;
 vm_pindex_t VAR_4;

 FUNC_1(VAR_0);
 FUNC_0(VAR_1 <= VAR_2);
 for (VAR_4 = VAR_1, VAR_3 = FUNC_5(VAR_0, VAR_4);
     VAR_4 <= VAR_2; VAR_4++, VAR_3 = FUNC_6(VAR_3)) {
  FUNC_2(VAR_3);
  FUNC_4(VAR_3);
  FUNC_3(VAR_3);
  FUNC_7(VAR_3);
  FUNC_8(VAR_3);
 }
}
