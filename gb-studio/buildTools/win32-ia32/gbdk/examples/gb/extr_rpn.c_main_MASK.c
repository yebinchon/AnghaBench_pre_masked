
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
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 () ;

int FUNC_6()
{
  BYTE VAR_4;
  WORD VAR_5;

  FUNC_3("RPN Calculator");
  VAR_3 = 0;
  VAR_1 = 0;

  while((VAR_4 = FUNC_4(VAR_2)) != 0) {
    switch(VAR_4) {
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
      VAR_5 = FUNC_0();
      FUNC_2(FUNC_0() - VAR_5);
      break;
    case '/':
      VAR_5 = FUNC_0();
      if(VAR_5 != 0)
 FUNC_2(FUNC_0() / VAR_5);
      else
 FUNC_3("Divide by 0");
      break;
    case '\n':
      FUNC_1("==> %d\n", FUNC_5());
      break;
    }
  }
}
