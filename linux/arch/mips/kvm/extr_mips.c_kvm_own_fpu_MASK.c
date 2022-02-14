
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_coproc {int dummy; } ;
struct TYPE_2__ {int aux_inuse; struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 (struct kvm_vcpu*) ;
 unsigned int FUNC_5 (struct mips_coproc*) ;
 unsigned int FUNC_6 (struct mips_coproc*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct kvm_vcpu*,int ,int ) ;

void FUNC_10(struct kvm_vcpu *VAR_10)
{
 struct mips_coproc *VAR_11 = VAR_10->arch.cop0;
 unsigned int VAR_12, VAR_13;

 FUNC_7();

 VAR_12 = FUNC_6(VAR_11);
 if (VAR_9 && VAR_12 & VAR_6 && !(VAR_12 & VAR_7) &&
     VAR_10->arch.aux_inuse & VAR_1)
  FUNC_4(VAR_10);





 FUNC_2(VAR_6 | VAR_7, VAR_12);
 if (VAR_8) {
  VAR_13 = FUNC_5(VAR_11);
  FUNC_1(VAR_5, VAR_13);
 }
 FUNC_3();


 if (!(VAR_10->arch.aux_inuse & VAR_0)) {
  FUNC_0(&VAR_10->arch);
  VAR_10->arch.aux_inuse |= VAR_0;
  FUNC_9(VAR_10, VAR_4, VAR_3);
 } else {
  FUNC_9(VAR_10, VAR_2, VAR_3);
 }

 FUNC_8();
}
