
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char const* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static const char *FUNC_2 (const char *VAR_8) {
  const char *VAR_9 = VAR_8;
  VAR_5 = 0;
  VAR_4 = 0;
  VAR_1 = 0;
  VAR_7 = 0;
  VAR_3 = VAR_2 = 0;

  VAR_9 += 6;
  FUNC_0 (*VAR_9 == 'x' || *VAR_9 == 'u');
  if (*VAR_9 == 'u') {
    VAR_4 |= 2;
    VAR_9++;
    if ('a' <= *VAR_9 && *VAR_9 <= 'z') {
      VAR_9++;
    }
  } else {
    VAR_9++;
  }

  if (*VAR_9 != '#' && *VAR_9 != '%') {
    VAR_1 = -1;
    return 0;
  }

  VAR_6 = VAR_9 - VAR_8;

  if (*VAR_9 == '%') {
    VAR_5 = 1;
  }
  VAR_9 ++;
  VAR_4 |= 8;
  VAR_4 |= 4;

  while (*VAR_9 && *VAR_9 != '(' && *VAR_9 != '<' && *VAR_9 != '[') {
    VAR_9 ++;
  }
  if (!*VAR_9) {
    VAR_1 = -1;
    return VAR_9;
  }
  VAR_9 --;
  while (*VAR_9 >= '0' && *VAR_9 <='9') {
    VAR_9 --;
  }
  VAR_9 ++;
  char *VAR_10;
  VAR_1 = FUNC_1 (VAR_9, &VAR_10, 10);
  VAR_3 = VAR_9;
  VAR_2 = VAR_10;
  if (VAR_1 > VAR_0) { VAR_1 = VAR_0; }
  return VAR_10;
}
