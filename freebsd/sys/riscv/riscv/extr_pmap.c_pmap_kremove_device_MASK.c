
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int) ;
 int * FUNC_3 (int ,int) ;

void
FUNC_4(vm_offset_t VAR_4, vm_size_t VAR_5)
{
 pt_entry_t *VAR_6;
 vm_offset_t VAR_7;

 FUNC_0((VAR_4 & VAR_0) == 0,
    ("pmap_kremove_device: Invalid virtual address"));
 FUNC_0((VAR_5 & VAR_1) == 0,
     ("pmap_kremove_device: Mapping is not page-sized"));

 VAR_7 = VAR_4;
 while (VAR_5 != 0) {
  VAR_6 = FUNC_3(VAR_3, VAR_7);
  FUNC_0(VAR_6 != ((void*)0), ("Invalid page table, va: 0x%lx", VAR_7));
  FUNC_1(VAR_6);

  VAR_7 += VAR_2;
  VAR_5 -= VAR_2;
 }

 FUNC_2(VAR_3, VAR_4, VAR_7);
}
