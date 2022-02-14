
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int host_apf_reason; } ;
struct TYPE_6__ {TYPE_1__ apf; } ;
struct TYPE_7__ {TYPE_2__ arch; } ;
struct vcpu_vmx {TYPE_3__ vcpu; int exit_intr_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct vcpu_vmx *VAR_1)
{
 VAR_1->exit_intr_info = FUNC_7(VAR_0);


 if (FUNC_2(VAR_1->exit_intr_info))
  VAR_1->vcpu.arch.apf.host_apf_reason = FUNC_6();


 if (FUNC_0(VAR_1->exit_intr_info))
  FUNC_5();


 if (FUNC_1(VAR_1->exit_intr_info)) {
  FUNC_4(&VAR_1->vcpu);
  asm("int $2");
  FUNC_3(&VAR_1->vcpu);
 }
}
