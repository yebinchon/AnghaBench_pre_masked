
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*,size_t) ;

size_t
FUNC_3(char *VAR_0, size_t VAR_1, const char *VAR_2, size_t VAR_3)
{
  size_t VAR_4;
  size_t VAR_5;

  VAR_4 = FUNC_2(VAR_2, VAR_3);

  if (VAR_1 > 0) {
    VAR_5 = VAR_4 < VAR_1 ? VAR_4 : (VAR_1 - 1);
    FUNC_1(VAR_0, VAR_2, VAR_5);
    VAR_0[VAR_5] = '\0';
  }

  FUNC_0(VAR_1 > VAR_4);
  return VAR_4;
}
