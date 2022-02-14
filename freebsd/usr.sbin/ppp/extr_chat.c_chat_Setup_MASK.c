
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num; } ;
struct chat {char* script; scalar_t__ argc; int arg; int TimeoutSec; char const* phone; int timeout; int pause; TYPE_1__ abort; scalar_t__ TimedOut; int * nargptr; int * argptr; int argv; int state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct chat *VAR_2, const char *VAR_3, const char *VAR_4)
{
  VAR_2->state = VAR_0;

  if (VAR_3 == ((void*)0)) {
    *VAR_2->script = '\0';
    VAR_2->argc = 0;
  } else {
    FUNC_2(VAR_2->script, VAR_3, sizeof VAR_2->script - 1);
    VAR_2->script[sizeof VAR_2->script - 1] = '\0';
    VAR_2->argc = FUNC_0(VAR_2->script, VAR_2->argv, FUNC_1(VAR_2->argv), VAR_1);
  }

  VAR_2->arg = -1;
  VAR_2->argptr = ((void*)0);
  VAR_2->nargptr = ((void*)0);

  VAR_2->TimeoutSec = 30;
  VAR_2->TimedOut = 0;
  VAR_2->phone = VAR_4;
  VAR_2->abort.num = 0;

  FUNC_3(&VAR_2->pause);
  FUNC_3(&VAR_2->timeout);

  return VAR_2->argc >= 0;
}
