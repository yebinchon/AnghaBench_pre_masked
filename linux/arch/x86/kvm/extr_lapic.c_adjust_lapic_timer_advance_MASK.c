
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int virtual_tsc_khz; struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {scalar_t__ timer_advance_ns; } ;
struct kvm_lapic {TYPE_2__ lapic_timer; } ;
typedef unsigned long long s64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (unsigned long long) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct kvm_vcpu *VAR_5,
           s64 VAR_6)
{
 struct kvm_lapic *VAR_7 = VAR_5->arch.apic;
 u32 VAR_8 = VAR_7->lapic_timer.timer_advance_ns;
 u64 VAR_9;


 if (FUNC_0(VAR_6) > VAR_0 ||
     FUNC_0(VAR_6) < VAR_1)
  return;


 if (VAR_6 < 0) {
  VAR_9 = -VAR_6 * 1000000ULL;
  FUNC_1(VAR_9, VAR_5->arch.virtual_tsc_khz);
  VAR_8 -= VAR_9/VAR_2;
 } else {

  VAR_9 = VAR_6 * 1000000ULL;
  FUNC_1(VAR_9, VAR_5->arch.virtual_tsc_khz);
  VAR_8 += VAR_9/VAR_2;
 }

 if (FUNC_2(VAR_8 > VAR_4))
  VAR_8 = VAR_3;
 VAR_7->lapic_timer.timer_advance_ns = VAR_8;
}
