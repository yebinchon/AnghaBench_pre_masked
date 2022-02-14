
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
inline size_t FUNC_0 (size_t VAR_0) {
  if (VAR_0 == (size_t)0) {
    return VAR_0;
  }
  size_t VAR_1 = VAR_0 + 3 * sizeof (long) - 1;
  VAR_1 -= VAR_1 % (2 * sizeof (long));
  if (VAR_1 < 4 * sizeof (long)) {
    return 4 * sizeof (long);
  }
  return VAR_1;
}
