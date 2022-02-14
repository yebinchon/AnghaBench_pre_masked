
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0, const char *VAR_1)
{
  char VAR_2[32+1];
  size_t VAR_3 = sizeof(VAR_2) - 1;
  VAR_2[32] = 0;

  size_t VAR_4 = VAR_1 - VAR_0 + 1;

  while (VAR_4 >= VAR_3)
  {
    FUNC_1(VAR_2, VAR_0, VAR_3);
    FUNC_0(VAR_2);
    VAR_4 -= VAR_3;
    VAR_0 += VAR_3;
  }

  if (VAR_4 == 0)
    return;

  FUNC_1(VAR_2, VAR_0, VAR_4);
  VAR_2[VAR_4] = 0;
  FUNC_0(VAR_2);
}
