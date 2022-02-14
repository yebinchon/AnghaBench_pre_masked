
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_pindex_t ;
typedef int vm_object_t ;
typedef scalar_t__ daddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int*,int) ;
 int FUNC_4 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,scalar_t__) ;

int
FUNC_8(vm_object_t VAR_1, vm_pindex_t VAR_2, vm_size_t VAR_3)
{
 daddr_t VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;

 FUNC_4(&VAR_7, &VAR_6);
 FUNC_0(VAR_1);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8 += VAR_10) {
  VAR_10 = VAR_3 - VAR_8;
  VAR_5 = FUNC_3(&VAR_10, 1);
  if (VAR_5 == VAR_0) {
   FUNC_6(VAR_1, VAR_2, VAR_8);
   FUNC_1(VAR_1);
   return (-1);
  }
  for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9) {
   VAR_4 = FUNC_5(VAR_1,
       VAR_2 + VAR_8 + VAR_9, VAR_5 + VAR_9);
   if (VAR_4 != VAR_0)
    FUNC_7(&VAR_7, &VAR_6,
        VAR_4);
  }
 }
 FUNC_2(VAR_7, VAR_6);
 FUNC_1(VAR_1);
 return (0);
}
