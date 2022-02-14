
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0 (unsigned int VAR_0, char *VAR_1) {
  if (VAR_0 <= 0x7f) {
    VAR_1[0] = VAR_0;
    return 1;
  } else if (VAR_0 <= 0x7ff) {
    VAR_1[0] = ((VAR_0 >> 6) | 0xc0) & 0xdf;
    VAR_1[1] = ((VAR_0 ) | 0x80) & 0xbf;
    return 2;
  } else if (VAR_0 <= 0xffff) {
    VAR_1[0] = ((VAR_0 >> 12) | 0xe0) & 0xef;
    VAR_1[1] = ((VAR_0 >> 6) | 0x80) & 0xbf;
    VAR_1[2] = ((VAR_0 ) | 0x80) & 0xbf;
    return 3;
  } else if (VAR_0 <= 0x1fffff) {
    VAR_1[0] = ((VAR_0 >> 18) | 0xf0) & 0xf7;
    VAR_1[1] = ((VAR_0 >> 12) | 0x80) & 0xbf;
    VAR_1[2] = ((VAR_0 >> 6) | 0x80) & 0xbf;
    VAR_1[3] = ((VAR_0 ) | 0x80) & 0xbf;
    return 4;
  } else {

  }
  return 0;
}
