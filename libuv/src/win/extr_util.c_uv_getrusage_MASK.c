
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_12__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_14__ {int ru_majflt; int ru_maxrss; int ru_oublock; int ru_inblock; TYPE_2__ ru_stime; TYPE_1__ ru_utime; } ;
typedef TYPE_3__ uv_rusage_t ;
typedef int uint64_t ;
typedef int memCounters ;
struct TYPE_17__ {scalar_t__ ReadOperationCount; scalar_t__ WriteOperationCount; } ;
struct TYPE_16__ {scalar_t__ PeakWorkingSetSize; scalar_t__ PageFaultCount; } ;
struct TYPE_15__ {int wHour; int wMinute; int wMilliseconds; scalar_t__ wSecond; } ;
typedef TYPE_4__ SYSTEMTIME ;
typedef TYPE_5__ PROCESS_MEMORY_COUNTERS ;
typedef TYPE_6__ IO_COUNTERS ;
typedef int FILETIME ;


 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_6__*) ;
 int FUNC_4 (int ,TYPE_5__*,int) ;
 int FUNC_5 (int ,int *,int *,int *,int *) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 (int ) ;

int FUNC_8(uv_rusage_t *VAR_0) {
  FILETIME VAR_1, VAR_2, VAR_3, VAR_4;
  SYSTEMTIME VAR_5, VAR_6;
  PROCESS_MEMORY_COUNTERS VAR_7;
  IO_COUNTERS VAR_8;
  int VAR_9;

  VAR_9 = FUNC_5(FUNC_1(), &VAR_1, &VAR_2, &VAR_3, &VAR_4);
  if (VAR_9 == 0) {
    return FUNC_7(FUNC_2());
  }

  VAR_9 = FUNC_0(&VAR_3, &VAR_5);
  if (VAR_9 == 0) {
    return FUNC_7(FUNC_2());
  }

  VAR_9 = FUNC_0(&VAR_4, &VAR_6);
  if (VAR_9 == 0) {
    return FUNC_7(FUNC_2());
  }

  VAR_9 = FUNC_4(FUNC_1(),
                             &VAR_7,
                             sizeof(VAR_7));
  if (VAR_9 == 0) {
    return FUNC_7(FUNC_2());
  }

  VAR_9 = FUNC_3(FUNC_1(), &VAR_8);
  if (VAR_9 == 0) {
    return FUNC_7(FUNC_2());
  }

  FUNC_6(VAR_0, 0, sizeof(*VAR_0));

  VAR_0->ru_utime.tv_sec = VAR_6.wHour * 3600 +
                               VAR_6.wMinute * 60 +
                               VAR_6.wSecond;
  VAR_0->ru_utime.tv_usec = VAR_6.wMilliseconds * 1000;

  VAR_0->ru_stime.tv_sec = VAR_5.wHour * 3600 +
                               VAR_5.wMinute * 60 +
                               VAR_5.wSecond;
  VAR_0->ru_stime.tv_usec = VAR_5.wMilliseconds * 1000;

  VAR_0->ru_majflt = (uint64_t) VAR_7.PageFaultCount;
  VAR_0->ru_maxrss = (uint64_t) VAR_7.PeakWorkingSetSize / 1024;

  VAR_0->ru_oublock = (uint64_t) VAR_8.WriteOperationCount;
  VAR_0->ru_inblock = (uint64_t) VAR_8.ReadOperationCount;

  return 0;
}
