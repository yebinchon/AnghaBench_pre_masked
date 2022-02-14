
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_memattr_t ;
typedef int mmu_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void *
FUNC_5(mmu_t VAR_2, vm_paddr_t VAR_3, vm_size_t VAR_4, vm_memattr_t VAR_5)
{
 vm_offset_t VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_8 = FUNC_4(VAR_3);
 VAR_9 = VAR_3 & VAR_0;
 VAR_4 = FUNC_3(VAR_9 + VAR_4, VAR_1);

 VAR_6 = FUNC_0(VAR_4);

 if (!VAR_6)
  FUNC_2("moea64_mapdev: Couldn't alloc kernel virtual memory");

 for (VAR_7 = VAR_6; VAR_4 > 0;) {
  FUNC_1(VAR_2, VAR_7, VAR_8, VAR_5);
  VAR_4 -= VAR_1;
  VAR_7 += VAR_1;
  VAR_8 += VAR_1;
 }

 return ((void *)(VAR_6 + VAR_9));
}
