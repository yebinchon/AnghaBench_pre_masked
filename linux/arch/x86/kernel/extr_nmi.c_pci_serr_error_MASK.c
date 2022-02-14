
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct pt_regs*) ;
 int FUNC_1 (struct pt_regs*,char*) ;
 int FUNC_2 (unsigned char,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(unsigned char VAR_5, struct pt_regs *VAR_6)
{

 if (FUNC_0(VAR_3, VAR_6))
  return;

 FUNC_3("NMI: PCI system error (SERR) for reason %02x on CPU %d.\n",
   VAR_5, FUNC_4());

 if (VAR_4)
  FUNC_1(VAR_6, "NMI: Not continuing");

 FUNC_3("Dazed and confused, but trying to continue\n");


 VAR_5 = (VAR_5 & VAR_0) | VAR_1;
 FUNC_2(VAR_5, VAR_2);
}
