
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
typedef int vm_object_t ;
typedef int daddr_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static boolean_t
FUNC_2(vm_object_t VAR_4, vm_pindex_t VAR_5, int *VAR_6,
    int *VAR_7)
{
 daddr_t VAR_8, VAR_9;
 int VAR_10;

 FUNC_0(VAR_4);




 VAR_9 = FUNC_1(VAR_4, VAR_5, 0);
 if (VAR_9 == VAR_1) {
  if (VAR_6)
   *VAR_6 = 0;
  if (VAR_7)
   *VAR_7 = 0;
  return (VAR_0);
 }




 if (VAR_6 != ((void*)0)) {
  for (VAR_10 = 1; VAR_10 < VAR_2; VAR_10++) {
   if (VAR_10 > VAR_5)
    break;
   VAR_8 = FUNC_1(VAR_4, VAR_5 - VAR_10, 0);
   if (VAR_8 != VAR_9 - VAR_10)
    break;
  }
  *VAR_6 = VAR_10 - 1;
 }




 if (VAR_7 != ((void*)0)) {
  for (VAR_10 = 1; VAR_10 < VAR_2; VAR_10++) {
   VAR_8 = FUNC_1(VAR_4, VAR_5 + VAR_10, 0);
   if (VAR_8 != VAR_9 + VAR_10)
    break;
  }
  *VAR_7 = VAR_10 - 1;
 }
 return (VAR_3);
}
