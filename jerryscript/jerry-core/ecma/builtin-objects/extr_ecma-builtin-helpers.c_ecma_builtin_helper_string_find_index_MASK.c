
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lit_utf8_byte_t ;
typedef int ecma_string_t ;
typedef scalar_t__ ecma_length_t ;
typedef scalar_t__ ecma_char_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int const**) ;
 int FUNC_4 (int const**) ;
 scalar_t__ FUNC_5 (int const**) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

bool
FUNC_6 (ecma_string_t *VAR_4,
                                       ecma_string_t *VAR_5,
                                       bool VAR_6,
                                       ecma_length_t VAR_7,
                                       ecma_length_t *VAR_8)
{
  bool VAR_9 = 0;
  const ecma_length_t VAR_10 = FUNC_2 (VAR_4);
  const ecma_length_t VAR_11 = FUNC_2 (VAR_5);

  if (VAR_11 <= VAR_10)
  {
    if (!VAR_11)
    {
      VAR_9 = 1;
      *VAR_8 = VAR_6 ? 0 : VAR_10;
    }
    else
    {

      FUNC_1 (VAR_4, VAR_1, VAR_0);

      ecma_length_t VAR_12 = VAR_7;

      const lit_utf8_byte_t *VAR_13 = VAR_1;
      for (ecma_length_t VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
      {
        FUNC_4 (&VAR_13);
      }


      FUNC_1 (VAR_5, VAR_3, VAR_2);

      const lit_utf8_byte_t *VAR_15 = VAR_3;


      bool VAR_16 = 1;
      ecma_char_t VAR_17 = FUNC_5 (&VAR_15);
      while (VAR_16)
      {

        ecma_length_t VAR_18 = 0;
        const lit_utf8_byte_t *VAR_19 = VAR_13;

        if (VAR_18 < VAR_11 &&
            VAR_12 + VAR_18 < VAR_10 &&
            FUNC_5 (&VAR_13) == VAR_17)
        {
          const lit_utf8_byte_t *VAR_20 = VAR_15;
          VAR_18++;

          while (VAR_18 < VAR_11 &&
                 VAR_12 + VAR_18 < VAR_10 &&
                 FUNC_5 (&VAR_13) == FUNC_5 (&VAR_20))
          {
            VAR_18++;
          }
        }


        if (VAR_18 == VAR_11)
        {
          VAR_9 = 1;
          *VAR_8 = VAR_12;

          break;
        }
        else
        {

          VAR_13 = VAR_19;

          if (VAR_6)
          {
            if ((VAR_16 = (VAR_12 <= VAR_10 - VAR_11)))
            {
              FUNC_4 (&VAR_13);
              VAR_12++;
            }
          }
          else
          {
            if ((VAR_16 = (VAR_12 > 0)))
            {
              FUNC_3 (&VAR_13);
              VAR_12--;
            }
          }
        }
      }

      FUNC_0 (VAR_3, VAR_2);
      FUNC_0 (VAR_1, VAR_0);
    }
  }

  return VAR_9;
}
