
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int pt_entry_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int * FUNC_3 (int ,scalar_t__) ;

void
FUNC_4(vm_offset_t VAR_3, int VAR_4)
{
 pt_entry_t *VAR_5;
 vm_offset_t VAR_6;

 FUNC_0(VAR_3 >= VAR_1, ("usermode va %lx", VAR_3));

 for (VAR_6 = VAR_3; VAR_4-- > 0; VAR_6 += VAR_0) {
  VAR_5 = FUNC_3(VAR_2, VAR_6);
  FUNC_0(VAR_5 != ((void*)0), ("pmap_kremove: Invalid address"));
  FUNC_1(VAR_5);
 }
 FUNC_2(VAR_2, VAR_3, VAR_6);
}
