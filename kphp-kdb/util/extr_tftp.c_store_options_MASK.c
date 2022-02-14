
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*,long long) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *FUNC_2 (char *VAR_0, int VAR_1, int VAR_2, long long VAR_3) {
  if (VAR_1 > 0) {
    FUNC_1 (VAR_0, "blksize");
    VAR_0 += 8;
    VAR_0 += FUNC_0 (VAR_0, "%d", VAR_1) + 1;
  }
  if (VAR_2 > 0) {
    FUNC_1 (VAR_0, "timeout");
    VAR_0 += 8;
    VAR_0 += FUNC_0 (VAR_0, "%d", VAR_2) + 1;
  }
  if (VAR_3 >= 0) {
    FUNC_1 (VAR_0, "tsize");
    VAR_0 += 6;
    VAR_0 += FUNC_0 (VAR_0, "%lld", VAR_3) + 1;
  }
  return VAR_0;
}
