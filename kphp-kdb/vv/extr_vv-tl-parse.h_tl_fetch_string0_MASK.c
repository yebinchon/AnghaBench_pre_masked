
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2 (char *VAR_0, int VAR_1) {
  int VAR_2 = FUNC_1 (VAR_1);
  if (VAR_2 < 0) {
    return -1;
  }
  if (FUNC_0 (VAR_0, VAR_2) < 0) {
    return -1;
  }
  VAR_0[VAR_2] = 0;
  return VAR_2;
}
