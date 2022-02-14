
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0 (long long VAR_0) {
  if (VAR_0 < 0x7fffffff) {
    return 0;
  }
  if (VAR_0 <= 0xffffffffLL) {
    return 1;
  }
  if (VAR_0 <= 0xffffffffffLL) {
    return 2;
  }
  if (VAR_0 <= 0xffffffffffffLL) {
    return 3;
  }
  if (VAR_0 <= 0xffffffffffffffLL) {
    return 4;
  }
  return 5;
}
