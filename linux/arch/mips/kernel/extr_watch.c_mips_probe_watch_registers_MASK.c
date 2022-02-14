
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int options; unsigned int* watch_reg_masks; int watch_reg_count; int watch_reg_use_cnt; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 () ;
 unsigned int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 () ;
 unsigned int FUNC_5 () ;
 unsigned int FUNC_6 () ;
 unsigned int FUNC_7 () ;
 unsigned int FUNC_8 () ;
 unsigned int FUNC_9 () ;
 unsigned int FUNC_10 () ;
 unsigned int FUNC_11 () ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (unsigned int) ;
 int FUNC_14 (unsigned int) ;
 int FUNC_15 (unsigned int) ;
 int FUNC_16 (unsigned int) ;
 int FUNC_17 (unsigned int) ;
 int FUNC_18 (unsigned int) ;
 int FUNC_19 (unsigned int) ;

void FUNC_20(struct cpuinfo_mips *VAR_4)
{
 unsigned int VAR_5;

 if ((VAR_4->options & VAR_0) == 0)
  return;




 FUNC_16(VAR_3);
 FUNC_0();
 VAR_5 = FUNC_8();
 FUNC_16(0);
 VAR_4->watch_reg_masks[0] = VAR_5 & VAR_3;



 VAR_4->watch_reg_count = 1;
 VAR_4->watch_reg_use_cnt = 1;
 VAR_5 = FUNC_1();
 FUNC_12(VAR_5 | VAR_2);
 FUNC_0();
 VAR_5 = FUNC_1();
 VAR_4->watch_reg_masks[0] |= (VAR_5 & VAR_2);
 if ((VAR_5 & VAR_1) == 0)
  return;

 FUNC_17(VAR_3);
 FUNC_0();
 VAR_5 = FUNC_9();
 FUNC_17(0);
 VAR_4->watch_reg_masks[1] = VAR_5 & VAR_3;

 VAR_4->watch_reg_count = 2;
 VAR_4->watch_reg_use_cnt = 2;
 VAR_5 = FUNC_2();
 FUNC_13(VAR_5 | VAR_2);
 FUNC_0();
 VAR_5 = FUNC_2();
 VAR_4->watch_reg_masks[1] |= (VAR_5 & VAR_2);
 if ((VAR_5 & VAR_1) == 0)
  return;

 FUNC_18(VAR_3);
 FUNC_0();
 VAR_5 = FUNC_10();
 FUNC_18(0);
 VAR_4->watch_reg_masks[2] = VAR_5 & VAR_3;

 VAR_4->watch_reg_count = 3;
 VAR_4->watch_reg_use_cnt = 3;
 VAR_5 = FUNC_3();
 FUNC_14(VAR_5 | VAR_2);
 FUNC_0();
 VAR_5 = FUNC_3();
 VAR_4->watch_reg_masks[2] |= (VAR_5 & VAR_2);
 if ((VAR_5 & VAR_1) == 0)
  return;

 FUNC_19(VAR_3);
 FUNC_0();
 VAR_5 = FUNC_11();
 FUNC_19(0);
 VAR_4->watch_reg_masks[3] = VAR_5 & VAR_3;

 VAR_4->watch_reg_count = 4;
 VAR_4->watch_reg_use_cnt = 4;
 VAR_5 = FUNC_4();
 FUNC_15(VAR_5 | VAR_2);
 FUNC_0();
 VAR_5 = FUNC_4();
 VAR_4->watch_reg_masks[3] |= (VAR_5 & VAR_2);
 if ((VAR_5 & VAR_1) == 0)
  return;


 VAR_4->watch_reg_count = 5;
 VAR_5 = FUNC_5();
 if ((VAR_5 & VAR_1) == 0)
  return;

 VAR_4->watch_reg_count = 6;
 VAR_5 = FUNC_6();
 if ((VAR_5 & VAR_1) == 0)
  return;

 VAR_4->watch_reg_count = 7;
 VAR_5 = FUNC_7();
 if ((VAR_5 & VAR_1) == 0)
  return;

 VAR_4->watch_reg_count = 8;
}
