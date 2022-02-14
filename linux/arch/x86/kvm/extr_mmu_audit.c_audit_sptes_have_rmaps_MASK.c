
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int kvm; } ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_0, u64 *VAR_1, int VAR_2)
{
 if (FUNC_2(*VAR_1) && FUNC_1(*VAR_1, VAR_2))
  FUNC_0(VAR_0->kvm, VAR_1);
}
