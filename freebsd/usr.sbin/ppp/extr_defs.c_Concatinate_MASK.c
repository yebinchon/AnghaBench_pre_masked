
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,char*,char const* const) ;

void
FUNC_1(char *VAR_0, size_t VAR_1, int VAR_2, const char *const *VAR_3)
{
  int VAR_4, VAR_5;
  unsigned VAR_6;

  *VAR_0 = '\0';
  for (VAR_6 = VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    VAR_5 = FUNC_0(VAR_0 + VAR_6, VAR_1 - VAR_6, "%s%s", VAR_4 ? " " : "", VAR_3[VAR_4]);
    if (VAR_5 < 0) {
      VAR_0[VAR_6] = '\0';
      break;
    }
    if ((VAR_6 += VAR_5) >= VAR_1)
      break;
  }
}
