
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_string_t ;
typedef int ecma_property_t ;
typedef int ecma_object_t ;
typedef scalar_t__ ecma_lexical_environment_type_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

bool
FUNC_6 (ecma_object_t *VAR_2,
                     ecma_string_t *VAR_3)
{
  FUNC_0 (VAR_2 != ((void*)0)
                && FUNC_4 (VAR_2));

  ecma_lexical_environment_type_t VAR_4 = FUNC_3 (VAR_2);

  if (VAR_4 == VAR_0)
  {
    ecma_property_t *VAR_5 = FUNC_1 (VAR_2, VAR_3);

    return (VAR_5 != ((void*)0));
  }
  else
  {
    FUNC_0 (VAR_4 == VAR_1);

    ecma_object_t *VAR_6 = FUNC_2 (VAR_2);

    return FUNC_5 (VAR_6, VAR_3);
  }
}
