
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_mmu {unsigned int root_level; unsigned int last_nonleaf_level; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1, struct kvm_mmu *VAR_2)
{
 unsigned VAR_3 = VAR_2->root_level;

 VAR_2->last_nonleaf_level = VAR_3;
 if (VAR_3 == VAR_0 && FUNC_0(VAR_1))
  VAR_2->last_nonleaf_level++;
}
