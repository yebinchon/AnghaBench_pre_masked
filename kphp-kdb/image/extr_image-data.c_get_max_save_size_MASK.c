
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const) ;

__attribute__((used)) static int FUNC_1 (const char *const VAR_0) {
  if (FUNC_0 (VAR_0) != 1) {
    return 5;
  }
  switch (VAR_0[0]) {
  case 'w': return 5;
  case 'z': return 4;
  case 'y': return 3;
  case 'x': return 2;
  case 'm': return 1;
  case 's': return 0;
  default: return 5;
  }
}
