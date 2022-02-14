
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmcs12 {int dummy; } ;
struct TYPE_2__ {scalar_t__ vpid02; } ;
struct vcpu_vmx {scalar_t__ vpid; TYPE_1__ nested; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct vmcs12*) ;
 int FUNC_1 (struct vcpu_vmx*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,unsigned long long) ;

__attribute__((used)) static void FUNC_4(struct vcpu_vmx *VAR_3,
          struct vmcs12 *VAR_4)
{
 FUNC_1(VAR_3);

 FUNC_3(VAR_1, -1ull);

 if (VAR_2) {
  if (FUNC_0(VAR_4) && VAR_3->nested.vpid02)
   FUNC_2(VAR_0, VAR_3->nested.vpid02);
  else
   FUNC_2(VAR_0, VAR_3->vpid);
 }
}
