
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int nums ;
typedef int jerry_char_t ;
typedef scalar_t__ const ecma_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__ const) ;
 scalar_t__ FUNC_2 (int const*,int ) ;
 int FUNC_3 (int const*) ;

int
FUNC_4 (void)
{
  FUNC_0 ();

  const jerry_char_t *VAR_2[] =
  {
    (const jerry_char_t *) "1",
    (const jerry_char_t *) "0.5",
    (const jerry_char_t *) "12345",
    (const jerry_char_t *) "1e-45",
    (const jerry_char_t *) "-2.5e+38",
    (const jerry_char_t *) "-2.5e38",
    (const jerry_char_t *) "- 2.5e+38",
    (const jerry_char_t *) "-2 .5e+38",
    (const jerry_char_t *) "-2. 5e+38",
    (const jerry_char_t *) "-2.5e+ 38",
    (const jerry_char_t *) "-2.5 e+38",
    (const jerry_char_t *) "-2.5e +38",
    (const jerry_char_t *) "NaN",
    (const jerry_char_t *) "abc",
    (const jerry_char_t *) "   Infinity  ",
    (const jerry_char_t *) "-Infinity",
    (const jerry_char_t *) "0",
    (const jerry_char_t *) "0",
  };

  const ecma_number_t VAR_3[] =
  {
    (ecma_number_t) 1.0,
    (ecma_number_t) 0.5,
    (ecma_number_t) 12345.0,
    (ecma_number_t) 1.0e-45,
    (ecma_number_t) -2.5e+38,
    (ecma_number_t) -2.5e+38,
    (ecma_number_t) VAR_1,
    (ecma_number_t) VAR_1,
    (ecma_number_t) VAR_1,
    (ecma_number_t) VAR_1,
    (ecma_number_t) VAR_1,
    (ecma_number_t) VAR_1,
    (ecma_number_t) VAR_1,
    (ecma_number_t) VAR_1,
    (ecma_number_t) VAR_0,
    (ecma_number_t) -VAR_0,
    (ecma_number_t) +0.0,
    (ecma_number_t) -0.0
  };

  for (uint32_t VAR_4 = 0;
       VAR_4 < sizeof (VAR_3) / sizeof (VAR_3[0]);
       VAR_4++)
  {
    ecma_number_t VAR_5 = FUNC_2 (VAR_2[VAR_4], FUNC_3 (VAR_2[VAR_4]));

    if (VAR_5 != VAR_3[VAR_4]
        && (!FUNC_1 (VAR_5)
            || !FUNC_1 (VAR_3[VAR_4])))
    {
      return 1;
    }
  }

  return 0;
}
