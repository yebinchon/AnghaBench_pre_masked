
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union mips_instruction {int word; } ;
typedef int u32 ;
struct TYPE_2__ {int host_cp0_cause; scalar_t__ pc; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (union mips_instruction) ;
 int FUNC_1 (int*,struct kvm_vcpu*,int *) ;
 unsigned int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_4, unsigned int VAR_5, bool VAR_6)
{
 u32 VAR_7;
 int VAR_8;
 VAR_7 = 0x70080000 << VAR_5;
 if ((s32)VAR_7 < 0) {




  if (!VAR_6 || !(FUNC_2() & VAR_1))
   return 1;
 } else {
  VAR_7 <<= 8;
  if ((s32)VAR_7 < 0) {
   union mips_instruction VAR_9;
   unsigned int VAR_10;
   u32 *VAR_11;





   VAR_10 = FUNC_2();
   if (!(VAR_10 & (VAR_2 | VAR_1)) &&
       (VAR_10 & VAR_3))
    return 1;




   VAR_11 = (u32 *)VAR_4->arch.pc;
   if (VAR_4->arch.host_cp0_cause & VAR_0)
    VAR_11 += 1;
   VAR_8 = FUNC_1(VAR_11, VAR_4, &VAR_9.word);
   if (!VAR_8 && FUNC_0(VAR_9))
    return 1;
  }
 }

 return 0;
}
