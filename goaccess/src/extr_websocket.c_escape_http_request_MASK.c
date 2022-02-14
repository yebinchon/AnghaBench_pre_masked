
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static char *
FUNC_2 (const char *VAR_0)
{
  char *VAR_1, *VAR_2;
  const unsigned char *VAR_3;

  if (VAR_0 == ((void*)0) || *VAR_0 == '\0')
    return ((void*)0);

  VAR_3 = (unsigned char *) VAR_0;
  VAR_2 = VAR_1 = FUNC_1 (FUNC_0 (VAR_0) * 4 + 1);

  while (*VAR_3) {
    switch (*VAR_3) {
    case '\\':
      *VAR_2++ = '\\';
      *VAR_2++ = '\\';
      break;
    case '\n':
      *VAR_2++ = '\\';
      *VAR_2++ = 'n';
      break;
    case '\r':
      *VAR_2++ = '\\';
      *VAR_2++ = 'r';
      break;
    case '\t':
      *VAR_2++ = '\\';
      *VAR_2++ = 't';
      break;
    case '"':
      *VAR_2++ = '\\';
      *VAR_2++ = '"';
      break;
    default:
      if ((*VAR_3 < ' ') || (*VAR_3 >= 0177)) {

      } else {
        *VAR_2++ = *VAR_3;
      }
      break;
    }
    VAR_3++;
  }
  *VAR_2 = 0;
  return VAR_1;
}
