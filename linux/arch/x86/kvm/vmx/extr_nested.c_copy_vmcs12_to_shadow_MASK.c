
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmcs12 {int dummy; } ;
struct vmcs {int dummy; } ;
struct TYPE_3__ {struct vmcs* shadow_vmcs; } ;
struct vcpu_vmx {TYPE_2__* loaded_vmcs; int vcpu; TYPE_1__ vmcs01; } ;
struct shadow_vmcs_field {int encoding; int offset; } ;
struct TYPE_4__ {struct vmcs* vmcs; } ;


 int FUNC_0 (struct shadow_vmcs_field const**) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,unsigned long) ;
 struct vmcs12* FUNC_3 (int *) ;
 int const VAR_0 ;
 int const VAR_1 ;
 struct shadow_vmcs_field const* VAR_2 ;
 struct shadow_vmcs_field const* VAR_3 ;
 unsigned long FUNC_4 (struct vmcs12*,int ,int ) ;
 int FUNC_5 (struct vmcs*) ;
 int FUNC_6 (struct vmcs*) ;

__attribute__((used)) static void FUNC_7(struct vcpu_vmx *VAR_4)
{
 const struct shadow_vmcs_field *VAR_5[] = {
  VAR_3,
  VAR_2
 };
 const int VAR_6[] = {
  VAR_1,
  VAR_0
 };
 struct vmcs *VAR_7 = VAR_4->vmcs01.shadow_vmcs;
 struct vmcs12 *VAR_8 = FUNC_3(&VAR_4->vcpu);
 struct shadow_vmcs_field VAR_9;
 unsigned long VAR_10;
 int VAR_11, VAR_12;

 if (FUNC_1(!VAR_7))
  return;

 FUNC_6(VAR_7);

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_5); VAR_12++) {
  for (VAR_11 = 0; VAR_11 < VAR_6[VAR_12]; VAR_11++) {
   VAR_9 = VAR_5[VAR_12][VAR_11];
   VAR_10 = FUNC_4(VAR_8, VAR_9.encoding,
           VAR_9.offset);
   FUNC_2(VAR_9.encoding, VAR_10);
  }
 }

 FUNC_5(VAR_7);
 FUNC_6(VAR_4->loaded_vmcs->vmcs);
}
