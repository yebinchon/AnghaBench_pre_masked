
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int mmu_t ;
struct TYPE_2__ {int qmap_lock; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 () ;

void
FUNC_6(mmu_t VAR_4, vm_offset_t VAR_5)
{
 if (VAR_2)
  return;

 FUNC_3(FUNC_2(VAR_1.qmap_lock), VAR_0);
 FUNC_0(FUNC_1(VAR_3) == VAR_5,
     ("moea64_quick_remove_page: invalid address"));
 FUNC_4(FUNC_2(VAR_1.qmap_lock));
 FUNC_5();
}
