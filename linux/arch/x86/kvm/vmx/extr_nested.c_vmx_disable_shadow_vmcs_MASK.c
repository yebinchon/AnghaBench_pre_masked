
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int need_vmcs12_to_shadow_sync; } ;
struct vcpu_vmx {TYPE_1__ nested; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vcpu_vmx*,int ) ;
 int FUNC_1 (int ,unsigned long long) ;

__attribute__((used)) static void FUNC_2(struct vcpu_vmx *VAR_2)
{
 FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_1, -1ull);
 VAR_2->nested.need_vmcs12_to_shadow_sync = 0;
}
