
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_6__ {scalar_t__ tsc_scaling_ratio; int virtual_tsc_khz; TYPE_2__* apic; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_4__ {unsigned long long timer_advance_ns; } ;
struct TYPE_5__ {TYPE_1__ lapic_timer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long long,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (unsigned long long,int ) ;
 int FUNC_3 (int ,unsigned long long,unsigned long long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct kvm_vcpu*,unsigned long long) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_6(struct kvm_vcpu *VAR_2, u64 VAR_3)
{
 u64 VAR_4 = VAR_2->arch.apic->lapic_timer.timer_advance_ns;







 if (VAR_2->arch.tsc_scaling_ratio == VAR_0) {
  FUNC_0(FUNC_2(VAR_3,
   FUNC_5(VAR_2, VAR_4)));
 } else {
  u64 VAR_5 = VAR_3 * 1000000ULL;
  FUNC_1(VAR_5, VAR_2->arch.virtual_tsc_khz);
  FUNC_4(FUNC_3(VAR_1, VAR_5, VAR_4));
 }
}
