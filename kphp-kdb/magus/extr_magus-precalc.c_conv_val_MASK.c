
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (double) ;

float FUNC_1 (float VAR_0) {
  if (VAR_0 < 0) {
    VAR_0 = 0.0;
  }
  if (VAR_0 > 1e3) {
    VAR_0 = 1e3;
  }
  return FUNC_0 (1.0 + 3 * VAR_0);
}
