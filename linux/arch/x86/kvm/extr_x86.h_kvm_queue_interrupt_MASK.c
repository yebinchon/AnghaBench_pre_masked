
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int injected; int soft; int nr; } ;
struct TYPE_4__ {TYPE_1__ interrupt; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;



__attribute__((used)) static inline void FUNC_0(struct kvm_vcpu *VAR_0, u8 VAR_1,
 bool VAR_2)
{
 VAR_0->arch.interrupt.injected = 1;
 VAR_0->arch.interrupt.soft = VAR_2;
 VAR_0->arch.interrupt.nr = VAR_1;
}
