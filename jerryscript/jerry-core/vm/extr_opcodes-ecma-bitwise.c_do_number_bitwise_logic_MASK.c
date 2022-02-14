
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int number_bitwise_logic_op ;
typedef int int32_t ;
typedef int ecma_value_t ;
typedef int ecma_number_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int) ;







 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

ecma_value_t
FUNC_7 (number_bitwise_logic_op VAR_4,
                         ecma_value_t VAR_5,
                         ecma_value_t VAR_6)
{
  FUNC_3 (!FUNC_0 (VAR_5)
                && !FUNC_0 (VAR_6));

  ecma_value_t VAR_7 = VAR_1;

  FUNC_2 (VAR_2, VAR_5, VAR_7);
  FUNC_2 (VAR_3, VAR_6, VAR_7);

  ecma_number_t VAR_8 = VAR_0;
  uint32_t VAR_9 = FUNC_6 (VAR_3);

  switch (VAR_4)
  {
    case 134:
    {
      uint32_t VAR_10 = FUNC_6 (VAR_2);
      VAR_8 = (ecma_number_t) ((int32_t) (VAR_10 & VAR_9));
      break;
    }
    case 133:
    {
      uint32_t VAR_11 = FUNC_6 (VAR_2);
      VAR_8 = (ecma_number_t) ((int32_t) (VAR_11 | VAR_9));
      break;
    }
    case 132:
    {
      uint32_t VAR_12 = FUNC_6 (VAR_2);
      VAR_8 = (ecma_number_t) ((int32_t) (VAR_12 ^ VAR_9));
      break;
    }
    case 130:
    {
      VAR_8 = (ecma_number_t) (FUNC_5 (VAR_2) << (VAR_9 & 0x1F));
      break;
    }
    case 129:
    {
      VAR_8 = (ecma_number_t) (FUNC_5 (VAR_2) >> (VAR_9 & 0x1F));
      break;
    }
    case 128:
    {
      uint32_t VAR_13 = FUNC_6 (VAR_2);
      VAR_8 = (ecma_number_t) (VAR_13 >> (VAR_9 & 0x1F));
      break;
    }
    case 131:
    {
      VAR_8 = (ecma_number_t) ((int32_t) ~VAR_9);
      break;
    }
  }

  VAR_7 = FUNC_4 (VAR_8);

  FUNC_1 (VAR_3);
  FUNC_1 (VAR_2);

  return VAR_7;
}
