
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_5)
{
 ulong VAR_6 = FUNC_0(VAR_5);
 ulong VAR_7 = FUNC_1(VAR_5);


 if ((VAR_6 & (VAR_2|VAR_1)) != VAR_1)
  return;


 if (VAR_5->arch.hflags & VAR_0)
  return;


 if (VAR_7 & VAR_3)
  return;

 VAR_5->arch.hflags |= VAR_0;
 FUNC_2(VAR_5, VAR_7 | VAR_4);
}
