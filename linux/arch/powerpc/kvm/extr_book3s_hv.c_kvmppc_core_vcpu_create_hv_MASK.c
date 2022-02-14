
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvmppc_vcore {scalar_t__ first_vcpuid; int lock; int num_threads; } ;
struct TYPE_4__ {int shared_big_endian; int intr_msr; int hfscr; int thread_cpu; int prev_cpu; int cpu_type; scalar_t__ ptid; struct kvmppc_vcore* vcore; int cpu_run; int state; int busy_preempt; int tbacct_lock; int vpa_update_lock; int ctrl; int * mmcr; int shregs; int * shared; } ;
struct kvm_vcpu {TYPE_2__ arch; scalar_t__ vcpu_id; } ;
struct TYPE_3__ {unsigned int emul_smt_mode; int smt_mode; int mmu_setup_lock; int online_vcores; struct kvmppc_vcore** vcores; } ;
struct kvm {int lock; TYPE_1__ arch; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct kvm_vcpu* FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct kvm_vcpu*) ;
 struct kvm_vcpu* FUNC_6 (int ,int ) ;
 int VAR_26 ;
 int FUNC_7 (struct kvm_vcpu*,struct kvm*,unsigned int) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm*,unsigned int) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*,int) ;
 struct kvmppc_vcore* FUNC_12 (struct kvm*,unsigned int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static struct kvm_vcpu *FUNC_20(struct kvm *VAR_27,
         unsigned int VAR_28)
{
 struct kvm_vcpu *VAR_29;
 int VAR_30;
 int VAR_31;
 struct kvmppc_vcore *VAR_32;

 VAR_30 = -VAR_6;
 VAR_29 = FUNC_6(VAR_26, VAR_7);
 if (!VAR_29)
  goto out;

 VAR_30 = FUNC_7(VAR_29, VAR_27, VAR_28);
 if (VAR_30)
  goto free_vcpu;

 VAR_29->arch.shared = &VAR_29->arch.shregs;
 VAR_29->arch.mmcr[0] = VAR_20;
 VAR_29->arch.ctrl = VAR_4;

 FUNC_11(VAR_29, FUNC_13(VAR_24));
 FUNC_18(&VAR_29->arch.vpa_update_lock);
 FUNC_18(&VAR_29->arch.tbacct_lock);
 VAR_29->arch.busy_preempt = VAR_25;
 VAR_29->arch.intr_msr = VAR_22 | VAR_21;
 VAR_29->arch.hfscr = VAR_13 | VAR_10 | VAR_12 | VAR_8 |
  VAR_9 | VAR_15 | VAR_11;
 if (FUNC_2(VAR_1)) {
  VAR_29->arch.hfscr &= FUNC_13(VAR_23);
  if (FUNC_2(VAR_2))
   VAR_29->arch.hfscr |= VAR_14;
 }
 if (FUNC_2(VAR_3))
  VAR_29->arch.hfscr |= VAR_14;

 FUNC_8(VAR_29);

 VAR_29->arch.state = VAR_16;

 FUNC_4(&VAR_29->arch.cpu_run);

 FUNC_14(&VAR_27->lock);
 VAR_32 = ((void*)0);
 VAR_30 = -VAR_5;
 if (FUNC_2(VAR_0)) {
  if (VAR_28 >= (VAR_19 * VAR_27->arch.emul_smt_mode)) {
   FUNC_16("KVM: VCPU ID too high\n");
   VAR_31 = VAR_18;
  } else {
   FUNC_0(VAR_27->arch.smt_mode != 1);
   VAR_31 = FUNC_9(VAR_27, VAR_28);
  }
 } else {
  VAR_31 = VAR_28 / VAR_27->arch.smt_mode;
 }
 if (VAR_31 < VAR_18) {
  VAR_32 = VAR_27->arch.vcores[VAR_31];
  if (VAR_32 && FUNC_2(VAR_0)) {
   FUNC_16("KVM: collision on id %u", VAR_28);
   VAR_32 = ((void*)0);
  } else if (!VAR_32) {




   VAR_30 = -VAR_6;
   VAR_32 = FUNC_12(VAR_27,
     VAR_28 & ~(VAR_27->arch.smt_mode - 1));
   FUNC_14(&VAR_27->arch.mmu_setup_lock);
   VAR_27->arch.vcores[VAR_31] = VAR_32;
   VAR_27->arch.online_vcores++;
   FUNC_15(&VAR_27->arch.mmu_setup_lock);
  }
 }
 FUNC_15(&VAR_27->lock);

 if (!VAR_32)
  goto free_vcpu;

 FUNC_17(&VAR_32->lock);
 ++VAR_32->num_threads;
 FUNC_19(&VAR_32->lock);
 VAR_29->arch.vcore = VAR_32;
 VAR_29->arch.ptid = VAR_29->vcpu_id - VAR_32->first_vcpuid;
 VAR_29->arch.thread_cpu = -1;
 VAR_29->arch.prev_cpu = -1;

 VAR_29->arch.cpu_type = VAR_17;
 FUNC_10(VAR_29);

 FUNC_3(VAR_29, VAR_28);

 return VAR_29;

free_vcpu:
 FUNC_5(VAR_26, VAR_29);
out:
 return FUNC_1(VAR_30);
}
