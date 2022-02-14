
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char ucs_char_t ;



__attribute__((used)) static ucs_char_t FUNC_0(const char **VAR_0, size_t *VAR_1)
{
 unsigned char *VAR_2 = (unsigned char *)*VAR_0;
 ucs_char_t VAR_3;
 size_t VAR_4, VAR_5;






 VAR_4 = (VAR_1 ? *VAR_1 : 999);

 if (VAR_4 < 1) {
  goto invalid;
 } else if (*VAR_2 < 0x80) {

  VAR_3 = *VAR_2;
  VAR_5 = 1;
 } else if ((VAR_2[0] & 0xe0) == 0xc0) {

  if (VAR_4 < 2 ||
      (VAR_2[1] & 0xc0) != 0x80 ||
      (VAR_2[0] & 0xfe) == 0xc0)
   goto invalid;
  VAR_3 = ((VAR_2[0] & 0x1f) << 6) | (VAR_2[1] & 0x3f);
  VAR_5 = 2;
 } else if ((VAR_2[0] & 0xf0) == 0xe0) {

  if (VAR_4 < 3 ||
      (VAR_2[1] & 0xc0) != 0x80 ||
      (VAR_2[2] & 0xc0) != 0x80 ||

      (VAR_2[0] == 0xe0 && (VAR_2[1] & 0xe0) == 0x80) ||

      (VAR_2[0] == 0xed && (VAR_2[1] & 0xe0) == 0xa0) ||

      (VAR_2[0] == 0xef && VAR_2[1] == 0xbf &&
       (VAR_2[2] & 0xfe) == 0xbe))
   goto invalid;
  VAR_3 = ((VAR_2[0] & 0x0f) << 12) |
   ((VAR_2[1] & 0x3f) << 6) | (VAR_2[2] & 0x3f);
  VAR_5 = 3;
 } else if ((VAR_2[0] & 0xf8) == 0xf0) {

  if (VAR_4 < 4 ||
      (VAR_2[1] & 0xc0) != 0x80 ||
      (VAR_2[2] & 0xc0) != 0x80 ||
      (VAR_2[3] & 0xc0) != 0x80 ||

      (VAR_2[0] == 0xf0 && (VAR_2[1] & 0xf0) == 0x80) ||

      (VAR_2[0] == 0xf4 && VAR_2[1] > 0x8f) || VAR_2[0] > 0xf4)
   goto invalid;
  VAR_3 = ((VAR_2[0] & 0x07) << 18) | ((VAR_2[1] & 0x3f) << 12) |
   ((VAR_2[2] & 0x3f) << 6) | (VAR_2[3] & 0x3f);
  VAR_5 = 4;
 } else {
invalid:
  *VAR_0 = ((void*)0);
  return 0;
 }

 *VAR_0 += VAR_5;
 if (VAR_1)
  *VAR_1 = VAR_4 - VAR_5;
 return VAR_3;
}
