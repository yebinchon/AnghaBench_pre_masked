
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct msr_data {scalar_t__ data; scalar_t__ host_initiated; } ;
struct TYPE_3__ {int virtual_tsc_khz; scalar_t__ this_tsc_generation; scalar_t__ this_tsc_write; scalar_t__ this_tsc_nsec; scalar_t__ last_guest_tsc; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm* kvm; } ;
struct TYPE_4__ {scalar_t__ last_tsc_nsec; scalar_t__ last_tsc_write; long long last_tsc_khz; scalar_t__ cur_tsc_offset; scalar_t__ cur_tsc_generation; int pvclock_gtod_sync_lock; scalar_t__ nr_vcpus_matched_tsc; int tsc_write_lock; scalar_t__ cur_tsc_write; scalar_t__ cur_tsc_nsec; } ;
struct kvm {TYPE_2__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct kvm_vcpu*,scalar_t__) ;

void FUNC_12(struct kvm_vcpu *VAR_1, struct msr_data *VAR_2)
{
 struct kvm *VAR_3 = VAR_1->kvm;
 u64 VAR_4, VAR_5, VAR_6;
 unsigned long VAR_7;
 bool VAR_8;
 bool VAR_9;
 u64 VAR_10 = VAR_2->data;
 bool VAR_11 = 0;

 FUNC_7(&VAR_3->arch.tsc_write_lock, VAR_7);
 VAR_4 = FUNC_3(VAR_1, VAR_10);
 VAR_5 = FUNC_1();
 VAR_6 = VAR_5 - VAR_3->arch.last_tsc_nsec;

 if (VAR_1->arch.virtual_tsc_khz) {
  if (VAR_10 == 0 && VAR_2->host_initiated) {





   VAR_11 = 1;
  } else {
   u64 VAR_12 = VAR_3->arch.last_tsc_write +
      FUNC_6(VAR_1, VAR_6);
   u64 VAR_13 = VAR_1->arch.virtual_tsc_khz * 1000LL;





   VAR_11 = VAR_10 < VAR_12 + VAR_13 &&
     VAR_10 + VAR_13 > VAR_12;
  }
 }







 if (VAR_11 &&
     VAR_1->arch.virtual_tsc_khz == VAR_3->arch.last_tsc_khz) {
  if (!FUNC_2()) {
   VAR_4 = VAR_3->arch.cur_tsc_offset;
  } else {
   u64 VAR_14 = FUNC_6(VAR_1, VAR_6);
   VAR_10 += VAR_14;
   VAR_4 = FUNC_3(VAR_1, VAR_10);
  }
  VAR_8 = 1;
  VAR_9 = (VAR_1->arch.this_tsc_generation == VAR_3->arch.cur_tsc_generation);
 } else {
  VAR_3->arch.cur_tsc_generation++;
  VAR_3->arch.cur_tsc_nsec = VAR_5;
  VAR_3->arch.cur_tsc_write = VAR_10;
  VAR_3->arch.cur_tsc_offset = VAR_4;
  VAR_8 = 0;
 }





 VAR_3->arch.last_tsc_nsec = VAR_5;
 VAR_3->arch.last_tsc_write = VAR_10;
 VAR_3->arch.last_tsc_khz = VAR_1->arch.virtual_tsc_khz;

 VAR_1->arch.last_guest_tsc = VAR_10;


 VAR_1->arch.this_tsc_generation = VAR_3->arch.cur_tsc_generation;
 VAR_1->arch.this_tsc_nsec = VAR_3->arch.cur_tsc_nsec;
 VAR_1->arch.this_tsc_write = VAR_3->arch.cur_tsc_write;

 if (!VAR_2->host_initiated && FUNC_0(VAR_1, VAR_0))
  FUNC_11(VAR_1, VAR_4);

 FUNC_5(VAR_1, VAR_4);
 FUNC_8(&VAR_3->arch.tsc_write_lock, VAR_7);

 FUNC_9(&VAR_3->arch.pvclock_gtod_sync_lock);
 if (!VAR_8) {
  VAR_3->arch.nr_vcpus_matched_tsc = 0;
 } else if (!VAR_9) {
  VAR_3->arch.nr_vcpus_matched_tsc++;
 }

 FUNC_4(VAR_1);
 FUNC_10(&VAR_3->arch.pvclock_gtod_sync_lock);
}
