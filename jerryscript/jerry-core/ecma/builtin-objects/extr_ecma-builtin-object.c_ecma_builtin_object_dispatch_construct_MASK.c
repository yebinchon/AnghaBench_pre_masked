
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_object_t ;
typedef scalar_t__ ecma_length_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const) ;
 int * FUNC_3 () ;

ecma_value_t
FUNC_4 (const ecma_value_t *VAR_0,
                                        ecma_length_t VAR_1)
{
  FUNC_0 (VAR_1 == 0 || VAR_0 != ((void*)0));

  if (VAR_1 == 0)
  {
    ecma_object_t *VAR_2 = FUNC_3 ();

    return FUNC_1 (VAR_2);
  }

  return FUNC_2 (VAR_0[0]);
}
