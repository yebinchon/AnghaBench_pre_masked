
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmcs12 {int dummy; } ;
struct vmcs {int dummy; } ;
struct TYPE_4__ {struct vmcs* shadow_vmcs; } ;
struct vcpu_vmx {TYPE_1__* loaded_vmcs; int vcpu; TYPE_2__ vmcs01; } ;
struct shadow_vmcs_field {int offset; int encoding; } ;
struct TYPE_3__ {struct vmcs* vmcs; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 struct vmcs12* FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct shadow_vmcs_field* VAR_1 ;
 int FUNC_5 (struct vmcs12*,int ,int ,unsigned long) ;
 int FUNC_6 (struct vmcs*) ;
 int FUNC_7 (struct vmcs*) ;

__attribute__((used)) static void FUNC_8(struct vcpu_vmx *VAR_2)
{
 struct vmcs *VAR_3 = VAR_2->vmcs01.shadow_vmcs;
 struct vmcs12 *VAR_4 = FUNC_2(&VAR_2->vcpu);
 struct shadow_vmcs_field VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 if (FUNC_0(!VAR_3))
  return;

 FUNC_3();

 FUNC_7(VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = VAR_1[VAR_7];
  VAR_6 = FUNC_1(VAR_5.encoding);
  FUNC_5(VAR_4, VAR_5.encoding, VAR_5.offset, VAR_6);
 }

 FUNC_6(VAR_3);
 FUNC_7(VAR_2->loaded_vmcs->vmcs);

 FUNC_4();
}
