
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pvclock_vcpu_time_info {int tsc_to_system_mul; int tsc_shift; scalar_t__ system_time; int tsc_timestamp; } ;
struct kvm_arch {scalar_t__ kvmclock_offset; int pvclock_gtod_sync_lock; scalar_t__ master_kernel_ns; int master_cycle_now; int use_master_clock; } ;
struct kvm {struct kvm_arch arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pvclock_vcpu_time_info*,int ) ;
 long long FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,long long,int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

u64 FUNC_9(struct kvm *VAR_2)
{
 struct kvm_arch *VAR_3 = &VAR_2->arch;
 struct pvclock_vcpu_time_info VAR_4;
 u64 VAR_5;

 FUNC_7(&VAR_3->pvclock_gtod_sync_lock);
 if (!VAR_3->use_master_clock) {
  FUNC_8(&VAR_3->pvclock_gtod_sync_lock);
  return FUNC_3() + VAR_3->kvmclock_offset;
 }

 VAR_4.tsc_timestamp = VAR_3->master_cycle_now;
 VAR_4.system_time = VAR_3->master_kernel_ns + VAR_3->kvmclock_offset;
 FUNC_8(&VAR_3->pvclock_gtod_sync_lock);


 FUNC_2();

 if (FUNC_1(VAR_1)) {
  FUNC_4(VAR_0, FUNC_1(VAR_1) * 1000LL,
       &VAR_4.tsc_shift,
       &VAR_4.tsc_to_system_mul);
  VAR_5 = FUNC_0(&VAR_4, FUNC_6());
 } else
  VAR_5 = FUNC_3() + VAR_3->kvmclock_offset;

 FUNC_5();

 return VAR_5;
}
