
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nwatchers; scalar_t__ backend_fd; scalar_t__* watchers; } ;
typedef TYPE_1__ uv_loop_t ;
struct pollfd {int fd; } ;
struct poll_ctl {int fd; int cmd; int events; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,struct poll_ctl*,int) ;

void FUNC_2(uv_loop_t* VAR_1, int VAR_2) {
  struct pollfd* VAR_3;
  uintptr_t VAR_4;
  uintptr_t VAR_5;
  struct poll_ctl VAR_6;

  FUNC_0(VAR_1->watchers != ((void*)0));
  FUNC_0(VAR_2 >= 0);

  VAR_3 = (struct pollfd*) VAR_1->watchers[VAR_1->nwatchers];
  VAR_5 = (uintptr_t) VAR_1->watchers[VAR_1->nwatchers + 1];

  if (VAR_3 != ((void*)0))

    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
      if ((int) VAR_3[VAR_4].fd == VAR_2)
        VAR_3[VAR_4].fd = -1;


  VAR_6.events = 0;
  VAR_6.cmd = VAR_0;
  VAR_6.fd = VAR_2;
  if(VAR_1->backend_fd >= 0)
    FUNC_1(VAR_1->backend_fd, &VAR_6, 1);
}
