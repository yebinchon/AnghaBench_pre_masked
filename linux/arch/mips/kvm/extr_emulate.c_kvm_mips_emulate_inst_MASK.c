
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int func; } ;
struct TYPE_4__ {int opcode; } ;
union mips_instruction {int word; TYPE_2__ spec3_format; TYPE_1__ r_format; } ;
typedef int u32 ;
struct TYPE_6__ {int cache_exits; } ;
struct kvm_vcpu {TYPE_3__ stat; } ;
struct kvm_run {int dummy; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (char*,int*,int ) ;
 int FUNC_2 (int*,struct kvm_vcpu*,int *) ;
 int FUNC_3 (union mips_instruction,int*,int,struct kvm_run*,struct kvm_vcpu*) ;
 int FUNC_4 (union mips_instruction,int*,int,struct kvm_run*,struct kvm_vcpu*) ;

 int FUNC_5 (struct kvm_vcpu*,int ) ;

enum emulation_result FUNC_6(u32 VAR_4, u32 *VAR_5,
         struct kvm_run *VAR_6,
         struct kvm_vcpu *VAR_7)
{
 union mips_instruction VAR_8;
 enum emulation_result VAR_9 = VAR_1;
 int VAR_10;


 if (VAR_4 & VAR_0)
  VAR_5 += 1;
 VAR_10 = FUNC_2(VAR_5, VAR_7, &VAR_8.word);
 if (VAR_10)
  return VAR_2;

 switch (VAR_8.r_format.opcode) {
 case 129:
  VAR_9 = FUNC_3(VAR_8, VAR_5, VAR_4, VAR_6, VAR_7);
  break;


 case 130:
  ++VAR_7->stat.cache_exits;
  FUNC_5(VAR_7, VAR_3);
  VAR_9 = FUNC_4(VAR_8, VAR_5, VAR_4, VAR_6, VAR_7);
  break;
 default:
  FUNC_1("Instruction emulation not supported (%p/%#x)\n", VAR_5,
   VAR_8.word);
  FUNC_0(VAR_7);
  VAR_9 = VAR_2;
  break;
 }

 return VAR_9;
}
