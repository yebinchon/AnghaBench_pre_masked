
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pi_desc {int dummy; } ;
struct kvm_vcpu {scalar_t__ preempted; int kvm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct pi_desc*) ;
 struct pi_desc* FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_1)
{
 struct pi_desc *VAR_2 = FUNC_4(VAR_1);

 if (!FUNC_1(VAR_1->kvm) ||
  !FUNC_0(VAR_0) ||
  !FUNC_2(VAR_1))
  return;


 if (VAR_1->preempted)
  FUNC_3(VAR_2);
}
