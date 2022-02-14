
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {scalar_t__ expired_tscdeadline; scalar_t__ advance_expire_delta; } ;
struct kvm_lapic {TYPE_2__ lapic_timer; } ;


 int FUNC_0 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_1 (struct kvm_vcpu*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_1)
{
 struct kvm_lapic *VAR_2 = VAR_1->arch.apic;
 u64 VAR_3, VAR_4;

 if (VAR_2->lapic_timer.expired_tscdeadline == 0)
  return;

 VAR_4 = VAR_2->lapic_timer.expired_tscdeadline;
 VAR_2->lapic_timer.expired_tscdeadline = 0;
 VAR_3 = FUNC_2(VAR_1, FUNC_3());
 VAR_2->lapic_timer.advance_expire_delta = VAR_3 - VAR_4;

 if (VAR_3 < VAR_4)
  FUNC_0(VAR_1, VAR_4 - VAR_3);

 if (VAR_0)
  FUNC_1(VAR_1, VAR_2->lapic_timer.advance_expire_delta);
}
