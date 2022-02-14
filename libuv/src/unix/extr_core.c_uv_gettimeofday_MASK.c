
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef TYPE_1__ uv_timeval64_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct timeval*,int *) ;

int FUNC_2(uv_timeval64_t* VAR_2) {
  struct timeval VAR_3;

  if (VAR_2 == ((void*)0))
    return VAR_0;

  if (FUNC_1(&VAR_3, ((void*)0)) != 0)
    return FUNC_0(VAR_1);

  VAR_2->tv_sec = (int64_t) VAR_3.tv_sec;
  VAR_2->tv_usec = (int32_t) VAR_3.tv_usec;
  return 0;
}
