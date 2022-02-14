
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct vmcs12*,int ) ;
 int FUNC_2 (struct vmcs12*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_2,
        struct vmcs12 *VAR_3)
{
 if (FUNC_0(FUNC_1(VAR_3, VAR_1) &&
        !FUNC_2(VAR_3)))
  return -VAR_0;
 return 0;
}
