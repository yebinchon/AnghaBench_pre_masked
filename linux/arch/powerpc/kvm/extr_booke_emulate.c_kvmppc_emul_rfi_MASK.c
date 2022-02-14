
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nip; } ;
struct TYPE_6__ {TYPE_2__* shared; TYPE_1__ regs; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_5__ {int srr1; int srr0; } ;


 int FUNC_0 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_0)
{
 VAR_0->arch.regs.nip = VAR_0->arch.shared->srr0;
 FUNC_0(VAR_0, VAR_0->arch.shared->srr1);
}
