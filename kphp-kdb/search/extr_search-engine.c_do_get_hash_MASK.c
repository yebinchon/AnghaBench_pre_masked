
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 scalar_t__ FUNC_0 (long long*,long long) ;
 int FUNC_1 (struct connection*,char const*,char*,int) ;
 int FUNC_2 (char*,char*,long long) ;
 int FUNC_3 (char const*,char*,int*,...) ;

__attribute__((used)) static int FUNC_4 (struct connection *VAR_0, const char *VAR_1, int VAR_2, int VAR_3) {
  int VAR_4, VAR_5, VAR_6 = 0;
  long long VAR_7;
  static char VAR_8[32];
  if (FUNC_3 (VAR_1, "hash%d_%d ", &VAR_4, &VAR_5) == 2) {
    if (VAR_4 && VAR_5 > 0) {
      VAR_7 = (((long long) VAR_5) << 32) + (unsigned) VAR_4;
      VAR_6 = 1;
    }
  } else if (FUNC_3 (VAR_1, "hash%d ", &VAR_5) == 1) {
    if (VAR_5 > 0) {
      VAR_7 = VAR_5;
      VAR_6 = 1;
    }
  }
  if (VAR_6) {
    long long VAR_9;
    if (FUNC_0 (&VAR_9, VAR_7)) {
      if (VAR_9 == 0) { return FUNC_1 (VAR_0, VAR_1 - VAR_3, "0", 1); }
      else { return FUNC_1 (VAR_0, VAR_1 - VAR_3, VAR_8, FUNC_2 (VAR_8, "%016llx", VAR_9)); }
    }
  }
  return 0;
}
