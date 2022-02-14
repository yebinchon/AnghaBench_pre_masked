
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc3_uartregs {int iu_thr; int iu_lsr; } ;


 struct ioc3_uartregs* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char,int *) ;

void FUNC_3(char VAR_0)
{
 struct ioc3_uartregs *VAR_1 = FUNC_0();

 while ((FUNC_1(&VAR_1->iu_lsr) & 0x20) == 0)
  ;
 FUNC_2(VAR_0, &VAR_1->iu_thr);
}
