
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_20 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,struct pt_regs*) ;

__attribute__((used)) static void FUNC_5(u32 VAR_21, u32 VAR_22, u32 VAR_23, struct pt_regs *VAR_24)
{
 int VAR_25 = 0;

 FUNC_2("VFP: raising exceptions %08x\n", VAR_21);

 if (VAR_21 == VAR_20) {
  FUNC_3("unhandled bounce", VAR_22);
  FUNC_4(VAR_1, VAR_24);
  return;
 }






 if (VAR_21 & (VAR_13|VAR_19|VAR_6|VAR_18))
  VAR_23 &= ~(VAR_13|VAR_19|VAR_6|VAR_18);

 VAR_23 |= VAR_21;

 FUNC_1(VAR_5, VAR_23);
 if (VAR_21 & VAR_7 && VAR_23 & VAR_8) VAR_25 = VAR_0;;
 if (VAR_21 & VAR_11 && VAR_23 & VAR_12) VAR_25 = VAR_3;;
 if (VAR_21 & VAR_16 && VAR_23 & VAR_17) VAR_25 = VAR_4;;
 if (VAR_21 & VAR_14 && VAR_23 & VAR_15) VAR_25 = VAR_2;;
 if (VAR_21 & VAR_9 && VAR_23 & VAR_10) VAR_25 = VAR_1;;

 if (VAR_25)
  FUNC_4(VAR_25, VAR_24);
}
