
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_0, char *VAR_1)
{
  char *VAR_2;
  const char *VAR_3;

  for (VAR_3 = VAR_0, VAR_2 = VAR_1; *VAR_3; VAR_3++) {
    if (*VAR_3 != '%' || !FUNC_1 (VAR_3[1]) || !FUNC_1 (VAR_3[2])) {
      *VAR_2++ = *VAR_3;
    } else {
      *VAR_2++ = (FUNC_0 (VAR_3[1]) * 16) + (FUNC_0 (VAR_3[2]));
      VAR_3 += 2;
    }
  }
  *VAR_2 = 0;
}
