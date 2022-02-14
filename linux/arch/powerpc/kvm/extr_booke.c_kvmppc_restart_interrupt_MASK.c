
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int dbsr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
 int VAR_0 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pt_regs*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pt_regs*) ;
 int FUNC_7 (struct pt_regs*) ;
 int FUNC_8 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_9(struct kvm_vcpu *VAR_1,
         unsigned int VAR_2)
{
 struct pt_regs VAR_3;

 switch (VAR_2) {
 case 131:
  FUNC_4(&VAR_3);
  FUNC_1(&VAR_3);
  break;
 case 133:
  FUNC_4(&VAR_3);
  FUNC_7(&VAR_3);
  break;






 case 130:

  break;
 case 129:
  FUNC_4(&VAR_3);
  FUNC_6(&VAR_3);
  break;
 case 128:
  FUNC_4(&VAR_3);



  FUNC_8(&VAR_3);

  break;
 case 135:
  FUNC_4(&VAR_3);
  FUNC_8(&VAR_3);
  break;
 case 134:

  VAR_1->arch.dbsr = FUNC_5(VAR_0);
  FUNC_3();
  break;
 }
}
