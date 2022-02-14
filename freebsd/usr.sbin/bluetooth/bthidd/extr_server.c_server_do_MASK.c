
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int wfdset ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int rfdset ;
typedef scalar_t__ int32_t ;
typedef int fd_set ;
typedef TYPE_1__* bthid_server_p ;
struct TYPE_6__ {scalar_t__ maxfd; scalar_t__ ctrl; scalar_t__ intr; int wfdset; int rfdset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,char*,scalar_t__,int *,int *,int ,scalar_t__) ;

int32_t
FUNC_9(bthid_server_p VAR_3)
{
 struct timeval VAR_4;
 fd_set VAR_5, VAR_6;
 int32_t VAR_7, VAR_8;

 FUNC_1(VAR_3 != ((void*)0));

 VAR_4.tv_sec = 1;
 VAR_4.tv_usec = 0;


 FUNC_3(&VAR_5, &VAR_3->rfdset, sizeof(VAR_5));
 FUNC_3(&VAR_6, &VAR_3->wfdset, sizeof(VAR_6));

 VAR_7 = FUNC_4(VAR_3->maxfd + 1, &VAR_5, &VAR_6, ((void*)0), &VAR_4);
 if (VAR_7 < 0) {
  if (VAR_2 == VAR_0)
   return (0);

  FUNC_8(VAR_1, "Could not select(%d, %p, %p). %s (%d)",
   VAR_3->maxfd + 1, &VAR_5, &VAR_6, FUNC_7(VAR_2), VAR_2);

  return (-1);
 }


 for (VAR_8 = 0; VAR_8 < VAR_3->maxfd + 1 && VAR_7 > 0; VAR_8 ++) {
  if (FUNC_0(VAR_8, &VAR_5)) {
   VAR_7 --;

   if (VAR_8 == VAR_3->ctrl || VAR_8 == VAR_3->intr)
    FUNC_5(VAR_3, VAR_8);
   else
    FUNC_6(VAR_3, VAR_8);
  } else if (FUNC_0(VAR_8, &VAR_6)) {
   VAR_7 --;

   FUNC_2(VAR_3, VAR_8);
  }
 }

 return (0);
}
