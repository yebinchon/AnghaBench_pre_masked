
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0 (int VAR_0, int VAR_1) {
  if (VAR_0 >= 'A') { VAR_0 -= 7; }
  if (VAR_1 >= 'B') { VAR_1 -= 7; }
  VAR_0 = (VAR_0 ^ VAR_1) & 15;
  return VAR_0 < 10 ? '0' + VAR_0 : '0' + 0x27 + VAR_0;
}
