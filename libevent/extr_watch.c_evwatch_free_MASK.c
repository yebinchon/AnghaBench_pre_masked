
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct evwatch {size_t type; TYPE_1__* base; } ;
struct TYPE_3__ {int * watchers; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,struct evwatch*,int ) ;
 int FUNC_3 (struct evwatch*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_4(struct evwatch *VAR_2)
{
 FUNC_0(VAR_2->base, VAR_1);
 FUNC_2(&VAR_2->base->watchers[VAR_2->type], VAR_2, VAR_0);
 FUNC_1(VAR_2->base, VAR_1);
 FUNC_3(VAR_2);
}
