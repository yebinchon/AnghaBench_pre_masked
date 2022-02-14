
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_memory_slot {int dummy; } ;
typedef int gfn_t ;


 int FUNC_0 (int ,int,struct kvm_memory_slot*) ;
 struct kvm_memory_slot* FUNC_1 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_0, gfn_t VAR_1,
     int VAR_2)
{
 struct kvm_memory_slot *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
