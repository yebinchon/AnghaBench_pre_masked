
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct pt_regs*) ;
 int FUNC_1 (struct pt_regs*,char*) ;
 int FUNC_2 (unsigned char,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*,unsigned char,int ) ;
 int FUNC_4 (struct pt_regs*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(unsigned char VAR_5, struct pt_regs *VAR_6)
{
 unsigned long VAR_7;


 if (FUNC_0(VAR_0, VAR_6))
  return;

 FUNC_3(
 "NMI: IOCK error (debug interrupt?) for reason %02x on CPU %d.\n",
   VAR_5, FUNC_5());
 FUNC_4(VAR_6);

 if (VAR_4) {
  FUNC_1(VAR_6, "NMI IOCK error: Not continuing");






  return;
 }


 VAR_5 = (VAR_5 & VAR_2) | VAR_1;
 FUNC_2(VAR_5, VAR_3);

 VAR_7 = 20000;
 while (--VAR_7) {
  FUNC_6();
  FUNC_7(100);
 }

 VAR_5 &= ~VAR_1;
 FUNC_2(VAR_5, VAR_3);
}
