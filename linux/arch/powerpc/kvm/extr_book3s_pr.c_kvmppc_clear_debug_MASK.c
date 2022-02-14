
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int guest_debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_2)
{
 if (VAR_2->guest_debug & VAR_0) {
  u64 VAR_3 = FUNC_0(VAR_2);

  FUNC_1(VAR_2, VAR_3 & ~VAR_1);
 }
}
