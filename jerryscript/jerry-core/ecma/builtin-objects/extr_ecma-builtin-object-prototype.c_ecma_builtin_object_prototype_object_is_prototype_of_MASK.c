
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_object_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static ecma_value_t
FUNC_6 (ecma_object_t *VAR_0,
                                                      ecma_value_t VAR_1)
{

  ecma_value_t VAR_2 = FUNC_5 (VAR_1);

  if (FUNC_0 (VAR_2))
  {
    return VAR_2;
  }

  ecma_object_t *VAR_3 = FUNC_2 (VAR_2);

  ecma_value_t VAR_4 = FUNC_3 (FUNC_4 (VAR_0, VAR_3));

  FUNC_1 (VAR_3);

  return VAR_4;
}
