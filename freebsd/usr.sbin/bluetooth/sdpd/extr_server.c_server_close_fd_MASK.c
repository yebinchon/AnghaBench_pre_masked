
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* server_p ;
typedef TYPE_2__* provider_p ;
typedef size_t int32_t ;
struct TYPE_11__ {int * rsp; int valid; } ;
struct TYPE_10__ {size_t fd; } ;
struct TYPE_9__ {size_t maxfd; TYPE_8__* fdidx; int fdset; } ;


 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_8__*,int ,int) ;
 TYPE_2__* FUNC_6 () ;
 TYPE_2__* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(server_p VAR_0, int32_t VAR_1)
{
 provider_p VAR_2 = ((void*)0), VAR_3 = ((void*)0);

 FUNC_2(FUNC_1(VAR_1, &VAR_0->fdset));
 FUNC_2(VAR_0->fdidx[VAR_1].valid);

 FUNC_3(VAR_1);

 FUNC_0(VAR_1, &VAR_0->fdset);
 if (VAR_1 == VAR_0->maxfd)
  VAR_0->maxfd --;

 if (VAR_0->fdidx[VAR_1].rsp != ((void*)0))
  FUNC_4(VAR_0->fdidx[VAR_1].rsp);

 FUNC_5(&VAR_0->fdidx[VAR_1], 0, sizeof(VAR_0->fdidx[VAR_1]));

 for (VAR_2 = FUNC_6();
      VAR_2 != ((void*)0);
      VAR_2 = VAR_3) {
  VAR_3 = FUNC_7(VAR_2);

  if (VAR_2->fd == VAR_1)
   FUNC_8(VAR_2);
 }
}
