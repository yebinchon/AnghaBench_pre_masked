
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t rs; size_t rt; unsigned long simmediate; } ;
struct TYPE_3__ {unsigned long simmediate; } ;
union mips_instruction {TYPE_2__ i_format; TYPE_1__ spec3_format; } ;
typedef size_t u32 ;
struct kvm_vcpu_arch {unsigned long pc; unsigned long* gprs; } ;
struct kvm_vcpu {struct kvm_vcpu_arch arch; } ;
struct kvm_run {int dummy; } ;
typedef unsigned long s16 ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int FUNC_0 () ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*,size_t,size_t,size_t,unsigned long,unsigned long) ;
 int FUNC_4 (char*,unsigned long,unsigned long,size_t,size_t,size_t,unsigned long,unsigned long) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct kvm_vcpu*,size_t) ;

__attribute__((used)) static enum emulation_result FUNC_7(union mips_instruction VAR_8,
            u32 *VAR_9, u32 VAR_10,
            struct kvm_run *VAR_11,
            struct kvm_vcpu *VAR_12)
{
 enum emulation_result VAR_13 = VAR_5;
 u32 VAR_14, VAR_15, VAR_16, VAR_17;
 s16 VAR_18;
 struct kvm_vcpu_arch *VAR_19 = &VAR_12->arch;
 unsigned long VAR_20, VAR_21;





 VAR_21 = VAR_12->arch.pc;
 VAR_13 = FUNC_6(VAR_12, VAR_10);
 if (VAR_13 == VAR_6)
  return VAR_13;

 VAR_17 = VAR_8.i_format.rs;
 VAR_15 = VAR_8.i_format.rt;
 if (VAR_7)
  VAR_18 = VAR_8.spec3_format.simmediate;
 else
  VAR_18 = VAR_8.i_format.simmediate;
 VAR_14 = VAR_15 & VAR_1;
 VAR_16 = VAR_15 & VAR_2;

 VAR_20 = VAR_19->gprs[VAR_17] + VAR_18;

 FUNC_3("CACHE (cache: %#x, op: %#x, base[%d]: %#lx, offset: %#x\n",
    VAR_14, VAR_16, VAR_17, VAR_19->gprs[VAR_17], VAR_18);


 if (VAR_14 != VAR_4 && VAR_14 != VAR_3)
  return VAR_5;

 switch (VAR_15) {
 case 129:
  FUNC_2(VAR_20);
  return VAR_5;
 case 128:
  FUNC_1(VAR_20);
  return VAR_5;
 case 131:
 case 132:
 case 130:
  if (FUNC_0() == VAR_0) {

   FUNC_5(0, 0);
   return VAR_5;
  }


  break;
 default:
  break;
 };

 FUNC_4("@ %#lx/%#lx CACHE (cache: %#x, op: %#x, base[%d]: %#lx, offset: %#x\n",
  VAR_21, VAR_12->arch.gprs[31], VAR_14, VAR_16, VAR_17, VAR_19->gprs[VAR_17],
  VAR_18);

 VAR_12->arch.pc = VAR_21;

 return VAR_6;
}
