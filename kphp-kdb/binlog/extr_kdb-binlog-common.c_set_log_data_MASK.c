
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int log_start_pos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 long long VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_7 ;

void FUNC_4 (int VAR_8, long long VAR_9) {
  VAR_4 = VAR_8;
  VAR_5 = VAR_9;
  if (FUNC_2 (VAR_8) < 0) {
    FUNC_1 (VAR_7, "bad binlog headers (fd=%d)\n", VAR_8);
    FUNC_0 (1);
  }
  if (VAR_3 && !VAR_0) {
    VAR_0 = FUNC_3 (VAR_1 + 16);
  }
  VAR_2.log_start_pos = VAR_6;
}
