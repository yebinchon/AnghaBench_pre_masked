
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t vm_size_t ;
typedef size_t vm_paddr_t ;
typedef size_t vm_offset_t ;
struct TYPE_4__ {int mas1; scalar_t__ mas3; scalar_t__ mas2; } ;
typedef TYPE_1__ tlb_entry_t ;
typedef int mmu_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void
FUNC_3(mmu_t VAR_3, vm_paddr_t VAR_4, size_t VAR_5, void *VAR_6)
{
 vm_paddr_t VAR_7;
 vm_offset_t VAR_8;
 vm_size_t VAR_9;
 tlb_entry_t VAR_10;
 int VAR_11;



 if (VAR_2)
  return;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  FUNC_1(&VAR_10, VAR_11);
  if (!(VAR_10.mas1 & VAR_0))
   break;
 }


 VAR_11--;
 VAR_10.mas1 = 0;
 VAR_10.mas2 = 0;
 VAR_10.mas3 = 0;
 FUNC_2(&VAR_10, VAR_11);

 VAR_9 = 256 * 1024 * 1024;
 VAR_7 = FUNC_0(VAR_4, VAR_9);
 VAR_8 = VAR_4 - VAR_7;
 if (VAR_5 > (VAR_9 - VAR_8)) {
  VAR_11--;
  VAR_10.mas1 = 0;
  VAR_10.mas2 = 0;
  VAR_10.mas3 = 0;
  FUNC_2(&VAR_10, VAR_11);
 }
}
