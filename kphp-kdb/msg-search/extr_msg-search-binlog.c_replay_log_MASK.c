
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_3 ;
 long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct log_event*,int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

void FUNC_4 (int VAR_14) {
  int VAR_15;
  if (!VAR_1) { return; }

  VAR_10 = VAR_14 ? VAR_14 : 0x7fffffff;
  VAR_8 = 0;
  VAR_3 = -1;

  while (1) {
    if (VAR_7 == VAR_11) {
      VAR_15 = FUNC_2 (VAR_0, VAR_9, VAR_4 - VAR_9);
      if (VAR_13 > 0) {
 FUNC_0 (VAR_12, "read %d bytes from binlog %s\n", VAR_15, VAR_2);
      }
      VAR_7 = VAR_9;
      VAR_11 = VAR_9 + VAR_15;
      VAR_5 += VAR_15;
      if (!VAR_15) { break; }
    }
    if (VAR_7 >= VAR_4 - (1L << 16)) {
      FUNC_1 (VAR_9, VAR_7, VAR_4 - VAR_7);
      VAR_11 -= (VAR_7 - VAR_9);
      VAR_7 = VAR_9;
      VAR_15 = FUNC_2 (VAR_0, VAR_11, VAR_4 - VAR_11);
      if (VAR_13 > 0) {
 FUNC_0 (VAR_12, "read %d bytes from binlog %s\n", VAR_15, VAR_2);
      }
      VAR_11 += VAR_15;
      VAR_5 += VAR_15;
      if (!VAR_15) { break; }
    }
    VAR_15 = VAR_11 - VAR_7;
    if (VAR_15 < 4) { break; }

    VAR_15 = FUNC_3 ((struct log_event *) VAR_7, VAR_15);
    if (VAR_15 < 0) { break; }
    VAR_7 += VAR_15;
  }
  if (VAR_7 < VAR_11 && VAR_13) {
    VAR_15 = VAR_11 - VAR_7;
    VAR_5 -= VAR_15;
    FUNC_0 (VAR_12, "replay binlog: %d bytes left unread at position %lld\n", VAR_15, (long long) VAR_5);
  }
  VAR_6 = VAR_5;
}
