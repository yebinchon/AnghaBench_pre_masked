
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wfi_exit_stat; int wfe_exit_stat; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;
struct kvm_run {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int * FUNC_8 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu *VAR_2, struct kvm_run *VAR_3)
{
 if (FUNC_3(VAR_2) & VAR_0) {
  FUNC_6(*FUNC_8(VAR_2), 1);
  VAR_2->stat.wfe_exit_stat++;
  FUNC_4(VAR_2, FUNC_7(VAR_2));
 } else {
  FUNC_6(*FUNC_8(VAR_2), 0);
  VAR_2->stat.wfi_exit_stat++;
  FUNC_2(VAR_2);
  FUNC_0(VAR_1, VAR_2);
 }

 FUNC_1(VAR_2, FUNC_5(VAR_2));

 return 1;
}
