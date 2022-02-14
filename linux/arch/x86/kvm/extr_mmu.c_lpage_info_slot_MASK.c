
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvm_lpage_info** lpage_info; } ;
struct kvm_memory_slot {TYPE_1__ arch; int base_gfn; } ;
struct kvm_lpage_info {int dummy; } ;
typedef int gfn_t ;


 unsigned long FUNC_0 (int ,int ,int) ;

__attribute__((used)) static struct kvm_lpage_info *FUNC_1(gfn_t VAR_0,
           struct kvm_memory_slot *VAR_1,
           int VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1->base_gfn, VAR_2);
 return &VAR_1->arch.lpage_info[VAR_2 - 2][VAR_3];
}
