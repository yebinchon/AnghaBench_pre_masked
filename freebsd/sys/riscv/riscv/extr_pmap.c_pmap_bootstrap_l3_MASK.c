
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef size_t u_int ;
typedef int pt_entry_t ;
typedef int pn_t ;
typedef int pd_entry_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int,int) ;
 int * FUNC_3 (int ,int) ;
 size_t FUNC_4 (int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static vm_offset_t
FUNC_6(vm_offset_t VAR_8, vm_offset_t VAR_9, vm_offset_t VAR_10)
{
 vm_offset_t VAR_11;
 pt_entry_t VAR_12;
 pd_entry_t *VAR_13;
 vm_paddr_t VAR_14;
 u_int VAR_15;
 pn_t VAR_16;

 FUNC_0((VAR_9 & VAR_0) == 0, ("Invalid virtual address"));

 VAR_13 = FUNC_3(VAR_7, VAR_9);
 VAR_13 = (pd_entry_t *)((uintptr_t)VAR_13 & ~(VAR_3 - 1));
 VAR_15 = FUNC_4(VAR_9);
 VAR_11 = VAR_10;

 for (; VAR_9 < VAR_6; VAR_15++, VAR_9 += VAR_1) {
  FUNC_0(VAR_15 < VAR_2, ("Invalid L2 index"));

  VAR_14 = FUNC_2(VAR_8, VAR_11);
  VAR_16 = (VAR_14 / VAR_3);
  VAR_12 = (VAR_5);
  VAR_12 |= (VAR_16 << VAR_4);
  FUNC_5(&VAR_13[VAR_15], VAR_12);
  VAR_11 += VAR_3;
 }



 FUNC_1((void *)VAR_10, 0, VAR_11 - VAR_10);

 return (VAR_11);
}
