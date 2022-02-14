
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ log_rptr; scalar_t__ log_wptr; long long log_endw; long long log_start; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (long long) ;
 long long VAR_1 ;

long long FUNC_1 (void) {
  if (VAR_0.log_rptr <= VAR_0.log_wptr) {
    return VAR_1 + (VAR_0.log_wptr - VAR_0.log_rptr);
  } else {
    FUNC_0 (VAR_0.log_endw);
    return VAR_1 + (VAR_0.log_wptr - VAR_0.log_start) + (VAR_0.log_endw - VAR_0.log_rptr);
  }
}
