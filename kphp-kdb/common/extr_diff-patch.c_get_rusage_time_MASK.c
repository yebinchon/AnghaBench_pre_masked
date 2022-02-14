
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {double tv_sec; int tv_usec; } ;
struct TYPE_3__ {double tv_sec; int tv_usec; } ;
struct rusage {TYPE_2__ ru_stime; TYPE_1__ ru_utime; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct rusage*) ;

__attribute__((used)) static inline double FUNC_1 (void) {
  struct rusage VAR_1;
  if (FUNC_0 (VAR_0, &VAR_1)) { return 0.0; }
  return VAR_1.ru_utime.tv_sec + VAR_1.ru_stime.tv_sec + 1e-6 * (VAR_1.ru_utime.tv_usec + VAR_1.ru_stime.tv_usec);
}
