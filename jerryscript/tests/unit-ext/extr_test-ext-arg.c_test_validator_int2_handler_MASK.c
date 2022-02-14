
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerryx_arg_t ;
typedef int jerry_value_t ;
typedef int jerry_length_t ;
typedef int int8_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,int ,int ,int ,int ) ;
 int FUNC_7 (int const*,int const,int *,int ) ;
 int VAR_7 ;

__attribute__((used)) static jerry_value_t
FUNC_8 (const jerry_value_t VAR_8,
                             const jerry_value_t VAR_9,
                             const jerry_value_t VAR_10[],
                             const jerry_length_t VAR_11)
{
  FUNC_1 (VAR_8);
  FUNC_1 (VAR_9);

  int8_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
  VAR_20 = 123;
  VAR_21 = 123;

  jerryx_arg_t VAR_22[] =
  {
    FUNC_6 (&VAR_12, VAR_6, VAR_1, VAR_2, VAR_5),
    FUNC_6 (&VAR_13, VAR_3, VAR_1, VAR_2, VAR_5),
    FUNC_6 (&VAR_14, VAR_0, VAR_1, VAR_2, VAR_5),
    FUNC_6 (&VAR_15, VAR_6, VAR_1, VAR_2, VAR_5),
    FUNC_6 (&VAR_16, VAR_3, VAR_1, VAR_2, VAR_5),
    FUNC_6 (&VAR_17, VAR_0, VAR_1, VAR_2, VAR_5),
    FUNC_6 (&VAR_18, VAR_6, VAR_1, VAR_2, VAR_5),
    FUNC_6 (&VAR_19, VAR_6, VAR_1, VAR_2, VAR_5),
    FUNC_6 (&VAR_20, VAR_6, VAR_1, VAR_2, VAR_5),
    FUNC_6 (&VAR_21, VAR_6, VAR_4, VAR_2, VAR_5),
  };

  jerry_value_t VAR_23 = FUNC_7 (VAR_10,
                                                   VAR_11,
                                                   VAR_22,
                                                   FUNC_0 (VAR_22));

  FUNC_2 (FUNC_5 (VAR_23));
  FUNC_2 (VAR_12 == -2);
  FUNC_2 (VAR_13 == -2);
  FUNC_2 (VAR_14 == -1);
  FUNC_2 (VAR_15 == 2);
  FUNC_2 (VAR_16 == 1);
  FUNC_2 (VAR_17 == 2);
  FUNC_2 (VAR_18 == 127);
  FUNC_2 (VAR_19 == -128);
  FUNC_2 (VAR_20 == 127);
  FUNC_2 (VAR_21 == 123);

  FUNC_4 (VAR_23);
  VAR_7++;

  return FUNC_3 ();
}
