
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct x86_exception {int dummy; } ;
struct vmcs12 {unsigned long long vmcs_link_pointer; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;
struct TYPE_3__ {unsigned long long current_vmptr; } ;
struct TYPE_4__ {TYPE_1__ nested; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,struct vmcs12*) ;
 struct vmcs12* FUNC_1 (struct kvm_vcpu*) ;
 struct vmcs12* FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,unsigned long,int,int,int,int *) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 int FUNC_7 (struct kvm_vcpu*,struct x86_exception*) ;
 unsigned long FUNC_8 (struct kvm_vcpu*,int) ;
 int FUNC_9 (struct kvm_vcpu*,int,int ) ;
 scalar_t__ FUNC_10 (struct kvm_vcpu*,int ,int *,int,struct x86_exception*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*,int ) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 TYPE_2__* FUNC_15 (struct kvm_vcpu*) ;
 int FUNC_16 (struct vmcs12*,unsigned long,short) ;
 short FUNC_17 (unsigned long) ;
 int FUNC_18 (int ) ;
 unsigned long FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct kvm_vcpu *VAR_3)
{
 unsigned long VAR_4;
 u64 VAR_5;
 unsigned long VAR_6 = FUNC_19(VAR_0);
 u32 VAR_7 = FUNC_18(VAR_2);
 int VAR_8;
 gva_t VAR_9 = 0;
 struct vmcs12 *VAR_10;
 struct x86_exception VAR_11;
 short VAR_12;

 if (!FUNC_11(VAR_3))
  return 1;

 if (FUNC_15(VAR_3)->nested.current_vmptr == -1ull)
  return FUNC_12(VAR_3);

 if (!FUNC_5(VAR_3))
  VAR_10 = FUNC_2(VAR_3);
 else {




  if (FUNC_2(VAR_3)->vmcs_link_pointer == -1ull)
   return FUNC_12(VAR_3);
  VAR_10 = FUNC_1(VAR_3);
 }


 VAR_4 = FUNC_8(VAR_3, (((VAR_7) >> 28) & 0xf));

 VAR_12 = FUNC_17(VAR_4);
 if (VAR_12 < 0)
  return FUNC_13(VAR_3,
   VAR_1);

 if (!FUNC_5(VAR_3) && FUNC_6(VAR_4))
  FUNC_0(VAR_3, VAR_10);


 VAR_5 = FUNC_16(VAR_10, VAR_4, VAR_12);






 if (VAR_7 & (1u << 10)) {
  FUNC_9(VAR_3, (((VAR_7) >> 3) & 0xf),
   VAR_5);
 } else {
  VAR_8 = FUNC_4(VAR_3) ? 8 : 4;
  if (FUNC_3(VAR_3, VAR_6,
    VAR_7, 1, VAR_8, &VAR_9))
   return 1;

  if (FUNC_10(VAR_3, VAR_9, &VAR_5, VAR_8, &VAR_11))
   FUNC_7(VAR_3, &VAR_11);
 }

 return FUNC_14(VAR_3);
}
