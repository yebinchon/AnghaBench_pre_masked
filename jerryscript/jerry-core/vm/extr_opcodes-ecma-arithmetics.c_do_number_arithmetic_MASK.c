
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int number_arithmetic_op ;
typedef int ecma_value_t ;
typedef int ecma_number_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_1 ;




 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;

ecma_value_t
FUNC_4 (number_arithmetic_op VAR_4,
                      ecma_value_t VAR_5,
                      ecma_value_t VAR_6)
{
  ecma_value_t VAR_7 = VAR_1;

  FUNC_1 (VAR_2, VAR_5, VAR_7);
  FUNC_1 (VAR_3, VAR_6, VAR_7);

  ecma_number_t VAR_8 = VAR_0;

  switch (VAR_4)
  {
    case 128:
    {
      VAR_8 = VAR_2 - VAR_3;
      break;
    }
    case 130:
    {
      VAR_8 = VAR_2 * VAR_3;
      break;
    }
    case 131:
    {
      VAR_8 = VAR_2 / VAR_3;
      break;
    }
    case 129:
    {
      VAR_8 = FUNC_3 (VAR_2, VAR_3);
      break;
    }
  }

  VAR_7 = FUNC_2 (VAR_8);

  FUNC_0 (VAR_3);
  FUNC_0 (VAR_2);

  return VAR_7;
}
