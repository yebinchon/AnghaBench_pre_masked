
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t readsp; int * readstack; } ;



 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 char FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(void)
{

 for (;;) {
  switch (FUNC_3()) {
  case 'M':
   return;
  case 128:
   FUNC_0(1, "mark not found");
   return;
  case 'l':
  case 'L':
  case 's':
  case 'S':
  case ':':
  case ';':
  case '<':
  case '>':
  case '=':
   FUNC_5();
   if (FUNC_3() == 'e')
    FUNC_5();
   else
    FUNC_6();
   break;
  case '[':
   FUNC_1(FUNC_2(&VAR_0.readstack[VAR_0.readsp]));
   break;
  case '!':
   switch (FUNC_3()) {
    case '<':
    case '>':
    case '=':
     FUNC_5();
     if (FUNC_3() == 'e')
      FUNC_5();
     else
      FUNC_6();
     break;
    default:
     FUNC_1(FUNC_4());
     break;
   }
   break;
  default:
   break;
  }
 }
}
