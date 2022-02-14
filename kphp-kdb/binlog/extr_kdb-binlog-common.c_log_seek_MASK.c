
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long log_start_pos; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,long long,int ) ;
 unsigned int VAR_5 ;
 long long VAR_6 ;
 int VAR_7 ;
 long long VAR_8 ;
 int VAR_9 ;
 long long VAR_10 ;
 int VAR_11 ;
 long long VAR_12 ;
 scalar_t__ FUNC_3 (int ,long long,int ) ;
 int VAR_13 ;

void FUNC_4 (long long VAR_14, int VAR_15, unsigned VAR_16) {
  long long VAR_17 = VAR_14 - VAR_12 + VAR_8;
  if (VAR_17 < 0 || (!VAR_3 && FUNC_3 (VAR_2, VAR_17, VAR_1) < 0)) {
    FUNC_2 (VAR_13, "cannot seek file position %lld in binlog file %d: %m\n", VAR_14, VAR_2);
    FUNC_1 (1);
  }
  FUNC_0 ();
  VAR_7 = VAR_11 = VAR_9 = VAR_15;
  VAR_10 = VAR_14;
  VAR_0.log_start_pos = VAR_10;
  if (VAR_16 || !VAR_14) {
    VAR_6 = VAR_14;
    VAR_5 = ~VAR_16;
  } else {
    VAR_4 = 7;
  }
}
