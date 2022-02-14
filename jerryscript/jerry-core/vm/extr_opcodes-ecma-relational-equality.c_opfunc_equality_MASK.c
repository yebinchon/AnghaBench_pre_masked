
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

ecma_value_t
FUNC_4 (ecma_value_t VAR_0,
                 ecma_value_t VAR_1)
{
  FUNC_1 (!FUNC_0 (VAR_0)
                && !FUNC_0 (VAR_1));

  ecma_value_t VAR_2 = FUNC_3 (VAR_0, VAR_1);

  FUNC_1 (FUNC_2 (VAR_2)
                || FUNC_0 (VAR_2));

  return VAR_2;
}
