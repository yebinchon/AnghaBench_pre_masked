
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* guest_fpu; int user_fpu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_1)
{
 FUNC_2();

 FUNC_1(VAR_1->arch.user_fpu);

 FUNC_0(&VAR_1->arch.guest_fpu->state,
    ~VAR_0);

 FUNC_3();
 FUNC_4();

 FUNC_5(1);
}
