
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int aux_inuse; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct kvm_vcpu*,int ,int ) ;

void FUNC_12(struct kvm_vcpu *VAR_10)
{







 FUNC_7();
 if (VAR_9 && VAR_10->arch.aux_inuse & VAR_2) {
  if (!FUNC_0(VAR_0)) {
   FUNC_9(VAR_6);
   FUNC_6();
  }

  FUNC_2(&VAR_10->arch);
  FUNC_11(VAR_10, VAR_5, VAR_4);


  FUNC_5();
  if (VAR_10->arch.aux_inuse & VAR_1) {
   FUNC_3(VAR_7 | VAR_8);
   FUNC_4();
  }
  VAR_10->arch.aux_inuse &= ~(VAR_1 | VAR_2);
 } else if (VAR_10->arch.aux_inuse & VAR_1) {
  if (!FUNC_0(VAR_0)) {
   FUNC_10(VAR_7);
   FUNC_6();
  }

  FUNC_1(&VAR_10->arch);
  VAR_10->arch.aux_inuse &= ~VAR_1;
  FUNC_11(VAR_10, VAR_5, VAR_3);


  FUNC_3(VAR_7 | VAR_8);
  FUNC_4();
 }
 FUNC_8();
}
