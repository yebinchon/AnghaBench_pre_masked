
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long log_wptr; long long log_start; int log_rptr; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (long long,long long,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,long long,int ,int ) ;
 int VAR_2 ;
 long long VAR_3 ;
 int FUNC_3 () ;
 long long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long long VAR_7 ;

void FUNC_4 (int VAR_8) {
  FUNC_0 (VAR_8 >= 0);
  VAR_8 = (VAR_8 + 3) & -4;
  if (VAR_1 & 2) {
    return;
  }
  FUNC_0 (VAR_3 >= VAR_4 - (VAR_0.log_wptr - VAR_0.log_start));
  FUNC_0 (VAR_8 <= VAR_0.log_wptr - VAR_0.log_rptr);
  long long VAR_9 = FUNC_3() + VAR_8;
  if (VAR_3 < VAR_7 && VAR_9 >= VAR_7) {
    VAR_2 = FUNC_1 (VAR_0.log_wptr - (VAR_4 - VAR_3), VAR_7 - VAR_3, VAR_2);
    VAR_3 = VAR_7;
    if (VAR_6 != ~VAR_2) {
      FUNC_2 (VAR_5, "fatal: crc32 mismatch in binlog at position %lld: header expects %08x, actual %08x\n",
      VAR_7, VAR_6, ~VAR_2);
    }
    FUNC_0 (VAR_6 == ~VAR_2);
  }
  VAR_2 = FUNC_1 (VAR_0.log_wptr - (VAR_4 - VAR_3), VAR_9 - VAR_3, VAR_2);
  VAR_3 = VAR_9;
}
