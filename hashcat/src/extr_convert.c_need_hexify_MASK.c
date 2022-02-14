
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (int const*,size_t const) ;
 int FUNC_1 (int const*,size_t const,char const) ;
 int FUNC_2 (int const*,size_t const) ;
 int FUNC_3 (int const*,size_t const) ;

bool FUNC_4 (const u8 *VAR_0, const size_t VAR_1, const char VAR_2, bool VAR_3)
{
  bool VAR_4 = 0;

  if (VAR_3 == 1)
  {
    if (FUNC_2 (VAR_0, VAR_1) == 0)
    {
      VAR_4 = 1;
    }
  }
  else
  {
    if (FUNC_3 (VAR_0, VAR_1) == 0)
    {
      VAR_4 = 1;
    }
  }

  if (VAR_4 == 0)
  {
    if (FUNC_1 (VAR_0, VAR_1, VAR_2) == 1)
    {
      VAR_4 = 1;
    }
  }



  if (VAR_4 == 0)
  {
    if (FUNC_0 (VAR_0, VAR_1))
    {
      VAR_4 = 1;
    }
  }

  return VAR_4;
}
