
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;

char *
FUNC_1 (const void *VAR_0, size_t VAR_1)
{
  static const char VAR_2[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

  char *VAR_3 = (char *) FUNC_0 ((VAR_1 + 3) * 4 / 3 + 1);

  char *VAR_4 = VAR_3;
  const unsigned char *VAR_5 = (const unsigned char *) VAR_0;
  size_t VAR_6 = 0;

  while (VAR_6 < VAR_1) {
    int VAR_7 = VAR_5[VAR_6++];
    VAR_7 *= 256;
    if (VAR_6 < VAR_1)
      VAR_7 += VAR_5[VAR_6];
    VAR_6++;

    VAR_7 *= 256;
    if (VAR_6 < VAR_1)
      VAR_7 += VAR_5[VAR_6];
    VAR_6++;

    *VAR_4++ = VAR_2[(VAR_7 & 0x00fc0000) >> 18];
    *VAR_4++ = VAR_2[(VAR_7 & 0x0003f000) >> 12];

    if (VAR_6 > VAR_1 + 1)
      *VAR_4++ = '=';
    else
      *VAR_4++ = VAR_2[(VAR_7 & 0x00000fc0) >> 6];

    if (VAR_6 > VAR_1)
      *VAR_4++ = '=';
    else
      *VAR_4++ = VAR_2[VAR_7 & 0x0000003f];
  }

  *VAR_4 = 0;

  return VAR_3;
}
