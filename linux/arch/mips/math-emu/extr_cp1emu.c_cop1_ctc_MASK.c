
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pt_regs {int* regs; scalar_t__ cp0_epc; } ;
struct mips_fpu_struct {int fcr31; } ;
typedef int mips_instruction ;
struct TYPE_2__ {int fpu_msk31; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (char*,void*,size_t,int) ;

__attribute__((used)) static inline void FUNC_3(struct pt_regs *VAR_15, struct mips_fpu_struct *VAR_16,
       mips_instruction VAR_17)
{
 u32 VAR_18 = VAR_16->fcr31;
 u32 VAR_19;
 u32 VAR_20;

 if (FUNC_1(VAR_17) == 0)
  VAR_19 = 0;
 else
  VAR_19 = VAR_15->regs[FUNC_1(VAR_17)];

 switch (FUNC_0(VAR_17)) {
 case 131:
  FUNC_2("%p gpr[%d]->csr=%08x\n",
    (void *)VAR_15->cp0_epc, FUNC_1(VAR_17), VAR_19);


  VAR_20 = VAR_13.fpu_msk31;
  VAR_18 = (VAR_19 & ~VAR_20) | (VAR_18 & VAR_20);
  break;

 case 129:
  if (!VAR_14)
   break;
  FUNC_2("%p gpr[%d]->enr=%08x\n",
    (void *)VAR_15->cp0_epc, FUNC_1(VAR_17), VAR_19);
  VAR_18 &= ~(VAR_7 | VAR_0 | VAR_9);
  VAR_18 |= (VAR_19 << (VAR_8 - VAR_12)) &
    VAR_7;
  VAR_18 |= VAR_19 & (VAR_0 | VAR_9);
  break;

 case 128:
  if (!VAR_14)
   break;
  FUNC_2("%p gpr[%d]->exr=%08x\n",
    (void *)VAR_15->cp0_epc, FUNC_1(VAR_17), VAR_19);
  VAR_18 &= ~(VAR_2 | VAR_1);
  VAR_18 |= VAR_19 & (VAR_2 | VAR_1);
  break;

 case 130:
  if (!VAR_14)
   break;
  FUNC_2("%p gpr[%d]->ccr=%08x\n",
    (void *)VAR_15->cp0_epc, FUNC_1(VAR_17), VAR_19);
  VAR_18 &= ~(VAR_5 | VAR_3);
  VAR_18 |= (VAR_19 << (VAR_6 - VAR_10)) &
    VAR_3;
  VAR_18 |= (VAR_19 << (VAR_4 - VAR_11)) &
    VAR_5;
  break;

 default:
  break;
 }

 VAR_16->fcr31 = VAR_18;
}
