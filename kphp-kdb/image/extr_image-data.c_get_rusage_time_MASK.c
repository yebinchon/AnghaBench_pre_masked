
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct rusage {TYPE_2__ ru_stime; TYPE_1__ ru_utime; } ;


 scalar_t__ FUNC_0 (int,struct rusage*) ;

double FUNC_1 (int VAR_0) {
  struct rusage VAR_1;
  if (FUNC_0 (VAR_0, &VAR_1)) { return 0.0; }
  const double VAR_2 = (double) VAR_1.ru_utime.tv_sec + (double) VAR_1.ru_stime.tv_sec + 1e-6 * ((double) VAR_1.ru_utime.tv_usec + (double) VAR_1.ru_stime.tv_usec);
  if (VAR_2 > 1e9) {
    return 0.0;
  }
  return VAR_2;
}
