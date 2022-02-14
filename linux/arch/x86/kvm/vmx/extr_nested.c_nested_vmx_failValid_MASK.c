
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {unsigned long long current_vmptr; int hv_evmcs; } ;
struct vcpu_vmx {TYPE_1__ nested; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {int vm_instruction_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_6,
    u32 VAR_7)
{
 struct vcpu_vmx *VAR_8 = FUNC_3(VAR_6);





 if (VAR_8->nested.current_vmptr == -1ull && !VAR_8->nested.hv_evmcs)
  return FUNC_2(VAR_6);

 FUNC_5(VAR_6, (FUNC_4(VAR_6)
   & ~(VAR_1 | VAR_3 | VAR_0 |
       VAR_4 | VAR_2))
   | VAR_5);
 FUNC_0(VAR_6)->vm_instruction_error = VAR_7;




 return FUNC_1(VAR_6);
}
