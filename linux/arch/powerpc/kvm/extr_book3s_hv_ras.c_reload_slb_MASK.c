
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct slb_shadow {TYPE_1__* save_area; int persistent; } ;
struct TYPE_6__ {void* pinned_end; struct slb_shadow* pinned_addr; } ;
struct TYPE_5__ {TYPE_3__ slb_shadow; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_4__ {int vsid; int esid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2)
{
 struct slb_shadow *VAR_3;
 unsigned long VAR_4, VAR_5;


 asm volatile("slbmte %0,%0; slbia" : : "r" (0));


 VAR_3 = VAR_2->arch.slb_shadow.pinned_addr;
 if (!VAR_3)
  return;


 VAR_5 = FUNC_2(VAR_1, FUNC_0(VAR_3->persistent), VAR_0);
 if ((void *) &VAR_3->save_area[VAR_5] > VAR_2->arch.slb_shadow.pinned_end)
  return;


 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
  unsigned long VAR_6 = FUNC_1(VAR_3->save_area[VAR_4].esid);
  unsigned long VAR_7 = FUNC_1(VAR_3->save_area[VAR_4].vsid);

  VAR_6 = (VAR_6 & ~0xFFFul) | VAR_4;
  asm volatile("slbmte %0,%1" : : "r" (VAR_7), "r" (VAR_6));
 }
}
