
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t FUNC_0 (int) ;
 scalar_t__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_3 = FUNC_6();

 FUNC_7(FUNC_4() + VAR_2/VAR_0);
 FUNC_1();
 FUNC_2(0,
   VAR_1[FUNC_0(VAR_3)] + 0x0);
 FUNC_3("CPU#%d finished, CP0_ST=%x\n",
   FUNC_6(), FUNC_5());
}
