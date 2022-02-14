
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_offset_t ;
typedef size_t u_int ;
typedef int pt_entry_t ;
typedef int pd_entry_t ;


 int FUNC_0 (int,char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static pt_entry_t *
FUNC_2(vm_offset_t VAR_4, vm_offset_t VAR_5, u_int *VAR_6,
    u_int *VAR_7)
{
 pt_entry_t *VAR_8;
 pd_entry_t *VAR_9;

 VAR_9 = (pd_entry_t *)VAR_4;
 *VAR_6 = (VAR_5 >> VAR_0) & VAR_1;


 FUNC_0((VAR_9[*VAR_6] & VAR_2) == 0,
  ("Invalid bootstrap L1 table"));


 VAR_8 = (pt_entry_t *)VAR_3;
 *VAR_7 = FUNC_1(VAR_5);

 return (VAR_8);
}
