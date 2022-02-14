
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long log_endw; long long log_rptr; long long log_start; long long log_wptr; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (long long,long long,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,long long) ;
 int VAR_3 ;
 long long VAR_4 ;
 long long VAR_5 ;
 int VAR_6 ;

unsigned FUNC_3 (void) {
  if (VAR_1 || (VAR_2 & 4)) {
    return 0;
  }
  long long VAR_7 = VAR_0.log_endw ? VAR_5 + (VAR_0.log_endw - VAR_0.log_rptr) : VAR_5 - (VAR_0.log_rptr - VAR_0.log_start);
  if (!(VAR_4 >= VAR_7) || VAR_0.log_wptr < VAR_0.log_start) {
    FUNC_2(VAR_6, "W.log_endw = %lld\n", VAR_0.log_endw);
    FUNC_2(VAR_6, "log_pos = %lld\n", VAR_5);
    FUNC_2(VAR_6, "W.log_rptr = %lld\n", VAR_0.log_rptr);
    FUNC_2(VAR_6, "W.log_start = %lld\n", VAR_0.log_start);
    FUNC_2(VAR_6, "W.log_wptr = %lld\n", VAR_0.log_wptr);
    FUNC_2(VAR_6, "log_crc32_pos = %lld\n", VAR_4);
    FUNC_2(VAR_6, "log_start_pos = %lld\n", VAR_7);
  }
  FUNC_0 (VAR_4 >= VAR_7);
  long long VAR_8 = VAR_7 + (VAR_0.log_wptr - VAR_0.log_start);
  FUNC_0 (VAR_4 <= VAR_8);
  VAR_3 = FUNC_1 (VAR_0.log_start + (VAR_4 - VAR_7), VAR_8 - VAR_4, VAR_3);
  VAR_4 = VAR_8;
  return ~VAR_3;
}
