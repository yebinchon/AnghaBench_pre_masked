
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ log_last_endw; scalar_t__ log_wptr; int log_start; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;

int FUNC_2 (char *VAR_1, int VAR_2) {
  int VAR_3 = VAR_0.log_last_endw <= VAR_0.log_wptr ? VAR_0.log_wptr - VAR_0.log_start : VAR_0.log_wptr - VAR_0.log_start + VAR_0.log_last_endw - VAR_0.log_wptr;
  if (VAR_3 > VAR_2) {
    VAR_3 = VAR_2;
  }
  VAR_2 = VAR_3;
  if (VAR_0.log_wptr - VAR_0.log_start >= VAR_2) {
    FUNC_1 (VAR_1, VAR_0.log_wptr - VAR_2, VAR_2);
    return VAR_3;
  } else {
    VAR_2 -= VAR_0.log_wptr - VAR_0.log_start;
    FUNC_1 (VAR_1 + VAR_2, VAR_0.log_start, VAR_0.log_wptr - VAR_0.log_start);
  }
  if (VAR_0.log_last_endw) {
    if (VAR_0.log_last_endw > VAR_0.log_wptr) {
      if (VAR_0.log_last_endw - VAR_0.log_wptr >= VAR_2) {
        FUNC_1 (VAR_1, VAR_0.log_last_endw - VAR_2, VAR_2);
        return VAR_3;
      } else {
        VAR_2 -= VAR_0.log_last_endw - VAR_0.log_wptr;
        FUNC_1 (VAR_1, VAR_0.log_wptr, VAR_0.log_last_endw - VAR_0.log_wptr);
      }
    }
  }
  FUNC_0 (!VAR_2);
  return VAR_3;
}
