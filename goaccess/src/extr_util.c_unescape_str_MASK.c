
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (scalar_t__) ;

char *
FUNC_2 (const char *VAR_0)
{
  char *VAR_1, *VAR_2;
  const char *VAR_3 = VAR_0;

  if (VAR_0 == ((void*)0) || *VAR_0 == '\0')
    return ((void*)0);

  VAR_1 = FUNC_1 (FUNC_0 (VAR_0) + 1);
  VAR_2 = VAR_1;

  while (*VAR_3) {
    if (*VAR_3 == '\\') {
      VAR_3++;
      switch (*VAR_3) {
      case '\0':

        goto out;
      case 'n':
        *VAR_2++ = '\n';
        break;
      case 'r':
        *VAR_2++ = '\r';
        break;
      case 't':
        *VAR_2++ = '\t';
        break;
      default:
        *VAR_2++ = *VAR_3;
        break;
      }
    } else
      *VAR_2++ = *VAR_3;
    VAR_3++;
  }
out:
  *VAR_2 = 0;

  return VAR_1;
}
