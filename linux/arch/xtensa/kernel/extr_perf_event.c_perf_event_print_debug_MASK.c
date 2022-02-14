
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (char*,unsigned int,int ,...) ;
 int FUNC_7 () ;

void FUNC_8(void)
{
 unsigned long VAR_2;
 unsigned VAR_3;

 FUNC_5(VAR_2);
 FUNC_6("CPU#%d: PMG: 0x%08lx\n", FUNC_7(),
  FUNC_3(VAR_1));
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  FUNC_6("PM%d: 0x%08lx, PMCTRL%d: 0x%08lx, PMSTAT%d: 0x%08lx\n",
   VAR_3, FUNC_3(FUNC_0(VAR_3)),
   VAR_3, FUNC_3(FUNC_1(VAR_3)),
   VAR_3, FUNC_3(FUNC_2(VAR_3)));
 FUNC_4(VAR_2);
}
