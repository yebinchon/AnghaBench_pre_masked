
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int load; char* name; struct chat* arg; int func; } ;
struct chat {int TimeoutSec; TYPE_1__ timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct chat *VAR_2)
{
  FUNC_1(&VAR_2->timeout);
  if (VAR_2->TimeoutSec > 0) {
    VAR_2->timeout.load = VAR_0 * VAR_2->TimeoutSec;
    VAR_2->timeout.func = VAR_1;
    VAR_2->timeout.name = "chat timeout";
    VAR_2->timeout.arg = VAR_2;
    FUNC_0(&VAR_2->timeout);
  }
}
