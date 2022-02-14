
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_rmap_head {int dummy; } ;
struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;


 int FUNC_0 (struct kvm*,struct kvm_rmap_head*) ;

__attribute__((used)) static int FUNC_1(struct kvm *VAR_0, struct kvm_rmap_head *VAR_1,
      struct kvm_memory_slot *VAR_2, gfn_t VAR_3, int VAR_4,
      unsigned long VAR_5)
{
 return FUNC_0(VAR_0, VAR_1);
}
