
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int BYTE ;



 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 int FUNC_5 () ;

int FUNC_6(void)
{
  BYTE VAR_3;
  WORD VAR_4;

  FUNC_3("RPN Calculator");
  VAR_2 = 0;
  VAR_1 = 0;

  while((VAR_3 = FUNC_4()) != 0) {
    switch(VAR_3) {
    case 128:
      FUNC_2(VAR_0);
      break;
    case '+':
      FUNC_2(FUNC_0() + FUNC_0());
      break;
    case '*':
      FUNC_2(FUNC_0() * FUNC_0());
      break;
    case '-':
      VAR_4 = FUNC_0();
      FUNC_2(FUNC_0() - VAR_4);
      break;
    case '/':
      VAR_4 = FUNC_0();
      if(VAR_4 != 0)
 FUNC_2(FUNC_0() / VAR_4);
      else
 FUNC_3("Divide by 0");
      break;
    case '\n':
      FUNC_1("==> %d\n", FUNC_5());
      break;
    }
  }
}
