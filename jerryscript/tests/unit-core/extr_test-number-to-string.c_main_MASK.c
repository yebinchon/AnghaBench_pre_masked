
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int str ;
typedef int nums ;
typedef int lit_utf8_size_t ;
typedef int lit_utf8_byte_t ;
typedef int const ecma_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int const,int *,int) ;
 scalar_t__ FUNC_2 (char*,char*,int ) ;

int
FUNC_3 (void)
{
  FUNC_0 ();

  const lit_utf8_byte_t *VAR_2[] =
  {
    (const lit_utf8_byte_t *) "1",
    (const lit_utf8_byte_t *) "0.5",
    (const lit_utf8_byte_t *) "12345",
    (const lit_utf8_byte_t *) "12345.123",
    (const lit_utf8_byte_t *) "1e-45",
    (const lit_utf8_byte_t *) "-2.5e+38",
    (const lit_utf8_byte_t *) "NaN",
    (const lit_utf8_byte_t *) "Infinity",
    (const lit_utf8_byte_t *) "-Infinity",
    (const lit_utf8_byte_t *) "0",
    (const lit_utf8_byte_t *) "0",
  };

  const ecma_number_t VAR_3[] =
  {
    (ecma_number_t) 1.0,
    (ecma_number_t) 0.5,
    (ecma_number_t) 12345.0,
    (ecma_number_t) 12345.123,
    (ecma_number_t) 1.0e-45,
    (ecma_number_t) -2.5e+38,
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
    lit_utf8_byte_t VAR_5[64];

    lit_utf8_size_t VAR_6 = FUNC_1 (VAR_3[VAR_4], VAR_5, sizeof (VAR_5));

    if (FUNC_2 ((char *) VAR_5, (char *) VAR_2[VAR_4], VAR_6) != 0)
    {
      return 1;
    }
  }

  return 0;
}
