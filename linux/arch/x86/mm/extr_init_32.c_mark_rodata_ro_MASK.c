
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (unsigned long) ;

void FUNC_7(void)
{
 unsigned long VAR_6 = FUNC_0(VAR_4);
 unsigned long VAR_7 = (unsigned long)VAR_2 - VAR_6;

 FUNC_4(FUNC_6(VAR_6), VAR_7 >> VAR_0);
 FUNC_3("Write protecting kernel text and read-only data: %luk\n",
  VAR_7 >> 10);

 VAR_5 = 1;
 FUNC_2();
 if (VAR_3 & VAR_1)
  FUNC_1();
}
