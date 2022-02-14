
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int ept_caps; } ;
struct TYPE_4__ {TYPE_1__ msrs; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_7, u64 VAR_8)
{
 struct vcpu_vmx *VAR_9 = FUNC_2(VAR_7);
 int VAR_10 = FUNC_1(VAR_7);


 switch (VAR_8 & VAR_1) {
 case 129:
  if (FUNC_0(!(VAR_9->nested.msrs.ept_caps & VAR_4)))
   return 0;
  break;
 case 128:
  if (FUNC_0(!(VAR_9->nested.msrs.ept_caps & VAR_5)))
   return 0;
  break;
 default:
  return 0;
 }


 if (FUNC_0((VAR_8 & VAR_3) != VAR_2))
  return 0;


 if (FUNC_0(VAR_8 >> VAR_10 || ((VAR_8 >> 7) & 0x1f)))
  return 0;


 if (VAR_8 & VAR_0) {
  if (FUNC_0(!(VAR_9->nested.msrs.ept_caps & VAR_6)))
   return 0;
 }

 return 1;
}
