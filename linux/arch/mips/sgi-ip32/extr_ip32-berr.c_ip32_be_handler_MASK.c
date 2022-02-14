
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int cp0_cause; int cp0_epc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char,int ) ;
 int FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_2->cp0_cause & 4;

 if (VAR_3)
  return VAR_0;

 FUNC_2("Got %cbe at 0x%lx\n", VAR_4 ? 'd' : 'i', VAR_2->cp0_epc);
 FUNC_3(VAR_2);
 FUNC_0();
 while(1);
 FUNC_1(VAR_1);
}
