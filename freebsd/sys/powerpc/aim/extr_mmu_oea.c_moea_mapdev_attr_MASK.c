
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int vm_memattr_t ;
typedef int mmu_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,int,scalar_t__) ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

void *
FUNC_7(mmu_t VAR_2, vm_paddr_t VAR_3, vm_size_t VAR_4, vm_memattr_t VAR_5)
{
 vm_offset_t VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_8 = FUNC_6(VAR_3);
 VAR_9 = VAR_3 & VAR_0;
 VAR_4 = FUNC_4(VAR_9 + VAR_4, VAR_1);






 for (VAR_10 = 0; VAR_10 < 16; VAR_10++) {
  if (FUNC_1(VAR_10, VAR_3, VAR_4) == 0)
   return ((void *) VAR_3);
 }

 VAR_6 = FUNC_0(VAR_4);
 if (!VAR_6)
  FUNC_3("moea_mapdev: Couldn't alloc kernel virtual memory");

 for (VAR_7 = VAR_6; VAR_4 > 0;) {
  FUNC_2(VAR_2, VAR_7, VAR_8, VAR_5);
  FUNC_5(VAR_7);
  VAR_4 -= VAR_1;
  VAR_7 += VAR_1;
  VAR_8 += VAR_1;
 }

 return ((void *)(VAR_6 + VAR_9));
}
