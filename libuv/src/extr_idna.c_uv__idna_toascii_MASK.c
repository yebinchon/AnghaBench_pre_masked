
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,char**,char*) ;
 unsigned int FUNC_1 (char const**,char const*) ;

long FUNC_2(const char* VAR_0, const char* VAR_1, char* VAR_2, char* VAR_3) {
  const char* VAR_4;
  const char* VAR_5;
  unsigned VAR_6;
  char* VAR_7;
  int VAR_8;

  VAR_7 = VAR_2;

  for (VAR_4 = VAR_0; VAR_4 < VAR_1; ) {
    VAR_5 = VAR_4;
    VAR_6 = FUNC_1(&VAR_4, VAR_1);

    if (VAR_6 != '.')
      if (VAR_6 != 0x3002)
        if (VAR_6 != 0xFF0E)
          if (VAR_6 != 0xFF61)
            continue;

    VAR_8 = FUNC_0(VAR_0, VAR_5, &VAR_2, VAR_3);

    if (VAR_8 < 0)
      return VAR_8;

    if (VAR_2 < VAR_3)
      *VAR_2++ = '.';

    VAR_0 = VAR_4;
  }

  if (VAR_0 < VAR_1) {
    VAR_8 = FUNC_0(VAR_0, VAR_1, &VAR_2, VAR_3);

    if (VAR_8 < 0)
      return VAR_8;
  }

  if (VAR_2 < VAR_3)
    *VAR_2++ = '\0';

  return VAR_2 - VAR_7;
}
