
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_16__ {int msr; } ;
struct TYPE_18__ {int online; int state; int fault_dsisr; int fault_dar; TYPE_5__ shregs; TYPE_4__* vcore; int pgdir; int * wqp; int sane; } ;
struct kvm_vcpu {TYPE_7__ arch; struct kvm* kvm; } ;
struct TYPE_12__ {scalar_t__ hardware_entry_failure_reason; } ;
struct kvm_run {scalar_t__ exit_reason; TYPE_1__ fail_entry; } ;
struct TYPE_19__ {int vcpus_running; scalar_t__ threads_indep; } ;
struct kvm {TYPE_8__ arch; int srcu; } ;
struct TYPE_17__ {unsigned int fscr; TYPE_2__* regs; void* tm_texasr; void* tm_tfiar; void* tm_tfhar; } ;
struct TYPE_20__ {TYPE_6__ thread; TYPE_3__* mm; } ;
struct TYPE_15__ {int lpcr; int wq; int online_count; } ;
struct TYPE_14__ {int pgd; } ;
struct TYPE_13__ {int msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_9__* VAR_24 ;
 int FUNC_5 (TYPE_9__*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct kvm*) ;
 int FUNC_8 (struct kvm_run*,struct kvm_vcpu*,int ,int ) ;
 int FUNC_9 (struct kvm_run*,struct kvm_vcpu*,int ,int ) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_run*,struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*,int ) ;
 int FUNC_14 () ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,unsigned int) ;
 int VAR_25 ;
 scalar_t__ FUNC_18 (TYPE_9__*) ;
 int FUNC_19 () ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (struct kvm_vcpu*) ;
 int FUNC_23 (struct kvm_vcpu*,int) ;
 int FUNC_24 () ;

__attribute__((used)) static int FUNC_25(struct kvm_run *VAR_26, struct kvm_vcpu *VAR_27)
{
 int VAR_28;
 int VAR_29;
 unsigned long VAR_30[3] = {};
 unsigned long VAR_31 = 0;
 unsigned int VAR_32;
 struct kvm *VAR_33;

 if (!VAR_27->arch.sane) {
  VAR_26->exit_reason = VAR_8;
  return -VAR_3;
 }
 if (!VAR_27->arch.online) {
  FUNC_3(&VAR_27->arch.vcore->online_count);
  VAR_27->arch.online = 1;
 }

 FUNC_10(VAR_27);


 if (FUNC_18(VAR_24)) {
  VAR_26->exit_reason = VAR_9;
  return -VAR_2;
 }

 VAR_33 = VAR_27->kvm;
 FUNC_3(&VAR_33->arch.vcpus_running);

 FUNC_19();

 FUNC_5(VAR_24);


 if (FUNC_4(VAR_0)) {
  VAR_30[0] = FUNC_15(VAR_16);
  VAR_30[1] = FUNC_15(VAR_17);
  VAR_30[2] = FUNC_15(VAR_15);
  VAR_31 = FUNC_15(VAR_19);
 }
 VAR_32 = FUNC_15(VAR_23);

 VAR_27->arch.wqp = &VAR_27->arch.vcore->wq;
 VAR_27->arch.pgdir = VAR_24->mm->pgd;
 VAR_27->arch.state = VAR_5;

 do {
  if (VAR_33->arch.threads_indep && FUNC_7(VAR_33) &&
      !VAR_25)
   VAR_28 = FUNC_8(VAR_26, VAR_27, ~(u64)0,
        VAR_27->arch.vcore->lpcr);
  else
   VAR_28 = FUNC_12(VAR_26, VAR_27);

  if (VAR_26->exit_reason == VAR_10 &&
      !(VAR_27->arch.shregs.msr & VAR_11)) {
   FUNC_22(VAR_27);
   VAR_28 = FUNC_11(VAR_27);
   FUNC_23(VAR_27, VAR_28);
   FUNC_10(VAR_27);
  } else if (VAR_28 == VAR_13) {
   VAR_29 = FUNC_20(&VAR_33->srcu);
   VAR_28 = FUNC_9(VAR_26, VAR_27,
    VAR_27->arch.fault_dar, VAR_27->arch.fault_dsisr);
   FUNC_21(&VAR_33->srcu, VAR_29);
  } else if (VAR_28 == VAR_14) {
   if (FUNC_1(FUNC_24()))
    VAR_28 = VAR_4;
   else
    VAR_28 = FUNC_13(VAR_27, 0);
  }
 } while (FUNC_6(VAR_28));


 if (FUNC_4(VAR_0)) {
  FUNC_17(VAR_16, VAR_30[0]);
  FUNC_17(VAR_17, VAR_30[1]);
  FUNC_17(VAR_15, VAR_30[2]);
  FUNC_17(VAR_19, VAR_31);
  FUNC_17(VAR_18, VAR_24->thread.fscr);
 }
 FUNC_17(VAR_23, VAR_32);

 VAR_27->arch.state = VAR_6;
 FUNC_2(&VAR_33->arch.vcpus_running);
 return VAR_28;
}
