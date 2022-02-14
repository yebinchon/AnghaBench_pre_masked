
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct replay_opts {scalar_t__ action; TYPE_1__* revs; } ;
struct TYPE_2__ {int reverse; int no_walk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct replay_opts *VAR_1)
{




 if (VAR_1->action == VAR_0 && !VAR_1->revs->no_walk)
  VAR_1->revs->reverse ^= 1;

 if (FUNC_2(VAR_1->revs))
  return FUNC_1(FUNC_0("revision walk setup failed"));

 return 0;
}
