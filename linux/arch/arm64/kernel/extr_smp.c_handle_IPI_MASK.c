
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;







 int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int,char*,unsigned int) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned int,struct pt_regs*) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char*,unsigned int,int) ;
 int FUNC_11 () ;
 struct pt_regs* FUNC_12 (struct pt_regs*) ;
 unsigned int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;

void FUNC_18(int VAR_4, struct pt_regs *VAR_5)
{
 unsigned int VAR_6 = FUNC_13();
 struct pt_regs *VAR_7 = FUNC_12(VAR_5);

 if ((unsigned)VAR_4 < VAR_1) {
  FUNC_15(VAR_3[VAR_4]);
  FUNC_2(VAR_6, VAR_2[VAR_4]);
 }

 switch (VAR_4) {
 case 130:
  FUNC_11();
  break;

 case 134:
  FUNC_6();
  FUNC_4();
  FUNC_7();
  break;

 case 132:
  FUNC_6();
  FUNC_9();
  FUNC_7();
  break;

 case 133:
  if (FUNC_0(VAR_0)) {
   FUNC_6();
   FUNC_5(VAR_6, VAR_5);

   FUNC_17();
  }
  break;
 default:
  FUNC_10("CPU%u: Unknown IPI message 0x%x\n", VAR_6, VAR_4);
  break;
 }

 if ((unsigned)VAR_4 < VAR_1)
  FUNC_16(VAR_3[VAR_4]);
 FUNC_12(VAR_7);
}
