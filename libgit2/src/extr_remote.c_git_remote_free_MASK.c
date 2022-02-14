
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* name; struct TYPE_6__* pushurl; struct TYPE_6__* url; int push; int passive_refspecs; int active_refspecs; int refspecs; int refs; TYPE_2__* transport; } ;
typedef TYPE_1__ git_remote ;
struct TYPE_7__ {int (* free ) (TYPE_2__*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(git_remote *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->transport != ((void*)0)) {
  FUNC_3(VAR_0);

  VAR_0->transport->free(VAR_0->transport);
  VAR_0->transport = ((void*)0);
 }

 FUNC_4(&VAR_0->refs);

 FUNC_0(&VAR_0->refspecs);
 FUNC_4(&VAR_0->refspecs);

 FUNC_0(&VAR_0->active_refspecs);
 FUNC_4(&VAR_0->active_refspecs);

 FUNC_0(&VAR_0->passive_refspecs);
 FUNC_4(&VAR_0->passive_refspecs);

 FUNC_2(VAR_0->push);
 FUNC_1(VAR_0->url);
 FUNC_1(VAR_0->pushurl);
 FUNC_1(VAR_0->name);
 FUNC_1(VAR_0);
}
