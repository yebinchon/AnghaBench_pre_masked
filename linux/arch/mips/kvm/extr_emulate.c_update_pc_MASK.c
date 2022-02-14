
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pc; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int,int*) ;
 int FUNC_1 (char*,int) ;

enum emulation_result FUNC_2(struct kvm_vcpu *VAR_3, u32 VAR_4)
{
 int VAR_5;

 if (VAR_4 & VAR_0) {
  VAR_5 = FUNC_0(VAR_3, VAR_3->arch.pc,
          &VAR_3->arch.pc);
  if (VAR_5)
   return VAR_2;
 } else {
  VAR_3->arch.pc += 4;
 }

 FUNC_1("update_pc(): New PC: %#lx\n", VAR_3->arch.pc);

 return VAR_1;
}
