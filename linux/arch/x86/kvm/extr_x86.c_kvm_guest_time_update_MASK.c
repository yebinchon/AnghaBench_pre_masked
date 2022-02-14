
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct TYPE_5__ {int flags; scalar_t__ system_time; scalar_t__ tsc_timestamp; int tsc_to_system_mul; int tsc_shift; } ;
struct kvm_vcpu_arch {unsigned long hw_tsc_khz; TYPE_2__ hv_clock; scalar_t__ pv_time_enabled; scalar_t__ last_guest_tsc; scalar_t__ tsc_catchup; } ;
struct kvm_vcpu {TYPE_1__* kvm; struct kvm_vcpu_arch arch; } ;
struct kvm_arch {int use_master_clock; scalar_t__ master_cycle_now; scalar_t__ kvmclock_offset; int pvclock_gtod_sync_lock; scalar_t__ master_kernel_ns; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {struct kvm_arch arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,unsigned long,int *,int *) ;
 struct kvm_vcpu* FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (int ,struct kvm_vcpu*) ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*,scalar_t__) ;
 unsigned long FUNC_9 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (unsigned long) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct kvm_vcpu *VAR_5)
{
 unsigned long VAR_6, VAR_7;
 struct kvm_vcpu_arch *VAR_8 = &VAR_5->arch;
 struct kvm_arch *VAR_9 = &VAR_5->kvm->arch;
 s64 VAR_10;
 u64 VAR_11, VAR_12;
 u8 VAR_13;
 bool VAR_14;

 VAR_10 = 0;
 VAR_12 = 0;





 FUNC_14(&VAR_9->pvclock_gtod_sync_lock);
 VAR_14 = VAR_9->use_master_clock;
 if (VAR_14) {
  VAR_12 = VAR_9->master_cycle_now;
  VAR_10 = VAR_9->master_kernel_ns;
 }
 FUNC_15(&VAR_9->pvclock_gtod_sync_lock);


 FUNC_12(VAR_6);
 VAR_7 = FUNC_0(VAR_3);
 if (FUNC_16(VAR_7 == 0)) {
  FUNC_11(VAR_6);
  FUNC_7(VAR_0, VAR_5);
  return 1;
 }
 if (!VAR_14) {
  VAR_12 = FUNC_13();
  VAR_10 = FUNC_3();
 }

 VAR_11 = FUNC_8(VAR_5, VAR_12);
 if (VAR_8->tsc_catchup) {
  u64 VAR_15 = FUNC_2(VAR_5, VAR_10);
  if (VAR_15 > VAR_11) {
   FUNC_1(VAR_5, VAR_15 - VAR_11);
   VAR_11 = VAR_15;
  }
 }

 FUNC_11(VAR_6);



 if (VAR_4)
  VAR_7 = FUNC_9(VAR_5, VAR_7);

 if (FUNC_16(VAR_8->hw_tsc_khz != VAR_7)) {
  FUNC_4(VAR_1, VAR_7 * 1000LL,
       &VAR_8->hv_clock.tsc_shift,
       &VAR_8->hv_clock.tsc_to_system_mul);
  VAR_8->hw_tsc_khz = VAR_7;
 }

 VAR_8->hv_clock.tsc_timestamp = VAR_11;
 VAR_8->hv_clock.system_time = VAR_10 + VAR_5->kvm->arch.kvmclock_offset;
 VAR_8->last_guest_tsc = VAR_11;


 VAR_13 = 0;
 if (VAR_14)
  VAR_13 |= VAR_2;

 VAR_8->hv_clock.flags = VAR_13;

 if (VAR_8->pv_time_enabled)
  FUNC_10(VAR_5);
 if (VAR_5 == FUNC_5(VAR_5->kvm, 0))
  FUNC_6(VAR_5->kvm, &VAR_8->hv_clock);
 return 0;
}
