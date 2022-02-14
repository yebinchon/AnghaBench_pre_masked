
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef unsigned long u16 ;
struct vcpu_vmx {int idt_vectoring_info; } ;
struct TYPE_2__ {int nmi_injected; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned long,int,int,int,int) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int ) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu *VAR_7)
{
 struct vcpu_vmx *VAR_8 = FUNC_5(VAR_7);
 unsigned long VAR_9;
 bool VAR_10 = 0;
 u32 VAR_11 = 0;
 u16 VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_15 = (VAR_8->idt_vectoring_info & VAR_5);
 VAR_16 = (VAR_8->idt_vectoring_info & VAR_6);
 VAR_14 = (VAR_8->idt_vectoring_info & VAR_4);

 VAR_9 = FUNC_7(VAR_0);

 VAR_13 = (u32)VAR_9 >> 30;
 if (VAR_13 == VAR_2 && VAR_15) {
  switch (VAR_14) {
  case 130:
   VAR_7->arch.nmi_injected = 0;
   FUNC_8(VAR_7, 1);
   break;
  case 132:
  case 128:
   FUNC_2(VAR_7);
   break;
  case 131:
   if (VAR_8->idt_vectoring_info &
       VAR_3) {
    VAR_10 = 1;
    VAR_11 =
     FUNC_6(VAR_1);
   }

  case 129:
   FUNC_1(VAR_7);
   break;
  default:
   break;
  }
 }
 VAR_12 = VAR_9;

 if (!VAR_15 || (VAR_14 != 131 &&
         VAR_14 != 132 &&
         VAR_14 != 130))
  FUNC_0(!FUNC_4(VAR_7));





 return FUNC_3(VAR_7, VAR_12,
          VAR_14 == 128 ? VAR_16 : -1,
          VAR_13, VAR_10, VAR_11);
}
