
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ const uint32_t ;
typedef scalar_t__ ecma_number_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__ const,scalar_t__ const) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

uint32_t
FUNC_6 (ecma_number_t VAR_0)
{
  if (FUNC_3 (VAR_0)
      || FUNC_5 (VAR_0)
      || FUNC_2 (VAR_0))
  {
    return 0;
  }

  const bool VAR_1 = FUNC_4 (VAR_0);
  const ecma_number_t VAR_2 = VAR_1 ? -VAR_0 : VAR_0;


  const uint64_t VAR_3 = (1ull << 32);

  const ecma_number_t VAR_4 = (float) VAR_3;

  ecma_number_t VAR_5;

  if (VAR_2 >= VAR_4)
  {
    VAR_5 = FUNC_1 (VAR_2,
                                                      VAR_4);
  }
  else
  {
    VAR_5 = VAR_2;
  }


  FUNC_0 (VAR_5 < VAR_3);
  uint32_t VAR_6 = (uint32_t) VAR_5;

  const uint32_t VAR_7 = VAR_1 ? -VAR_6 : VAR_6;


  if (VAR_1
      && VAR_6 != 0)
  {
    FUNC_0 (VAR_7 == VAR_3 - VAR_6);
  }
  else
  {
    FUNC_0 (VAR_7 == VAR_6);
  }


  return VAR_7;
}
