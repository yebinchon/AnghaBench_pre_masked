
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct vcpu_vmx {int dummy; } ;
struct TYPE_2__ {unsigned long cr0; int regs_avail; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct vcpu_vmx*,int) ;
 int FUNC_1 (struct vcpu_vmx*,int) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,int *) ;
 struct vcpu_vmx* FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static void FUNC_8(unsigned long *VAR_5,
     unsigned long VAR_6,
     struct kvm_vcpu *VAR_7)
{
 struct vcpu_vmx *VAR_8 = FUNC_5(VAR_7);

 if (!FUNC_4(VAR_2, (ulong *)&VAR_7->arch.regs_avail))
  FUNC_6(VAR_7);
 if (!(VAR_6 & VAR_3)) {

  FUNC_1(VAR_8, VAR_0 |
       VAR_1);
  VAR_7->arch.cr0 = VAR_6;
  FUNC_7(VAR_7, FUNC_3(VAR_7));
 } else if (!FUNC_2(VAR_7)) {

  FUNC_0(VAR_8, VAR_0 |
         VAR_1);
  VAR_7->arch.cr0 = VAR_6;
  FUNC_7(VAR_7, FUNC_3(VAR_7));
 }

 if (!(VAR_6 & VAR_4))
  *VAR_5 &= ~VAR_4;
}
