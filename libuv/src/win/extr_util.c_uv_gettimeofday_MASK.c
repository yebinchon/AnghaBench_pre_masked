
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef TYPE_1__ uv_timeval64_t ;
typedef long uint64_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_7__ {long const QuadPart; int HighPart; int LowPart; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
struct TYPE_8__ {int dwHighDateTime; int dwLowDateTime; } ;
typedef TYPE_3__ FILETIME ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;

int FUNC_1(uv_timeval64_t* VAR_1) {

  const uint64_t VAR_2 = (uint64_t) 116444736000000000ULL;
  FILETIME VAR_3;
  ULARGE_INTEGER VAR_4;

  if (VAR_1 == ((void*)0))
    return VAR_0;

  FUNC_0(&VAR_3);
  VAR_4.LowPart = VAR_3.dwLowDateTime;
  VAR_4.HighPart = VAR_3.dwHighDateTime;
  VAR_1->tv_sec = (int64_t) ((VAR_4.QuadPart - VAR_2) / 10000000L);
  VAR_1->tv_usec = (int32_t) (((VAR_4.QuadPart - VAR_2) % 10000000L) / 10);
  return 0;
}
