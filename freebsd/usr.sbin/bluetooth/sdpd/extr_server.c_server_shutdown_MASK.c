
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* server_p ;
struct TYPE_7__ {scalar_t__ valid; } ;
struct TYPE_6__ {int maxfd; TYPE_5__* fdidx; TYPE_5__* req; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

void
FUNC_4(server_p VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0 != ((void*)0));

 for (VAR_1 = 0; VAR_1 < VAR_0->maxfd + 1; VAR_1 ++)
  if (VAR_0->fdidx[VAR_1].valid)
   FUNC_3(VAR_0, VAR_1);

 FUNC_1(VAR_0->req);
 FUNC_1(VAR_0->fdidx);

 FUNC_2(VAR_0, 0, sizeof(*VAR_0));
}
