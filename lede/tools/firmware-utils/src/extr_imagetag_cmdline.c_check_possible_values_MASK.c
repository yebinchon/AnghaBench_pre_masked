
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, const char *VAR_1[])
{
  int VAR_2, VAR_3, VAR_4;
  size_t VAR_5;

  if (!VAR_0)
    return -1;

  VAR_3 = VAR_4 = 0;

  for (VAR_2 = 0, VAR_5 = FUNC_0(VAR_0); VAR_1[VAR_2]; ++VAR_2)
    {
      if (FUNC_1(VAR_0, VAR_1[VAR_2], VAR_5) == 0)
        {
          ++VAR_3;
          VAR_4 = VAR_2;
          if (FUNC_0(VAR_1[VAR_2]) == VAR_5)
            return VAR_2;
        }
    }

  if (VAR_3 == 1)
    return VAR_4;

  return (VAR_3 ? -2 : -1);
}
