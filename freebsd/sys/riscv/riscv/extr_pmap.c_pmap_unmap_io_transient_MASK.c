
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

void
FUNC_3(vm_page_t VAR_1[], vm_offset_t VAR_2[], int VAR_3,
    boolean_t VAR_4)
{
 vm_paddr_t VAR_5;
 int VAR_6;

 if (!VAR_4)
  FUNC_2();
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = FUNC_0(VAR_1[VAR_6]);
  if (VAR_5 >= VAR_0) {
   FUNC_1("RISCVTODO: pmap_unmap_io_transient: Unmap data");
  }
 }
}
