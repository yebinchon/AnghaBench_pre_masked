
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* command; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (int*,char*) ;

__attribute__((used)) static char*
FUNC_5(mrb_state *VAR_3, mrdb_state *VAR_4)
{
  int VAR_5;
  int VAR_6;

  for (VAR_5=0; VAR_5<VAR_1; VAR_5++) {
    if ((VAR_6=FUNC_2()) == VAR_0 || VAR_6 == '\n') break;
    VAR_4->command[VAR_5] = VAR_6;
  }

  if (VAR_5 == 0 && FUNC_1(VAR_2)) {
    FUNC_0(VAR_2);
    FUNC_4(VAR_4->command, "quit");
    VAR_5 += sizeof("quit") - 1;
  }

  if (VAR_5 == VAR_1) {
    for ( ; (VAR_6=FUNC_2()) != VAR_0 && VAR_6 !='\n'; VAR_5++) ;
  }

  if (VAR_5 > VAR_1) {
    FUNC_3("command line too long.\n");
    VAR_5 = 0;
  }
  VAR_4->command[VAR_5] = '\0';

  return VAR_4->command;
}
