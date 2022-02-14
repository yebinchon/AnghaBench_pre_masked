
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hvc_exit_stat; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;
struct kvm_run {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int * FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_0, struct kvm_run *VAR_1)
{
 int VAR_2;

 FUNC_2(*FUNC_4(VAR_0), FUNC_3(VAR_0, 0),
       FUNC_1(VAR_0));
 VAR_0->stat.hvc_exit_stat++;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0) {
  FUNC_5(VAR_0, 0, ~0UL);
  return 1;
 }

 return VAR_2;
}
