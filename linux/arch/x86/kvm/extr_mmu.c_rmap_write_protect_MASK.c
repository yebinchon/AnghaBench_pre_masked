
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int kvm; } ;
struct kvm_memory_slot {int dummy; } ;


 int FUNC_0 (int ,struct kvm_memory_slot*,int ) ;
 struct kvm_memory_slot* FUNC_1 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_0, u64 VAR_1)
{
 struct kvm_memory_slot *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 return FUNC_0(VAR_0->kvm, VAR_2, VAR_1);
}
