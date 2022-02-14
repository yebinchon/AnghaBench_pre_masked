
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mips_coproc {int dummy; } ;
struct TYPE_2__ {struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int*,int*) ;
 int FUNC_1 (struct mips_coproc*,int) ;
 int FUNC_2 (struct mips_coproc*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_1)
{
 struct mips_coproc *VAR_2 = VAR_1->arch.cop0;
 u32 VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_3();
 if (VAR_3 & VAR_0) {

  FUNC_6(VAR_3 & ~VAR_0);


  FUNC_0(VAR_1, &VAR_4, &VAR_5);
 } else {
  VAR_4 = FUNC_5();
  VAR_5 = FUNC_4();
 }


 FUNC_1(VAR_2, VAR_5);
 FUNC_2(VAR_2, VAR_4);
}
