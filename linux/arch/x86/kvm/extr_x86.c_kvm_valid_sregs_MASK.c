
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {scalar_t__ l; } ;
struct kvm_sregs {int efer; int cr0; int cr4; TYPE_1__ cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_5, struct kvm_sregs *VAR_6)
{
 if ((VAR_6->efer & VAR_1) && (VAR_6->cr0 & VAR_3)) {





  if (!(VAR_6->cr4 & VAR_4)
      || !(VAR_6->efer & VAR_0))
   return -VAR_2;
 } else {




  if (VAR_6->efer & VAR_0 || VAR_6->cs.l)
   return -VAR_2;
 }

 return FUNC_0(VAR_5, VAR_6->cr4);
}
