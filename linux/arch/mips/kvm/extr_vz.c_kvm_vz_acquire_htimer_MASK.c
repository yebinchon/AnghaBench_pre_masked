
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

void FUNC_6(struct kvm_vcpu *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_2();
 if (!(VAR_2 & VAR_0) && FUNC_1(VAR_1)) {

  FUNC_5(VAR_2 | VAR_0);

  FUNC_0(VAR_1, FUNC_4(),
           FUNC_3());
 }
}
