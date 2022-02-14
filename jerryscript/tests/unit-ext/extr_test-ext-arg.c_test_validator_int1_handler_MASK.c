
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int jerryx_arg_t ;
typedef int jerry_value_t ;
typedef int jerry_length_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,int ,int ,int ,int ) ;
 int FUNC_7 (int*,int ,int ,int ,int ) ;
 int FUNC_8 (int const*,int const,int *,int ) ;
 int FUNC_9 (scalar_t__*,int ,int ,int ,int ) ;
 int FUNC_10 (scalar_t__*,int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static jerry_value_t
FUNC_11 (const jerry_value_t VAR_5,
                             const jerry_value_t VAR_6,
                             const jerry_value_t VAR_7[],
                             const jerry_length_t VAR_8)
{
  FUNC_1 (VAR_5);
  FUNC_1 (VAR_6);

  uint8_t VAR_9, VAR_10, VAR_11;
  int8_t VAR_12, VAR_13, VAR_14;
  uint32_t VAR_15, VAR_16, VAR_17;
  int32_t VAR_18, VAR_19, VAR_20;

  jerryx_arg_t VAR_21[] =
  {
    FUNC_10 (&VAR_9, VAR_3, VAR_0, VAR_1, VAR_2),
    FUNC_10 (&VAR_10, VAR_3, VAR_0, VAR_1, VAR_2),
    FUNC_10 (&VAR_11, VAR_3, VAR_0, VAR_1, VAR_2),
    FUNC_7 (&VAR_12, VAR_3, VAR_0, VAR_1, VAR_2),
    FUNC_7 (&VAR_13, VAR_3, VAR_0, VAR_1, VAR_2),
    FUNC_7 (&VAR_14, VAR_3, VAR_0, VAR_1, VAR_2),
    FUNC_9 (&VAR_15, VAR_3, VAR_0, VAR_1, VAR_2),
    FUNC_9 (&VAR_16, VAR_3, VAR_0, VAR_1, VAR_2),
    FUNC_9 (&VAR_17, VAR_3, VAR_0, VAR_1, VAR_2),
    FUNC_6 (&VAR_18, VAR_3, VAR_0, VAR_1, VAR_2),
    FUNC_6 (&VAR_19, VAR_3, VAR_0, VAR_1, VAR_2),
    FUNC_6 (&VAR_20, VAR_3, VAR_0, VAR_1, VAR_2)
  };

  jerry_value_t VAR_22 = FUNC_8 (VAR_7,
                                                   VAR_8,
                                                   VAR_21,
                                                   FUNC_0 (VAR_21));

  FUNC_2 (!FUNC_5 (VAR_22));
  FUNC_2 (VAR_9 == 0);
  FUNC_2 (VAR_10 == 255);
  FUNC_2 (VAR_11 == 128);
  FUNC_2 (VAR_12 == -128);
  FUNC_2 (VAR_13 == 127);
  FUNC_2 (VAR_14 == -127);
  FUNC_2 (VAR_15 == 0);
  FUNC_2 (VAR_16 == 4294967295);
  FUNC_2 (VAR_17 == 65536);
  FUNC_2 (VAR_18 == -2147483648);
  FUNC_2 (VAR_19 == 2147483647);
  FUNC_2 (VAR_20 == -2147483647);

  FUNC_4 (VAR_22);
  VAR_4++;

  return FUNC_3 ();
}
