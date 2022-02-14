
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__ ip; scalar_t__ cs; } ;


 int FUNC_0 (char*,char const*,int,...) ;
 int FUNC_1 (struct pt_regs*,char const*) ;

void FUNC_2(struct pt_regs *VAR_0, const char *VAR_1)
{



 FUNC_0("%sRIP: %04x:%pS\n", VAR_1, (int)VAR_0->cs, (void *)VAR_0->ip);

 FUNC_1(VAR_0, VAR_1);
}
