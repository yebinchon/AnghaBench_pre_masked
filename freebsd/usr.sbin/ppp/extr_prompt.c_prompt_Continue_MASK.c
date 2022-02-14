
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct prompt {int nonewline; int owner; } ;
struct TYPE_4__ {char* name; struct prompt* arg; int load; int func; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct prompt*) ;
 int FUNC_2 (struct prompt*) ;
 int VAR_2 ;
 int FUNC_3 (struct prompt*) ;
 scalar_t__ FUNC_4 (struct prompt*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(struct prompt *VAR_3)
{
  FUNC_6(&VAR_1);
  if (FUNC_0() == FUNC_4(VAR_3)) {
    FUNC_3(VAR_3);
    VAR_3->nonewline = 1;
    FUNC_2(VAR_3);
    FUNC_1(VAR_3);
  } else if (!VAR_3->owner) {
    VAR_1.func = VAR_2;
    VAR_1.name = "prompt bg";
    VAR_1.load = VAR_0;
    VAR_1.arg = VAR_3;
    FUNC_5(&VAR_1);
  }
}
