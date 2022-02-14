
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valid_utf8_string_1 ;
typedef int lit_utf8_size_t ;
typedef int const lit_utf8_byte_t ;
typedef int invalid_cesu8_string_3 ;
typedef int invalid_cesu8_string_2 ;
typedef int invalid_cesu8_string_1 ;
typedef int ecma_string_t ;
typedef size_t ecma_length_t ;
typedef scalar_t__ ecma_char_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * FUNC_5 (int const*,int) ;
 size_t FUNC_6 (int *) ;
 size_t FUNC_7 (int const*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int,int const*) ;
 int FUNC_11 (int const*,int) ;
 int FUNC_12 (int const**) ;
 int FUNC_13 (int const**) ;
 scalar_t__ FUNC_14 (int const*) ;
 scalar_t__ FUNC_15 (int const*) ;
 scalar_t__ FUNC_16 (int const**) ;
 scalar_t__ FUNC_17 (int const**) ;
 size_t FUNC_18 (int const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_19 () ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_20 (void)
{
  FUNC_1 ();

  FUNC_9 ();
  FUNC_4 ();

  lit_utf8_byte_t VAR_4[VAR_0];
  ecma_char_t VAR_5[VAR_1];
  const lit_utf8_byte_t *VAR_6[VAR_1];

  for (int VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  {
    lit_utf8_size_t VAR_8 = (VAR_7 == 0) ? 0 : (lit_utf8_size_t) (FUNC_19 () % VAR_0);
    ecma_length_t VAR_9 = FUNC_7 (VAR_4, VAR_8);

    ecma_string_t *VAR_10 = FUNC_5 (VAR_4, VAR_8);
    ecma_length_t VAR_11 = FUNC_6 (VAR_10);
    FUNC_0 (VAR_11 == VAR_9);
    FUNC_2 (VAR_10);

    FUNC_0 (FUNC_18 (VAR_4, VAR_8) == VAR_9);

    const lit_utf8_byte_t *VAR_12 = VAR_4;
    const lit_utf8_byte_t *VAR_13 = VAR_4 + VAR_8;

    ecma_length_t VAR_14 = 0;
    ecma_length_t VAR_15 = 0;

    while (VAR_12 < VAR_13)
    {
      VAR_5[VAR_15] = FUNC_14 (VAR_12);
      VAR_6[VAR_15] = VAR_12;
      VAR_15++;
      VAR_14++;

      FUNC_13 (&VAR_12);
    }

    FUNC_0 (VAR_9 == VAR_14);

    if (VAR_15 > 0)
    {
      for (int VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
      {
        ecma_length_t VAR_17 = (ecma_length_t) FUNC_19 () % VAR_15;
        VAR_12 = VAR_6[VAR_17];
        FUNC_0 (FUNC_14 (VAR_12) == VAR_5[VAR_17]);
      }
    }

    VAR_12 = (lit_utf8_byte_t *) VAR_13;
    while (VAR_12 > VAR_4)
    {
      FUNC_0 (VAR_15 > 0);
      VAR_14--;
      FUNC_0 (VAR_5[VAR_14] == FUNC_15 (VAR_12));
      FUNC_12 (&VAR_12);
    }

    FUNC_0 (VAR_14 == 0);

    while (VAR_12 < VAR_13)
    {
      ecma_char_t VAR_18 = FUNC_16 (&VAR_12);
      FUNC_0 (VAR_18 == VAR_5[VAR_14]);
      VAR_14++;
    }

    FUNC_0 (VAR_9 == VAR_14);

    while (VAR_12 > VAR_4)
    {
      FUNC_0 (VAR_15 > 0);
      VAR_14--;
      FUNC_0 (VAR_5[VAR_14] == FUNC_17 (&VAR_12));
    }

    FUNC_0 (VAR_14 == 0);
  }


  lit_utf8_byte_t VAR_19[] = {0xC0, 0x82};
  FUNC_0 (!FUNC_11 (VAR_19, sizeof (VAR_19)));


  lit_utf8_byte_t VAR_20[] = {0xE0, 0x80, 0x81};
  FUNC_0 (!FUNC_11 (VAR_20, sizeof (VAR_20)));


  lit_utf8_byte_t VAR_21[] = {0xED, 0xA4, 0x81, 0xED, 0xBF, 0xB0};
  FUNC_0 (FUNC_11 (VAR_21, sizeof (VAR_21)));


  lit_utf8_byte_t VAR_22[] = {0xED, 0xA4, 0x81};
  FUNC_0 (FUNC_11 (VAR_22, sizeof (VAR_22)));

  lit_utf8_byte_t VAR_23[3];
  lit_utf8_size_t VAR_24;

  VAR_24 = FUNC_10 (0x73, VAR_23);
  FUNC_0 (VAR_24 == 1);
  FUNC_0 (VAR_23[0] == 0x73);

  VAR_24 = FUNC_10 (0x41A, VAR_23);
  FUNC_0 (VAR_24 == 2);
  FUNC_0 (VAR_23[0] == 0xD0);
  FUNC_0 (VAR_23[1] == 0x9A);

  VAR_24 = FUNC_10 (0xD7FF, VAR_23);
  FUNC_0 (VAR_24 == 3);
  FUNC_0 (VAR_23[0] == 0xED);
  FUNC_0 (VAR_23[1] == 0x9F);
  FUNC_0 (VAR_23[2] == 0xBF);

  FUNC_3 ();
  FUNC_8 ();

  return 0;
}
