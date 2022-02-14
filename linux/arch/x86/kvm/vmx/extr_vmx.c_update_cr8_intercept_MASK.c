
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmcs12* FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct vmcs12*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_2, int VAR_3, int VAR_4)
{
 struct vmcs12 *VAR_5 = FUNC_0(VAR_2);

 if (FUNC_1(VAR_2) &&
  FUNC_2(VAR_5, VAR_0))
  return;

 if (VAR_4 == -1 || VAR_3 < VAR_4) {
  FUNC_3(VAR_1, 0);
  return;
 }

 FUNC_3(VAR_1, VAR_4);
}
