
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long msr; int dar; int nip; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,...) ;

int FUNC_3(struct pt_regs *VAR_1)
{
 unsigned long VAR_2 = VAR_1->msr;

 FUNC_2("Machine check in kernel mode.\n");
 FUNC_2("Caused by (from SRR1=%lx): ", VAR_2);
 if (VAR_2 & 0x40000000)
  FUNC_1("Fetch error at address %lx\n", VAR_1->nip);
 else
  FUNC_1("Data access error at address %lx\n", VAR_1->dar);
 return 0;

}
