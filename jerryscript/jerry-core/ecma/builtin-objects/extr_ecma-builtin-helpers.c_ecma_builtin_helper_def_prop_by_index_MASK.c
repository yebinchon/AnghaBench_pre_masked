
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int ecma_value_t ;
typedef int ecma_string_t ;
typedef int ecma_object_t ;


 int * FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__) ;

ecma_value_t
FUNC_5 (ecma_object_t *VAR_1,
                                       uint32_t VAR_2,
                                       ecma_value_t VAR_3,
                                       uint32_t VAR_4)
{
  if (FUNC_1 (VAR_2 <= VAR_0))
  {
    return FUNC_2 (VAR_1,
                                         FUNC_0 (VAR_2),
                                         VAR_3,
                                         VAR_4);
  }

  ecma_string_t *VAR_5 = FUNC_4 (VAR_2);
  ecma_value_t VAR_6 = FUNC_2 (VAR_1,
                                                         VAR_5,
                                                         VAR_3,
                                                         VAR_4);
  FUNC_3 (VAR_5);

  return VAR_6;
}
