
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_size_t ;
typedef size_t vm_paddr_t ;
typedef size_t vm_offset_t ;
typedef int mmu_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (size_t,size_t,size_t,int ) ;

void
FUNC_2(mmu_t VAR_2, vm_paddr_t VAR_3, size_t VAR_4, void **VAR_5)
{
 vm_paddr_t VAR_6;
 vm_offset_t VAR_7;
 vm_size_t VAR_8;


 if (VAR_1) {
  *VAR_5 = (void *)(vm_offset_t)VAR_3;
  return;
 }



 VAR_8 = 256 * 1024 * 1024;
 VAR_6 = FUNC_0(VAR_3, VAR_8);
 VAR_7 = VAR_3 - VAR_6;
 *VAR_5 = (void *)VAR_8;
 FUNC_1((vm_offset_t)VAR_5, VAR_6, VAR_8, VAR_0);

 if (VAR_4 > (VAR_8 - VAR_7))
  FUNC_1((vm_offset_t)(VAR_5 + VAR_8), VAR_6 + VAR_8, VAR_8,
      VAR_0);
}
