
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; struct pppThroughput* arg; int * func; scalar_t__ load; } ;
struct pppThroughput {int rolling; TYPE_1__ Timer; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(struct pppThroughput *VAR_2, const char *VAR_3, int VAR_4)
{
  FUNC_1(&VAR_2->Timer);
  VAR_2->rolling = VAR_4 ? 1 : 0;
  if (VAR_2->rolling) {
    VAR_2->Timer.load = VAR_0;
    VAR_2->Timer.func = VAR_1;
    VAR_2->Timer.name = VAR_3;
    VAR_2->Timer.arg = VAR_2;
    FUNC_0(&VAR_2->Timer);
  } else {
    VAR_2->Timer.load = 0;
    VAR_2->Timer.func = ((void*)0);
    VAR_2->Timer.name = ((void*)0);
    VAR_2->Timer.arg = ((void*)0);
  }
}
