
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1 (int **VAR_0, int VAR_1, int VAR_2) {
  if (VAR_1 > 0 && VAR_1 <= VAR_2) {
    if (!*VAR_0) { *VAR_0 = FUNC_0 (VAR_2 * sizeof(int)); }
    (*VAR_0)[VAR_1-1]++;
    return VAR_1;
  } else {
    return 0;
  }
}
