
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_9)
{
 FUNC_4("Mem abort info:\n");

 FUNC_4("  ESR = 0x%08x\n", VAR_9);
 FUNC_4("  EC = 0x%02lx: %s, IL = %u bits\n",
   FUNC_0(VAR_9), FUNC_2(VAR_9),
   (VAR_9 & VAR_4) ? 32 : 16);
 FUNC_4("  SET = %lu, FnV = %lu\n",
   (VAR_9 & VAR_7) >> VAR_8,
   (VAR_9 & VAR_2) >> VAR_3);
 FUNC_4("  EA = %lu, S1PTW = %lu\n",
   (VAR_9 & VAR_0) >> VAR_1,
   (VAR_9 & VAR_5) >> VAR_6);

 if (FUNC_3(VAR_9))
  FUNC_1(VAR_9);
}
