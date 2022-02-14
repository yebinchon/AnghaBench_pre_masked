
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int const VAR_0 ;
 size_t FUNC_0 (char const*) ;

u32 FUNC_1 (const char *VAR_1, const u32 VAR_2)
{
  bool VAR_3 = 0;

  u32 VAR_4 = 0;

  const size_t VAR_5 = FUNC_0 (VAR_1);

  for (size_t VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  {
    if (VAR_3 == 1)
    {
      VAR_3 = 0;
    }
    else
    {
      if (VAR_1[VAR_6] == '?')
      {
        VAR_3 = 1;
      }

      if (VAR_2 & VAR_0)
      {
        VAR_3 = 1;
      }

      VAR_4++;
    }
  }

  return VAR_4;
}
