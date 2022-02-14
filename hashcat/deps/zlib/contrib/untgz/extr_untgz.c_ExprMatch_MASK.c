
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

int FUNC_1 (char *VAR_0,char *VAR_1)
{
  while (1)
    {
      if (FUNC_0(*VAR_1))
        {
          if (*VAR_1 == '/')
            {
              if (*VAR_0 != '\\' && *VAR_0 != '/')
                return 0;
              VAR_0 ++; VAR_1++;
            }
          else if (*VAR_1 == '*')
            {
              if (*VAR_1 ++ == 0)
                return 1;
              while (*++VAR_0 != *VAR_1)
                if (*VAR_0 == 0)
                  return 0;
            }
        }
      else
        {
          if (*VAR_0 != *VAR_1)
            return 0;
          if (*VAR_1++ == 0)
            return 1;
          VAR_0++;
        }
    }
}
