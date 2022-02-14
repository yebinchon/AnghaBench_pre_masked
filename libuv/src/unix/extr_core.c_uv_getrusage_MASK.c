
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int tv_usec; int tv_sec; } ;
struct TYPE_7__ {int tv_usec; int tv_sec; } ;
struct TYPE_11__ {int ru_nivcsw; int ru_nvcsw; int ru_nsignals; int ru_msgrcv; int ru_msgsnd; int ru_oublock; int ru_inblock; int ru_nswap; int ru_majflt; int ru_minflt; int ru_isrss; int ru_idrss; int ru_ixrss; int ru_maxrss; TYPE_3__ ru_stime; TYPE_1__ ru_utime; } ;
typedef TYPE_5__ uv_rusage_t ;
struct TYPE_10__ {int tv_usec; int tv_sec; } ;
struct TYPE_8__ {int tv_usec; int tv_sec; } ;
struct rusage {int ru_nivcsw; int ru_nvcsw; int ru_nsignals; int ru_msgrcv; int ru_msgsnd; int ru_oublock; int ru_inblock; int ru_nswap; int ru_majflt; int ru_minflt; int ru_isrss; int ru_idrss; int ru_ixrss; int ru_maxrss; TYPE_4__ ru_stime; TYPE_2__ ru_utime; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,struct rusage*) ;

int FUNC_2(uv_rusage_t* VAR_2) {
  struct rusage VAR_3;

  if (FUNC_1(VAR_0, &VAR_3))
    return FUNC_0(VAR_1);

  VAR_2->ru_utime.tv_sec = VAR_3.ru_utime.tv_sec;
  VAR_2->ru_utime.tv_usec = VAR_3.ru_utime.tv_usec;

  VAR_2->ru_stime.tv_sec = VAR_3.ru_stime.tv_sec;
  VAR_2->ru_stime.tv_usec = VAR_3.ru_stime.tv_usec;


  VAR_2->ru_maxrss = VAR_3.ru_maxrss;
  VAR_2->ru_ixrss = VAR_3.ru_ixrss;
  VAR_2->ru_idrss = VAR_3.ru_idrss;
  VAR_2->ru_isrss = VAR_3.ru_isrss;
  VAR_2->ru_minflt = VAR_3.ru_minflt;
  VAR_2->ru_majflt = VAR_3.ru_majflt;
  VAR_2->ru_nswap = VAR_3.ru_nswap;
  VAR_2->ru_inblock = VAR_3.ru_inblock;
  VAR_2->ru_oublock = VAR_3.ru_oublock;
  VAR_2->ru_msgsnd = VAR_3.ru_msgsnd;
  VAR_2->ru_msgrcv = VAR_3.ru_msgrcv;
  VAR_2->ru_nsignals = VAR_3.ru_nsignals;
  VAR_2->ru_nvcsw = VAR_3.ru_nvcsw;
  VAR_2->ru_nivcsw = VAR_3.ru_nivcsw;


  return 0;
}
