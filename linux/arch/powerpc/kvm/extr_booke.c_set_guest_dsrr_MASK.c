
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long dsrr0; int dsrr1; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1, unsigned long VAR_2, u32 VAR_3)
{
 if (FUNC_0(VAR_0)) {
  VAR_1->arch.dsrr0 = VAR_2;
  VAR_1->arch.dsrr1 = VAR_3;
 } else {
  FUNC_1(VAR_1, VAR_2, VAR_3);
 }
}
