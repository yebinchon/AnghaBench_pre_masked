
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_2__ {int hflags; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;

void FUNC_4(struct kvm_vcpu *VAR_3)
{
 if (VAR_3->arch.hflags & VAR_0) {
  ulong VAR_4 = FUNC_1(VAR_3);
  ulong VAR_5 = FUNC_0(VAR_3);
  if ((VAR_4 & VAR_1) == VAR_2)
   FUNC_3(VAR_3, VAR_4 & ~VAR_1);
  if ((VAR_5 & VAR_1) == VAR_2)
   FUNC_2(VAR_3, VAR_5 & ~VAR_1);
  VAR_3->arch.hflags &= ~VAR_0;
 }
}
