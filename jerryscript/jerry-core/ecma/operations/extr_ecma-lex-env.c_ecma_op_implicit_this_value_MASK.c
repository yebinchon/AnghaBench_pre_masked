
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_object_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

ecma_value_t
FUNC_6 (ecma_object_t *VAR_3)
{
  FUNC_0 (VAR_3 != ((void*)0)
                && FUNC_3 (VAR_3));

  if (FUNC_2 (VAR_3) == VAR_0)
  {
    return VAR_2;
  }
  else
  {
    FUNC_0 (FUNC_2 (VAR_3) == VAR_1);

    ecma_object_t *VAR_4 = FUNC_1 (VAR_3);
    FUNC_5 (VAR_4);

    return FUNC_4 (VAR_4);
  }
}
