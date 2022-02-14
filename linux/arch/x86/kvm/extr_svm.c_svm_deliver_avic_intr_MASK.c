
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int apic; } ;
struct kvm_vcpu {int cpu; TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_1, int VAR_2)
{
 FUNC_3(VAR_2, VAR_1->arch.apic);
 FUNC_6();

 if (FUNC_0(VAR_1)) {
  int VAR_3 = VAR_1->cpu;

  if (VAR_3 != FUNC_1())
   FUNC_7(VAR_0, FUNC_2(VAR_3));
  FUNC_5();
 } else
  FUNC_4(VAR_1);
}
