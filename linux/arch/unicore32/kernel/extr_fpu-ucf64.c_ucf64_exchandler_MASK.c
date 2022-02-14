
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct pt_regs*) ;

void FUNC_4(u32 VAR_15, u32 VAR_16, struct pt_regs *VAR_17)
{
 u32 VAR_18 = VAR_16;
 u32 VAR_19 = VAR_0 & VAR_16;

 FUNC_2("UniCore-F64: instruction %08x fpscr %08x\n",
   VAR_15, VAR_16);

 if (VAR_19 & VAR_2) {
  if (VAR_19 & VAR_3)
   VAR_18 |= VAR_3;
  else
   VAR_18 &= ~(VAR_3);
  VAR_19 &= ~(VAR_2 | VAR_3);
 } else {
  FUNC_2("UniCore-F64 Error: unhandled exceptions\n");
  FUNC_2("UniCore-F64 FPSCR 0x%08x INST 0x%08x\n",
    FUNC_0(VAR_1), VAR_15);

  FUNC_3(VAR_17);
  return;
 }






 VAR_18 &= ~(VAR_12 | VAR_7 | VAR_11 | VAR_14 |
   VAR_9 | VAR_5 | VAR_6 | VAR_10 |
   VAR_13 | VAR_8 | VAR_4);

 VAR_18 |= VAR_19;
 FUNC_1(VAR_1, VAR_18);
}
