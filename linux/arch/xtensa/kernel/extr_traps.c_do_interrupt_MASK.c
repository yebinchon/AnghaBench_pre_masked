
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned int VAR_0 ;







 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,struct pt_regs*) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct pt_regs* FUNC_4 (struct pt_regs*) ;
 int FUNC_5 () ;
 unsigned int FUNC_6 (int ) ;

void FUNC_7(struct pt_regs *VAR_3)
{
 static const unsigned VAR_4[] = {
  0,
  134,
  133,
  132,
  131,
  130,
  129,
  128,
 };
 struct pt_regs *VAR_5;

 FUNC_5();

 VAR_5 = FUNC_4(VAR_3);
 FUNC_2();

 for (;;) {
  unsigned VAR_6 = FUNC_6(VAR_2);
  unsigned VAR_7 = FUNC_6(VAR_7);
  unsigned VAR_8 = VAR_6 & VAR_7;
  unsigned VAR_9;

  for (VAR_9 = VAR_0; VAR_9 > 0; --VAR_9) {
   if (VAR_8 & VAR_4[VAR_9]) {
    VAR_8 &= VAR_4[VAR_9];
    break;
   }
  }

  if (VAR_9 == 0)
   break;

  FUNC_1(FUNC_0(VAR_8), VAR_3);
 }

 FUNC_3();
 FUNC_4(VAR_5);
}
