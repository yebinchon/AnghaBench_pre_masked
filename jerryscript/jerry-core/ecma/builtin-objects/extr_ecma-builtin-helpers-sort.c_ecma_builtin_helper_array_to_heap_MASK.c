
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ecma_value_t ;
typedef int (* ecma_builtin_helper_sort_compare_fn_t ) (int ,int ,int ) ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;

__attribute__((used)) static ecma_value_t
FUNC_6 (ecma_value_t *VAR_5,
                                   uint32_t VAR_6,
                                   uint32_t VAR_7,
                                   ecma_value_t VAR_8,
                                   const ecma_builtin_helper_sort_compare_fn_t VAR_9)
{
  ecma_value_t VAR_10 = VAR_1;


  uint32_t VAR_11 = VAR_6 * 2 + 1;
  ecma_value_t VAR_12 = VAR_5[VAR_6];
  bool VAR_13 = 0;

  while (VAR_11 <= VAR_7 && FUNC_4 (VAR_10) && !VAR_13)
  {
    if (VAR_11 < VAR_7)
    {

      FUNC_1 (VAR_3, VAR_9 (VAR_5[VAR_11], VAR_5[VAR_11 + 1], VAR_8),
                      VAR_10);

      FUNC_2 (FUNC_5 (VAR_3));


      if (FUNC_3 (VAR_3) < VAR_0)
      {
        VAR_11++;
      }

      FUNC_0 (VAR_3);
    }

    if (FUNC_4 (VAR_10))
    {
      FUNC_2 (VAR_11 <= VAR_7);


      FUNC_1 (VAR_4, VAR_9 (VAR_5[VAR_11], VAR_12, VAR_8), VAR_10);
      FUNC_2 (FUNC_5 (VAR_4));

      if (FUNC_3 (VAR_4) <= VAR_0)
      {

        VAR_13 = 1;
      }
      else
      {

        uint32_t VAR_14 = (VAR_11 - 1) / 2;
        FUNC_2 (VAR_14 <= VAR_7);
        VAR_5[VAR_14] = VAR_5[VAR_11];


        VAR_11 = VAR_11 * 2 + 1;
      }

      FUNC_0 (VAR_4);
    }
  }





  uint32_t VAR_15 = (VAR_11 - 1) / 2;
  FUNC_2 (VAR_15 <= VAR_7);
  VAR_5[VAR_15] = VAR_12;

  if (FUNC_4 (VAR_10))
  {
    VAR_10 = VAR_2;
  }

  return VAR_10;
}
