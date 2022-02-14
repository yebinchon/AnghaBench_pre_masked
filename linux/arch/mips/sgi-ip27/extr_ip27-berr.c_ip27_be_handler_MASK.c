
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int cp0_cause; int cp0_epc; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct pt_regs*) ;

int FUNC_6(struct pt_regs *VAR_8, int VAR_9)
{
 unsigned long VAR_10, VAR_11;
 int VAR_12 = VAR_8->cp0_cause & 4;
 int VAR_13 = FUNC_0(VAR_1);

 if (VAR_9)
  return VAR_0;

 FUNC_4("Slice %c got %cbe at 0x%lx\n", 'A' + VAR_13, VAR_12 ? 'd' : 'i',
        VAR_8->cp0_epc);
 FUNC_4("Hub information:\n");
 FUNC_4("ERR_INT_PEND = 0x%06llx\n", FUNC_0(VAR_2));
 VAR_10 = FUNC_0(VAR_13 ? VAR_4 : VAR_3);
 VAR_11 = FUNC_0(VAR_13 ? VAR_6 : VAR_5);
 FUNC_1(VAR_10, VAR_11);
 FUNC_5(VAR_8);
 FUNC_2();
 while(1);
 FUNC_3(VAR_7);
}
