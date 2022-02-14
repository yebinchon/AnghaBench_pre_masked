
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const) ;
 int FUNC_1 (char*,char const* const,int) ;

__attribute__((used)) static const char *
FUNC_2(int VAR_0, char const *const *VAR_1, char *VAR_2, int VAR_3)
{
  int VAR_4, VAR_5, VAR_6;

  VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_0 && VAR_5 < VAR_3 - 2; VAR_4++) {
    if (VAR_4)
      VAR_2[VAR_5++] = ' ';
    VAR_6 = FUNC_0(VAR_1[VAR_4]);
    if (VAR_6 > VAR_3 - VAR_5 - 1)
      VAR_6 = VAR_3 - VAR_5 - 1;
    FUNC_1(VAR_2+VAR_5, VAR_1[VAR_4], VAR_6);
    VAR_5 += VAR_6;
  }
  VAR_2[VAR_5] = '\0';
  return VAR_2;
}
