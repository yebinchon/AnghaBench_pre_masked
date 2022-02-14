
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline char *FUNC_0 (char *VAR_0, unsigned VAR_1) {
  if (VAR_1 < 0x80) {
    *VAR_0 = VAR_1;
    return VAR_0 + 1;
  }
  if (VAR_1 < 0x800) {
    VAR_0[0] = 0xc0 + (VAR_1 >> 6);
    VAR_0[1] = 0x80 + (VAR_1 & 0x3f);
    return VAR_0 + 2;
  }
  if (VAR_1 < 0x10000) {
    VAR_0[0] = 0xe0 + (VAR_1 >> 12);
    VAR_0[1] = 0x80 + ((VAR_1 >> 6) & 0x3f);
    VAR_0[2] = 0x80 + (VAR_1 & 0x3f);
    return VAR_0 + 3;
  }
  if (VAR_1 < 0x200000) {
    VAR_0[0] = 0xf0 + (VAR_1 >> 18);
    VAR_0[1] = 0x80 + ((VAR_1 >> 12) & 0x3f);
    VAR_0[2] = 0x80 + ((VAR_1 >> 6) & 0x3f);
    VAR_0[3] = 0x80 + (VAR_1 & 0x3f);
    return VAR_0 + 4;
  }
  return VAR_0;
}
