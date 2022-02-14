
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exit_userspace; } ;
struct kvm_vcpu {TYPE_1__ stat; int vcpu_id; int kvm; } ;
struct kvm_run {int kvm_valid_regs; int kvm_dirty_regs; int exit_reason; scalar_t__ immediate_exit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int VAR_5 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct kvm_vcpu*,struct kvm_run*) ;
 int FUNC_14 (struct kvm_vcpu*,struct kvm_run*) ;
 int FUNC_15 (struct kvm_vcpu*) ;
 int FUNC_16 (struct kvm_vcpu*) ;

int FUNC_17(struct kvm_vcpu *VAR_6, struct kvm_run *VAR_7)
{
 int VAR_8;

 if (VAR_7->immediate_exit)
  return -VAR_0;

 if (VAR_7->kvm_valid_regs & ~VAR_4 ||
     VAR_7->kvm_dirty_regs & ~VAR_4)
  return -VAR_1;

 FUNC_15(VAR_6);

 if (FUNC_3(VAR_6)) {
  FUNC_5(VAR_6);
  VAR_8 = 0;
  goto out;
 }

 FUNC_8(VAR_6);

 if (!FUNC_6(VAR_6->kvm)) {
  FUNC_7(VAR_6);
 } else if (FUNC_4(VAR_6)) {
  FUNC_11("can't run stopped vcpu %d\n",
       VAR_6->vcpu_id);
  VAR_8 = -VAR_1;
  goto out;
 }

 FUNC_14(VAR_6, VAR_7);
 FUNC_2(VAR_6);

 FUNC_10();
 VAR_8 = FUNC_0(VAR_6);

 if (FUNC_12(VAR_5) && !VAR_8) {
  VAR_7->exit_reason = VAR_3;
  VAR_8 = -VAR_0;
 }

 if (FUNC_3(VAR_6) && !VAR_8) {
  FUNC_5(VAR_6);
  VAR_8 = 0;
 }

 if (VAR_8 == -VAR_2) {

  VAR_8 = 0;
 }

 FUNC_1(VAR_6);
 FUNC_13(VAR_6, VAR_7);

 FUNC_9(VAR_6);

 VAR_6->stat.exit_userspace++;
out:
 FUNC_16(VAR_6);
 return VAR_8;
}
