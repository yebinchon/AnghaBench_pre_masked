
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
typedef int vm_object_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static boolean_t
FUNC_1(vm_object_t VAR_2, vm_pindex_t VAR_3, int *VAR_4,
    int *VAR_5)
{
 vm_pindex_t VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_3, VAR_1);
 VAR_7 = VAR_6 + VAR_1 - 1;
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_3 - VAR_6;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_7 - VAR_3;
 return (VAR_0);
}
