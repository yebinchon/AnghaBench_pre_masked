
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct pt_regs*) ;

void FUNC_5(const char *VAR_1, struct pt_regs *VAR_2, long VAR_3)
{

 FUNC_0();
 FUNC_3("\n%s#: %04lx\n", VAR_1, VAR_3 & 0xffff);
 FUNC_4(VAR_2);
 FUNC_1(VAR_0);
}
