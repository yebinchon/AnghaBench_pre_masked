
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int need_vmcs12_to_shadow_sync; int dirty_vmcs12; int current_vmptr; } ;
struct TYPE_3__ {int shadow_vmcs; } ;
struct vcpu_vmx {TYPE_2__ nested; TYPE_1__ vmcs01; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct vcpu_vmx*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct vcpu_vmx *VAR_3, gpa_t VAR_4)
{
 VAR_3->nested.current_vmptr = VAR_4;
 if (VAR_2) {
  FUNC_1(VAR_3, VAR_0);
  FUNC_2(VAR_1,
        FUNC_0(VAR_3->vmcs01.shadow_vmcs));
  VAR_3->nested.need_vmcs12_to_shadow_sync = 1;
 }
 VAR_3->nested.dirty_vmcs12 = 1;
}
