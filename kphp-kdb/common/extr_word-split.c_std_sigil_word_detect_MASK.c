
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 unsigned char* VAR_0 ;
 unsigned char* VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_1 (int VAR_3, const char *VAR_4) {
  if (VAR_3 == 0x1f) {
    int VAR_5 = 0;
    while (VAR_5 < 32 && VAR_4[VAR_5] < 0) {
      VAR_5++;
    }
    return (VAR_4[VAR_5] & 0x40) ? VAR_5 + 1 : -1;
  }
  unsigned char *VAR_6 = VAR_2 ? VAR_1 : VAR_0;
  if (VAR_6['.'] & 8) {
    return -1;
  }
  if (VAR_3 != '[') {
    if (VAR_3 != '#') {
      VAR_6['.'] ^= 8;
      VAR_6['-'] ^= 8;
    }
    int VAR_7 = FUNC_0 (VAR_4);
    if (VAR_3 != '#') {
      VAR_6['.'] ^= 8;
      VAR_6['-'] ^= 8;
    }
    return VAR_7 > 0 ? VAR_7 : -1;
  }
  if (*VAR_4 != '[') {
    return -1;
  }
  const char *VAR_8 = VAR_4 + 1;

  while (
         (VAR_8 <= VAR_4 + 120) &&
         (
          (*VAR_8 >= '0' && *VAR_8 <= '9') ||
          (*VAR_8 >= 'A' && *VAR_8 <= 'Z') ||
          (*VAR_8 >= 'a' && *VAR_8 <= 'z') ||
          (*VAR_8 == '_') ||
          (*VAR_8 == '-')
         )
        ) {
    ++VAR_8;
  }

  if (*VAR_8 == ']' && VAR_8[1] == ']') {
    return VAR_8 + 2 - VAR_4;
  }

  return -1;
}
