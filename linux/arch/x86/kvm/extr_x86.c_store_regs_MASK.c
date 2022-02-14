
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* run; } ;
struct kvm_sync_regs {int dummy; } ;
struct TYPE_6__ {int events; int sregs; int regs; } ;
struct TYPE_4__ {TYPE_3__ regs; } ;
struct TYPE_5__ {int kvm_valid_regs; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct kvm_vcpu*,int *) ;
 int FUNC_2 (struct kvm_vcpu*,int *) ;
 int FUNC_3 (struct kvm_vcpu*,int *) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_4)
{
 FUNC_0(sizeof(struct kvm_sync_regs) > VAR_3);

 if (VAR_4->run->kvm_valid_regs & VAR_1)
  FUNC_1(VAR_4, &VAR_4->run->s.regs.regs);

 if (VAR_4->run->kvm_valid_regs & VAR_2)
  FUNC_2(VAR_4, &VAR_4->run->s.regs.sregs);

 if (VAR_4->run->kvm_valid_regs & VAR_0)
  FUNC_3(
    VAR_4, &VAR_4->run->s.regs.events);
}
