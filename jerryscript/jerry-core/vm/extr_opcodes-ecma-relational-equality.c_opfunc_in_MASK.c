
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_string_t ;
typedef int ecma_object_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

ecma_value_t
FUNC_9 (ecma_value_t VAR_1,
           ecma_value_t VAR_2)
{
  if (!FUNC_4 (VAR_2))
  {
    return FUNC_8 (FUNC_0 ("Expected an object in 'in' check."));
  }

  ecma_string_t *VAR_3 = FUNC_7 (VAR_1);

  if (FUNC_1 (VAR_3 == ((void*)0)))
  {
    return VAR_0;
  }

  ecma_object_t *VAR_4 = FUNC_3 (VAR_2);
  ecma_value_t VAR_5 = FUNC_5 (FUNC_6 (VAR_4,
                                                                              VAR_3));
  FUNC_2 (VAR_3);
  return VAR_5;
}
