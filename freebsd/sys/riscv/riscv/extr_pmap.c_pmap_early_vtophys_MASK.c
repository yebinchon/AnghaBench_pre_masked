
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef size_t u_int ;
typedef int pt_entry_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_1 (int,int,size_t*,size_t*) ;

__attribute__((used)) static vm_paddr_t
FUNC_2(vm_offset_t VAR_4, vm_offset_t VAR_5)
{
 u_int VAR_6, VAR_7;
 pt_entry_t *VAR_8;
 vm_paddr_t VAR_9;

 VAR_8 = FUNC_1(VAR_4, VAR_5, &VAR_6, &VAR_7);


 FUNC_0((VAR_8[VAR_7] & VAR_3) != 0,
  ("Invalid bootstrap L2 table"));


 VAR_9 = (VAR_8[VAR_7] >> VAR_2) << VAR_1;
 VAR_9 += (VAR_5 & VAR_0);

 return (VAR_9);
}
