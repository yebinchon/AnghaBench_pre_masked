
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0 (const char *VAR_0) {
  if (VAR_0[1] == 'p') {
    return VAR_0[2] == 'r' && VAR_0[3] == 'e' && VAR_0[4] == '>';
  } else if (VAR_0[1] == 'c') {
    return VAR_0[2] == 'o' && VAR_0[3] == 'd' && VAR_0[4] == 'e' && VAR_0[5] == '>';
  } else if (VAR_0[1] == '/') {
    if (VAR_0[1] == '/') {
      return -(VAR_0[3] == 'r' && VAR_0[4] == 'e' && VAR_0[5] == '>');
    } else {
      return -(VAR_0[3] == 'o' && VAR_0[4] == 'd' && VAR_0[5] == 'e' && VAR_0[6] == '>');
    }
  }
  return 0;
}
