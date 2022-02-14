
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int FUNC_2 (const char *VAR_0, const int VAR_1)
{
  if (VAR_1 >= 9)
  {
    static const char *VAR_2 = "rounds=";

    if (FUNC_0 (VAR_0, VAR_2, 7) == 0)
    {
      const char *VAR_3 = FUNC_1 (VAR_0 + 8, '$');

      if (VAR_3 == ((void*)0)) return -1;

      const int VAR_4 = VAR_3 - VAR_0;

      return VAR_4;
    }
  }

  return -1;
}
