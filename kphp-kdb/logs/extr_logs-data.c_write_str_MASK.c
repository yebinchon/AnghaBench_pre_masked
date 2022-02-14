
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char,char) ;
 int FUNC_1 (int) ;

int FUNC_2 (char *VAR_0, int VAR_1, char *VAR_2) {
  int VAR_3 = VAR_1;
  while (*VAR_2) {

    switch (*VAR_2) {
      case '"': if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = '\\'; if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = '"'; break;;
      case '\\': if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = '\\'; if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = '\\'; break;;
      case '/': if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = '\\'; if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = '/'; break;;
      case '\b': if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = '\\'; if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = 'b'; break;;
      case '\f': if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = '\\'; if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = 'f'; break;;
      case '\n': if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = '\\'; if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = 'n'; break;;
      case '\r': if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = '\\'; if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = 'r'; break;;
      case '\t': if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = '\\'; if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = 't'; break;;
      default:
        if (FUNC_1(--VAR_1 > 0)) *VAR_0++ = *VAR_2;
    }

    VAR_2++;
  }
  *VAR_0 = 0;
  return VAR_3 - VAR_1;
}
