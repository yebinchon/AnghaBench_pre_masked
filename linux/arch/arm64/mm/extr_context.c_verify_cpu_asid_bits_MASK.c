
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 () ;

void FUNC_4(void)
{
 u32 VAR_1 = FUNC_1();

 if (VAR_1 < VAR_0) {




  FUNC_2("CPU%d: smaller ASID size(%u) than boot CPU (%u)\n",
    FUNC_3(), VAR_1, VAR_0);
  FUNC_0();
 }
}
