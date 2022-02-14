
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int fpu_reload; } ;
struct TYPE_5__ {TYPE_1__* user_fpu; int guest_fpu; } ;
struct kvm_vcpu {TYPE_3__ stat; TYPE_2__ arch; } ;
struct TYPE_4__ {int state; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_0)
{
 FUNC_2();

 FUNC_0(VAR_0->arch.guest_fpu);
 FUNC_1(&VAR_0->arch.user_fpu->state);

 FUNC_3();
 FUNC_4();

 ++VAR_0->stat.fpu_reload;
 FUNC_5(0);
}
