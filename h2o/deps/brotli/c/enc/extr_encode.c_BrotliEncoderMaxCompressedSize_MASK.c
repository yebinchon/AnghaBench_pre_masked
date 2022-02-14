
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t FUNC_0(size_t VAR_0) {

  size_t VAR_1 = VAR_0 >> 24;
  size_t VAR_2 = VAR_0 - (VAR_1 << 24);
  size_t VAR_3 = (VAR_2 > (1 << 20)) ? 4 : 3;
  size_t VAR_4 = 2 + (4 * VAR_1) + VAR_3 + 1;
  size_t VAR_5 = VAR_0 + VAR_4;
  if (VAR_0 == 0) return 1;
  return (VAR_5 < VAR_0) ? 0 : VAR_5;
}
