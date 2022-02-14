
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int global_status; } ;
struct TYPE_4__ {TYPE_1__ pmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long*) ;
 struct kvm_vcpu* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct kvm_vcpu *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_0, VAR_3);
 FUNC_0(VAR_1,
   (unsigned long *)&VAR_3->arch.pmu.global_status);
}
