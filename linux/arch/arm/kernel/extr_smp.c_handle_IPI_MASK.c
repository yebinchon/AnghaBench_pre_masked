
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct pt_regs*) ;
 int FUNC_8 (char*,unsigned int,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 struct pt_regs* FUNC_12 (struct pt_regs*) ;
 unsigned int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

void FUNC_17(int VAR_3, struct pt_regs *VAR_4)
{
 unsigned int VAR_5 = FUNC_13();
 struct pt_regs *VAR_6 = FUNC_12(VAR_4);

 if ((unsigned)VAR_3 < VAR_0) {
  FUNC_15(VAR_2[VAR_3]);
  FUNC_0(VAR_5, VAR_1[VAR_3]);
 }

 switch (VAR_3) {
 case 128:
  break;
 case 130:
  FUNC_11();
  break;

 case 135:
  FUNC_4();
  FUNC_1();
  FUNC_5();
  break;

 case 132:
  FUNC_4();
  FUNC_3(VAR_5);
  FUNC_5();
  break;
 case 134:
  FUNC_4();
  FUNC_2(VAR_5);
  FUNC_5();
  break;

 case 133:
  FUNC_9();
  FUNC_4();
  FUNC_7(VAR_4);
  FUNC_5();
  FUNC_10();
  break;

 default:
  FUNC_8("CPU%u: Unknown IPI message 0x%x\n",
          VAR_5, VAR_3);
  break;
 }

 if ((unsigned)VAR_3 < VAR_0)
  FUNC_16(VAR_2[VAR_3]);
 FUNC_12(VAR_6);
}
