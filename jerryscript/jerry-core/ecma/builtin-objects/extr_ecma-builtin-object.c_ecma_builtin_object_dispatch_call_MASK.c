
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef scalar_t__ ecma_length_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*,scalar_t__) ;
 scalar_t__ FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;
 int FUNC_4 (int const) ;

ecma_value_t
FUNC_5 (const ecma_value_t *VAR_0,
                                   ecma_length_t VAR_1)
{
  FUNC_0 (VAR_1 == 0 || VAR_0 != ((void*)0));

  if (VAR_1 == 0
      || FUNC_3 (VAR_0[0])
      || FUNC_2 (VAR_0[0]))
  {
    return FUNC_1 (VAR_0, VAR_1);
  }

  return FUNC_4 (VAR_0[0]);
}
