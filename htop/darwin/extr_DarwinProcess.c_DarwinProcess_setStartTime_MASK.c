
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
struct TYPE_4__ {int tv_sec; } ;
struct extern_proc {TYPE_1__ p_starttime; } ;
struct TYPE_5__ {int starttime_ctime; int starttime_show; } ;
typedef TYPE_2__ Process ;


 int FUNC_0 (int*,struct tm*) ;
 int FUNC_1 (int ,int,char*,struct tm*) ;

void FUNC_2(Process *VAR_0, struct extern_proc *VAR_1, time_t VAR_2) {
   struct tm VAR_3;

   VAR_0->starttime_ctime = VAR_1->p_starttime.tv_sec;
   (void) FUNC_0(&VAR_0->starttime_ctime, &VAR_3);
   FUNC_1(VAR_0->starttime_show, 7, ((VAR_0->starttime_ctime > VAR_2 - 86400) ? "%R " : "%b%d "), &VAR_3);
}
