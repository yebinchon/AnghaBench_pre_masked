
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
typedef int vm_object_t ;
typedef scalar_t__ daddr_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool
FUNC_7(vm_object_t VAR_1, vm_object_t VAR_2,
    vm_pindex_t VAR_3, daddr_t VAR_4)
{
 daddr_t VAR_5;

 if (FUNC_4(VAR_2, VAR_3, 0) != VAR_0) {

  return (0);
 }





 FUNC_5(VAR_1, 1);
 FUNC_2(VAR_1);
 FUNC_5(VAR_2, 1);
 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_5 == VAR_0,
     ("Unexpected destination swapblk"));
 FUNC_6(VAR_2);
 FUNC_1(VAR_1);
 FUNC_6(VAR_1);
 return (1);
}
