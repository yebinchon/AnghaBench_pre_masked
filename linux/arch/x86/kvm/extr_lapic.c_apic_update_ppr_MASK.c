
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_lapic {int vcpu; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_lapic*,int *) ;
 int FUNC_1 (struct kvm_lapic*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_lapic *VAR_1)
{
 u32 VAR_2;

 if (FUNC_0(VAR_1, &VAR_2) &&
     FUNC_1(VAR_1, VAR_2) != -1)
  FUNC_2(VAR_0, VAR_1->vcpu);
}
