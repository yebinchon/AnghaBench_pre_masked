
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cmdargs {size_t argc; size_t argn; TYPE_1__* prompt; int * argv; } ;
struct TYPE_3__ {int auth; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct cmdargs const *VAR_1)
{
  if (!VAR_1->prompt || FUNC_2(VAR_1->prompt) ||
      (VAR_1->argc > VAR_1->argn && !FUNC_3(VAR_1->argv[VAR_1->argn], "all") &&
       (VAR_1->prompt->auth & VAR_0)))
    FUNC_0();
  if (VAR_1->prompt)
    FUNC_1(VAR_1->prompt, 1);

  return 0;
}
