
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static size_t FUNC_0(
    int* VAR_0, const uint8_t* VAR_1, size_t VAR_2) {

  if ((VAR_1[0] & 0x80) == 0) {
    *VAR_0 = VAR_1[0];
    if (*VAR_0 > 0) {
      return 1;
    }
  }

  if (VAR_2 > 1u &&
      (VAR_1[0] & 0xe0) == 0xc0 &&
      (VAR_1[1] & 0xc0) == 0x80) {
    *VAR_0 = (((VAR_1[0] & 0x1f) << 6) |
               (VAR_1[1] & 0x3f));
    if (*VAR_0 > 0x7f) {
      return 2;
    }
  }

  if (VAR_2 > 2u &&
      (VAR_1[0] & 0xf0) == 0xe0 &&
      (VAR_1[1] & 0xc0) == 0x80 &&
      (VAR_1[2] & 0xc0) == 0x80) {
    *VAR_0 = (((VAR_1[0] & 0x0f) << 12) |
               ((VAR_1[1] & 0x3f) << 6) |
               (VAR_1[2] & 0x3f));
    if (*VAR_0 > 0x7ff) {
      return 3;
    }
  }

  if (VAR_2 > 3u &&
      (VAR_1[0] & 0xf8) == 0xf0 &&
      (VAR_1[1] & 0xc0) == 0x80 &&
      (VAR_1[2] & 0xc0) == 0x80 &&
      (VAR_1[3] & 0xc0) == 0x80) {
    *VAR_0 = (((VAR_1[0] & 0x07) << 18) |
               ((VAR_1[1] & 0x3f) << 12) |
               ((VAR_1[2] & 0x3f) << 6) |
               (VAR_1[3] & 0x3f));
    if (*VAR_0 > 0xffff && *VAR_0 <= 0x10ffff) {
      return 4;
    }
  }

  *VAR_0 = 0x110000 | VAR_1[0];
  return 1;
}
