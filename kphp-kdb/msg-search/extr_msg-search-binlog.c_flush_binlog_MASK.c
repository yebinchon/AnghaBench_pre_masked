
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,scalar_t__,int) ;

void FUNC_4 (void) {
  int VAR_11, VAR_12;
  if (!VAR_2 || VAR_5 == VAR_7) {
    return;
  }
  if (VAR_10 > 0) {
    FUNC_1 (VAR_9, "%d flush_binlog()\n", VAR_8);
  }
  if (VAR_3) {
    FUNC_0 (VAR_7 < VAR_5 && VAR_5 <= VAR_3);
    VAR_12 = VAR_3 - VAR_5;
    if (VAR_12 > 0) {
      FUNC_0 (FUNC_2 (VAR_1,VAR_4, VAR_0) == VAR_4);
      VAR_11 = FUNC_3 (VAR_1, VAR_5, VAR_12);
      if (VAR_11 < 0) {
 FUNC_1 (VAR_9, "error writing %d bytes at %lld to %d: %m\n", VAR_12, (long long) VAR_4, VAR_2);
 return;
      }
      VAR_5 += VAR_11;
      VAR_4 += VAR_11;
      if (VAR_11 < VAR_12) {
 return;
      }
    }
    VAR_5 = VAR_6;
    VAR_3 = 0;
  }
  FUNC_0 (VAR_5 <= VAR_7);
  VAR_12 = VAR_7 - VAR_5;
  if (VAR_12 > 0) {
    FUNC_0 (FUNC_2 (VAR_1, VAR_4, VAR_0) == VAR_4);
    VAR_11 = FUNC_3 (VAR_1, VAR_5, VAR_12);
    if (VAR_11 < 0) {
      FUNC_1 (VAR_9, "error writing %d bytes at %lld to %d: %m\n", VAR_12, (long long) VAR_4, VAR_2);
      return;
    }
    VAR_5 += VAR_11;
    VAR_4 += VAR_11;
  }
}
