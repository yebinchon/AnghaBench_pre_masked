
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {TYPE_3__* run; } ;
struct TYPE_4__ {int events; int sregs; int regs; } ;
struct TYPE_5__ {TYPE_1__ regs; } ;
struct TYPE_6__ {int kvm_dirty_regs; TYPE_2__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int *) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,int *) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int *) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_5)
{
 if (VAR_5->run->kvm_dirty_regs & ~VAR_4)
  return -VAR_0;

 if (VAR_5->run->kvm_dirty_regs & VAR_2) {
  FUNC_0(VAR_5, &VAR_5->run->s.regs.regs);
  VAR_5->run->kvm_dirty_regs &= ~VAR_2;
 }
 if (VAR_5->run->kvm_dirty_regs & VAR_3) {
  if (FUNC_1(VAR_5, &VAR_5->run->s.regs.sregs))
   return -VAR_0;
  VAR_5->run->kvm_dirty_regs &= ~VAR_3;
 }
 if (VAR_5->run->kvm_dirty_regs & VAR_1) {
  if (FUNC_2(
    VAR_5, &VAR_5->run->s.regs.events))
   return -VAR_0;
  VAR_5->run->kvm_dirty_regs &= ~VAR_1;
 }

 return 0;
}
