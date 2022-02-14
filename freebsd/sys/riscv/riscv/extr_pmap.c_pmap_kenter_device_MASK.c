
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pn_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int) ;
 int* FUNC_2 (int ,int) ;
 int FUNC_3 (int*,int) ;

void
FUNC_4(vm_offset_t VAR_6, vm_size_t VAR_7, vm_paddr_t VAR_8)
{
 pt_entry_t VAR_9;
 pt_entry_t *VAR_10;
 vm_offset_t VAR_11;
 pn_t VAR_12;

 FUNC_0((VAR_8 & VAR_0) == 0,
    ("pmap_kenter_device: Invalid physical address"));
 FUNC_0((VAR_6 & VAR_0) == 0,
    ("pmap_kenter_device: Invalid virtual address"));
 FUNC_0((VAR_7 & VAR_1) == 0,
     ("pmap_kenter_device: Mapping is not page-sized"));

 VAR_11 = VAR_6;
 while (VAR_7 != 0) {
  VAR_10 = FUNC_2(VAR_5, VAR_11);
  FUNC_0(VAR_10 != ((void*)0), ("Invalid page table, va: 0x%lx", VAR_11));

  VAR_12 = (VAR_8 / VAR_2);
  VAR_9 = VAR_3;
  VAR_9 |= (VAR_12 << VAR_4);
  FUNC_3(VAR_10, VAR_9);

  VAR_11 += VAR_2;
  VAR_8 += VAR_2;
  VAR_7 -= VAR_2;
 }
 FUNC_1(VAR_5, VAR_6, VAR_11);
}
