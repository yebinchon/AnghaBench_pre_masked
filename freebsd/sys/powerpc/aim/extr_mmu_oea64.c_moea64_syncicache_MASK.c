
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef scalar_t__ pmap_t ;
typedef int mmu_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(mmu_t VAR_6, pmap_t VAR_7, vm_offset_t VAR_8, vm_paddr_t VAR_9,
    vm_size_t VAR_10)
{
 if (!VAR_5) {




  FUNC_1((void *)(uintptr_t)VAR_9, VAR_10);
 } else if (VAR_7 == VAR_2) {
  FUNC_1((void *)VAR_8, VAR_10);
 } else if (VAR_1) {
  FUNC_1((void *)(uintptr_t)FUNC_0(VAR_9), VAR_10);
 } else {


  FUNC_3(&VAR_3);

  FUNC_2(VAR_6, 1, VAR_9 & ~VAR_0);
  FUNC_1((void *)(VAR_4[1] +
      (VAR_8 & VAR_0)), VAR_10);

  FUNC_4(&VAR_3);
 }
}
