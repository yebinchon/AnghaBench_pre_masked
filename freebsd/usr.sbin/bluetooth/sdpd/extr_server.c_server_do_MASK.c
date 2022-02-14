
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* server_p ;
typedef scalar_t__ int32_t ;
typedef int fdset ;
typedef int fd_set ;
struct TYPE_8__ {scalar_t__ maxfd; TYPE_1__* fdidx; int fdset; } ;
struct TYPE_7__ {scalar_t__ server; int valid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,scalar_t__,int *,int ,scalar_t__) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int *,int *,int *) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

int32_t
FUNC_9(server_p VAR_2)
{
 fd_set VAR_3;
 int32_t VAR_4, VAR_5;

 FUNC_1(VAR_2 != ((void*)0));


 FUNC_3(&VAR_3, &VAR_2->fdset, sizeof(VAR_3));
 VAR_4 = FUNC_4(VAR_2->maxfd + 1, &VAR_3, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_4 < 0) {
  if (VAR_1 == VAR_0)
   return (0);

  FUNC_2("Could not select(%d, %p). %s (%d)",
   VAR_2->maxfd + 1, &VAR_3, FUNC_8(VAR_1), VAR_1);

  return (-1);
 }


 for (VAR_5 = 0; VAR_5 < VAR_2->maxfd + 1 && VAR_4 > 0; VAR_5 ++) {
  if (!FUNC_0(VAR_5, &VAR_3))
   continue;

  FUNC_1(VAR_2->fdidx[VAR_5].valid);
  VAR_4 --;

  if (VAR_2->fdidx[VAR_5].server)
   FUNC_5(VAR_2, VAR_5);
  else if (FUNC_7(VAR_2, VAR_5) != 0)
   FUNC_6(VAR_2, VAR_5);
 }

 return (0);

}
