
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_preferred_type_hint_t ;
typedef int ecma_object_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

ecma_value_t
FUNC_5 (ecma_value_t VAR_0,
                      ecma_preferred_type_hint_t VAR_1)
{
  FUNC_0 (VAR_0);

  if (FUNC_3 (VAR_0))
  {
    ecma_object_t *VAR_2 = FUNC_2 (VAR_0);

    return FUNC_4 (VAR_2, VAR_1);
  }
  else
  {
    return FUNC_1 (VAR_0);
  }
}
