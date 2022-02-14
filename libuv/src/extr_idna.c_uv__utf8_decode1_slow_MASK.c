
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0(const char** VAR_0,
                                      const char* VAR_1,
                                      unsigned VAR_2) {
  unsigned VAR_3;
  unsigned VAR_4;
  unsigned VAR_5;
  unsigned VAR_6;

  if (VAR_2 > 0xF7)
    return -1;

  switch (*VAR_0 - VAR_1) {
  default:
    if (VAR_2 > 0xEF) {
      VAR_6 = 0x10000;
      VAR_2 = VAR_2 & 7;
      VAR_3 = (unsigned char) *(*VAR_0)++;
      VAR_4 = (unsigned char) *(*VAR_0)++;
      VAR_5 = (unsigned char) *(*VAR_0)++;
      break;
    }

  case 2:
    if (VAR_2 > 0xDF) {
      VAR_6 = 0x800;
      VAR_3 = 0x80 | (VAR_2 & 15);
      VAR_4 = (unsigned char) *(*VAR_0)++;
      VAR_5 = (unsigned char) *(*VAR_0)++;
      VAR_2 = 0;
      break;
    }

  case 1:
    if (VAR_2 > 0xBF) {
      VAR_6 = 0x80;
      VAR_3 = 0x80;
      VAR_4 = 0x80 | (VAR_2 & 31);
      VAR_5 = (unsigned char) *(*VAR_0)++;
      VAR_2 = 0;
      break;
    }
    return -1;
  }

  if (0x80 != (0xC0 & (VAR_3 ^ VAR_4 ^ VAR_5)))
    return -1;

  VAR_3 &= 63;
  VAR_4 &= 63;
  VAR_5 &= 63;
  VAR_2 = (VAR_2 << 18) | (VAR_3 << 12) | (VAR_4 << 6) | VAR_5;

  if (VAR_2 < VAR_6)
    return -1;

  if (VAR_2 > 0x10FFFF)
    return -1;

  if (VAR_2 >= 0xD800 && VAR_2 <= 0xDFFF)
    return -1;

  return VAR_2;
}
