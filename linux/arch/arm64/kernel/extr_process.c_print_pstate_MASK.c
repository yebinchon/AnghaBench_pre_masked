
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pt_regs {int pstate; } ;


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
 scalar_t__ FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (char*,int,char,char,char,char,char,...) ;

__attribute__((used)) static void FUNC_2(struct pt_regs *VAR_20)
{
 u64 VAR_21 = VAR_20->pstate;

 if (FUNC_0(VAR_20)) {
  FUNC_1("pstate: %08llx (%c%c%c%c %c %s %s %c%c%c)\n",
   VAR_21,
   VAR_21 & VAR_5 ? 'N' : 'n',
   VAR_21 & VAR_9 ? 'Z' : 'z',
   VAR_21 & VAR_1 ? 'C' : 'c',
   VAR_21 & VAR_8 ? 'V' : 'v',
   VAR_21 & VAR_6 ? 'Q' : 'q',
   VAR_21 & VAR_7 ? "T32" : "A32",
   VAR_21 & VAR_2 ? "BE" : "LE",
   VAR_21 & VAR_0 ? 'A' : 'a',
   VAR_21 & VAR_4 ? 'I' : 'i',
   VAR_21 & VAR_3 ? 'F' : 'f');
 } else {
  FUNC_1("pstate: %08llx (%c%c%c%c %c%c%c%c %cPAN %cUAO)\n",
   VAR_21,
   VAR_21 & VAR_15 ? 'N' : 'n',
   VAR_21 & VAR_19 ? 'Z' : 'z',
   VAR_21 & VAR_11 ? 'C' : 'c',
   VAR_21 & VAR_18 ? 'V' : 'v',
   VAR_21 & VAR_12 ? 'D' : 'd',
   VAR_21 & VAR_10 ? 'A' : 'a',
   VAR_21 & VAR_14 ? 'I' : 'i',
   VAR_21 & VAR_13 ? 'F' : 'f',
   VAR_21 & VAR_16 ? '+' : '-',
   VAR_21 & VAR_17 ? '+' : '-');
 }
}
