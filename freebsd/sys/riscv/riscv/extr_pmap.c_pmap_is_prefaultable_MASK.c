
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;

boolean_t
FUNC_4(pmap_t VAR_2, vm_offset_t VAR_3)
{
 pt_entry_t *VAR_4;
 boolean_t VAR_5;

 VAR_5 = VAR_0;
 FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 != ((void*)0) && FUNC_3(VAR_4) != 0) {
  VAR_5 = VAR_1;
 }
 FUNC_1(VAR_2);
 return (VAR_5);
}
