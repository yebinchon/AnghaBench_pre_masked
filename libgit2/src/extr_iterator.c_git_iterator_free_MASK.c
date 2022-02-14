
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* end; struct TYPE_8__* start; int pathlist; TYPE_1__* cb; } ;
typedef TYPE_2__ git_iterator ;
struct TYPE_7__ {int (* free ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(git_iterator *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 VAR_0->cb->free(VAR_0);

 FUNC_1(&VAR_0->pathlist);
 FUNC_0(VAR_0->start);
 FUNC_0(VAR_0->end);

 FUNC_2(VAR_0, 0, sizeof(*VAR_0));

 FUNC_0(VAR_0);
}
