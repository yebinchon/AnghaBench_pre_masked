
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int e_flags; char* e_help; scalar_t__ e_char; } ;
typedef TYPE_1__ esctable_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;

void
FUNC_4(int VAR_5)
{
 esctable_t *VAR_6;

 FUNC_2("%c\r\n", VAR_5);
 for (VAR_6 = VAR_3; VAR_6->e_char; VAR_6++) {
  if ((VAR_6->e_flags&VAR_2) && VAR_4)
   continue;
  FUNC_2("%2s", FUNC_1(FUNC_0(FUNC_3(VAR_0))));
  FUNC_2("%-2s %c   %s\r\n", FUNC_1(VAR_6->e_char),
   VAR_6->e_flags&VAR_1 ? '*': ' ', VAR_6->e_help);
 }
}
