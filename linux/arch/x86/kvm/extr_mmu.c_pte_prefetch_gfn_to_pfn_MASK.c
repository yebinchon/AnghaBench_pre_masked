
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_memory_slot {int dummy; } ;
typedef int kvm_pfn_t ;
typedef int gfn_t ;


 int VAR_0 ;
 struct kvm_memory_slot* FUNC_0 (struct kvm_vcpu*,int ,int) ;
 int FUNC_1 (struct kvm_memory_slot*,int ) ;

__attribute__((used)) static kvm_pfn_t FUNC_2(struct kvm_vcpu *VAR_1, gfn_t VAR_2,
         bool VAR_3)
{
 struct kvm_memory_slot *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return VAR_0;

 return FUNC_1(VAR_4, VAR_2);
}
