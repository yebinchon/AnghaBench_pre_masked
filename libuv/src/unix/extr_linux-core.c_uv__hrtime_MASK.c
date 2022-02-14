
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uv_clocktype_t ;
typedef int uint64_t ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int clock_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,struct timespec*) ;
 scalar_t__ FUNC_1 (int,struct timespec*) ;

uint64_t FUNC_2(uv_clocktype_t VAR_3) {
  static clock_t VAR_4 = -1;
  struct timespec VAR_5;
  clock_t VAR_6;
  if (VAR_3 == VAR_2 && VAR_4 == -1) {
    if (FUNC_0(VAR_1, &VAR_5) == 0 &&
        VAR_5.tv_nsec <= 1 * 1000 * 1000) {
      VAR_4 = VAR_1;
    } else {
      VAR_4 = VAR_0;
    }
  }

  VAR_6 = VAR_0;
  if (VAR_3 == VAR_2)
    VAR_6 = VAR_4;

  if (FUNC_1(VAR_6, &VAR_5))
    return 0;

  return VAR_5.tv_sec * (uint64_t) 1e9 + VAR_5.tv_nsec;
}
