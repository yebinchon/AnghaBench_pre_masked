
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_number_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

ecma_value_t
FUNC_8 (ecma_value_t VAR_2,
                    ecma_number_t *VAR_3)
{
  if (FUNC_0 (VAR_2))
  {
    return VAR_2;
  }


  ecma_value_t VAR_4 = FUNC_1 (VAR_2, VAR_3);


  if (FUNC_0 (VAR_4))
  {
    return VAR_4;
  }

  ecma_number_t VAR_5 = *VAR_3;


  if (FUNC_3 (VAR_5))
  {
    *VAR_3 = VAR_0;
    return VAR_1;
  }


  if (FUNC_5 (VAR_5) || FUNC_2 (VAR_5))
  {
    return VAR_1;
  }

  ecma_number_t VAR_6 = FUNC_7 (FUNC_6 (VAR_5));


  *VAR_3 = FUNC_4 (VAR_5) ? -VAR_6 : VAR_6;
  return VAR_1;
}
