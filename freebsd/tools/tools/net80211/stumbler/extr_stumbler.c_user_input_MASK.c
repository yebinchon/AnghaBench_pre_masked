
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int locked; } ;



 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

void FUNC_6() {
 static char VAR_1[3];
 static int VAR_2 = 0;
 int VAR_3;

 VAR_3 = FUNC_3();

 switch (VAR_3) {
  case 'w':
   FUNC_4();
   break;

  case 'q':
   FUNC_1(0);
   break;

  case 'c':
   VAR_0.locked = !VAR_0.locked;
   break;

  case 128:
   FUNC_2(0, "getch()");
   break;

  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
   VAR_1[VAR_2++] = VAR_3;
   if (VAR_2 == 2) {
    int VAR_4 = FUNC_0(VAR_1);
    if (VAR_4 <= 11 && VAR_4 >= 1) {
     FUNC_5(FUNC_0(VAR_1));
     VAR_0.locked = 1;
    }
    VAR_2 = 0;
   }
   break;

  default:
   VAR_2 = 0;
   break;
 }
}
