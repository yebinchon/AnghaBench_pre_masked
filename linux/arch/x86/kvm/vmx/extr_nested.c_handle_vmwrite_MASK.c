
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned int u32 ;
struct x86_exception {int dummy; } ;
struct vmcs12 {unsigned long long vmcs_link_pointer; } ;
struct TYPE_6__ {unsigned long long current_vmptr; int dirty_vmcs12; } ;
struct TYPE_4__ {int shadow_vmcs; } ;
struct vcpu_vmx {TYPE_3__ nested; TYPE_2__* loaded_vmcs; TYPE_1__ vmcs01; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;
struct TYPE_5__ {int vmcs; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (struct kvm_vcpu*,struct vmcs12*) ;
 scalar_t__ VAR_6 ;
 struct vmcs12* FUNC_2 (struct kvm_vcpu*) ;
 struct vmcs12* FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*,unsigned long,unsigned int,int,int,int *) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (struct kvm_vcpu*,struct x86_exception*) ;
 scalar_t__ FUNC_10 (struct kvm_vcpu*,int ,int*,int,struct x86_exception*) ;
 void* FUNC_11 (struct kvm_vcpu*,unsigned int) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (struct kvm_vcpu*,int ) ;
 int FUNC_16 (struct kvm_vcpu*) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 struct vcpu_vmx* FUNC_19 (struct kvm_vcpu*) ;
 int FUNC_20 (struct vmcs12*,unsigned long,short,int) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (unsigned long) ;
 short FUNC_23 (unsigned long) ;
 int FUNC_24 (int ) ;
 unsigned int FUNC_25 (int ) ;
 unsigned long FUNC_26 (int ) ;

__attribute__((used)) static int FUNC_27(struct kvm_vcpu *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;
 gva_t VAR_10;
 struct vcpu_vmx *VAR_11 = FUNC_19(VAR_7);
 unsigned long VAR_12 = FUNC_26(VAR_0);
 u32 VAR_13 = FUNC_25(VAR_5);







 u64 VAR_14 = 0;
 struct x86_exception VAR_15;
 struct vmcs12 *VAR_16;
 short VAR_17;

 if (!FUNC_13(VAR_7))
  return 1;

 if (VAR_11->nested.current_vmptr == -1ull)
  return FUNC_14(VAR_7);

 if (VAR_13 & (1u << 10))
  VAR_14 = FUNC_11(VAR_7,
   (((VAR_13) >> 3) & 0xf));
 else {
  VAR_9 = FUNC_5(VAR_7) ? 8 : 4;
  if (FUNC_4(VAR_7, VAR_12,
    VAR_13, 0, VAR_9, &VAR_10))
   return 1;
  if (FUNC_10(VAR_7, VAR_10, &VAR_14, VAR_9, &VAR_15)) {
   FUNC_9(VAR_7, &VAR_15);
   return 1;
  }
 }


 VAR_8 = FUNC_11(VAR_7, (((VAR_13) >> 28) & 0xf));




 if (FUNC_22(VAR_8) &&
     !FUNC_12(VAR_7))
  return FUNC_15(VAR_7,
   VAR_4);

 if (!FUNC_6(VAR_7)) {
  VAR_16 = FUNC_3(VAR_7);





  if (!FUNC_8(VAR_8))
   FUNC_1(VAR_7, VAR_16);
 } else {




  if (FUNC_3(VAR_7)->vmcs_link_pointer == -1ull)
   return FUNC_14(VAR_7);
  VAR_16 = FUNC_2(VAR_7);
 }

 VAR_17 = FUNC_23(VAR_8);
 if (VAR_17 < 0)
  return FUNC_15(VAR_7,
   VAR_3);
 if (VAR_8 >= VAR_1 && VAR_8 <= VAR_2)
  VAR_14 &= 0x1f0ff;

 FUNC_20(VAR_16, VAR_8, VAR_17, VAR_14);







 if (!FUNC_6(VAR_7) && !FUNC_8(VAR_8)) {




  if (VAR_6 && FUNC_7(VAR_8)) {
   FUNC_17();
   FUNC_24(VAR_11->vmcs01.shadow_vmcs);

   FUNC_0(VAR_8, VAR_14);

   FUNC_21(VAR_11->vmcs01.shadow_vmcs);
   FUNC_24(VAR_11->loaded_vmcs->vmcs);
   FUNC_18();
  }
  VAR_11->nested.dirty_vmcs12 = 1;
 }

 return FUNC_16(VAR_7);
}
