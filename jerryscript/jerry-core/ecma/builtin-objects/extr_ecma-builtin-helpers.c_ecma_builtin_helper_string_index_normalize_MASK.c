
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int ecma_number_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

uint32_t
FUNC_4 (ecma_number_t VAR_0,
                                            uint32_t VAR_1,
                                            bool VAR_2)
{
  uint32_t VAR_3 = 0;

  if (FUNC_1 (VAR_0))
  {
    if (!VAR_2)
    {
      VAR_3 = VAR_1;
    }
  }
  else if (!FUNC_2 (VAR_0))
  {
    if (FUNC_0 (VAR_0))
    {
      VAR_3 = VAR_1;
    }
    else
    {
      VAR_3 = FUNC_3 (VAR_0);

      if (VAR_3 > VAR_1)
      {
        VAR_3 = VAR_1;
      }
    }
  }

  return VAR_3;
}
