
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_string_t ;
typedef int ecma_standard_error_t ;
typedef int ecma_object_t ;
typedef scalar_t__ ecma_length_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (int ,int *) ;
 int * FUNC_7 (int const) ;

ecma_value_t
FUNC_8 (ecma_standard_error_t VAR_1,
                                         const ecma_value_t *VAR_2,
                                         ecma_length_t VAR_3)
{
  FUNC_0 (VAR_3 == 0 || VAR_2 != ((void*)0));

  if (VAR_3 != 0
      && !FUNC_3 (VAR_2[0]))
  {
    ecma_string_t *VAR_4 = FUNC_7 (VAR_2[0]);

    if (FUNC_1 (VAR_4 == ((void*)0)))
    {
      return VAR_0;
    }

    ecma_object_t *VAR_5 = FUNC_6 (VAR_1,
                                                                              VAR_4);

    FUNC_2 (VAR_4);
    return FUNC_4 (VAR_5);
  }
  else
  {
    ecma_object_t *VAR_6 = FUNC_5 (VAR_1);

    return FUNC_4 (VAR_6);
  }
}
