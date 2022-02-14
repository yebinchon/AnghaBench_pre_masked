
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* gpr; } ;


 int FUNC_0 () ;
 unsigned long FUNC_1 (unsigned long,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (unsigned long,int) ;
 unsigned long FUNC_5 (unsigned long,int) ;
 int FUNC_6 (struct pt_regs* const) ;

void FUNC_7(struct pt_regs * const VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2 = VAR_0->gpr[1];
 int VAR_3 = 1;


 VAR_1 += 1;

 if (!FUNC_6(VAR_0)) {
  while (VAR_1--) {
   VAR_2 = FUNC_1(VAR_2, VAR_3);
   if (!VAR_2)
    break;
   VAR_3 = 0;
  }
 } else {
  FUNC_2();
  while (VAR_1--) {
   VAR_2 = FUNC_4(VAR_2, VAR_3);
   if (!VAR_2)
    break;
   VAR_3 = 0;
  }
  FUNC_3();
 }
}
