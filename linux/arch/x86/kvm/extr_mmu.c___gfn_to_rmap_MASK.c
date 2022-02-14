
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_rmap_head {int dummy; } ;
struct TYPE_2__ {struct kvm_rmap_head** rmap; } ;
struct kvm_memory_slot {TYPE_1__ arch; int base_gfn; } ;
typedef int gfn_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int ,int) ;

__attribute__((used)) static struct kvm_rmap_head *FUNC_1(gfn_t VAR_1, int VAR_2,
        struct kvm_memory_slot *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3->base_gfn, VAR_2);
 return &VAR_3->arch.rmap[VAR_2 - VAR_0][VAR_4];
}
