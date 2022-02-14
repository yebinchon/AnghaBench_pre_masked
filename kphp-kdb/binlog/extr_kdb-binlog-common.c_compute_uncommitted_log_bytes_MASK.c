
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int log_wptr; int log_rptr; scalar_t__ log_start; scalar_t__ log_endw; } ;


 TYPE_1__ VAR_0 ;

int FUNC_0 (void) {
  int VAR_1 = VAR_0.log_wptr - VAR_0.log_rptr;
  if (VAR_1 < 0) {
    VAR_1 += VAR_0.log_endw - VAR_0.log_start;
  }
  return VAR_1;
}
