
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ecma_value_t ;
typedef int ecma_builtin_helper_sort_compare_fn_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int,int,int ,int const) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;

ecma_value_t
FUNC_4 (ecma_value_t *VAR_2,
                                            uint32_t VAR_3,
                                            ecma_value_t VAR_4,
                                            const ecma_builtin_helper_sort_compare_fn_t VAR_5)
{
  ecma_value_t VAR_6 = VAR_0;


  for (uint32_t VAR_7 = (VAR_3 / 2) + 1; VAR_7 > 0 && FUNC_3 (VAR_6); VAR_7--)
  {
    FUNC_1 (VAR_1,
                    FUNC_2 (VAR_2, VAR_7 - 1, VAR_3, VAR_4, VAR_5),
                    VAR_6);
    FUNC_0 (VAR_1);
  }


  for (uint32_t VAR_8 = VAR_3; VAR_8 > 0 && FUNC_3 (VAR_6); VAR_8--)
  {




    ecma_value_t VAR_9 = VAR_2[0];
    VAR_2[0] = VAR_2[VAR_8];
    VAR_2[VAR_8] = VAR_9;


    FUNC_1 (VAR_1,
                    FUNC_2 (VAR_2, 0, VAR_8 - 1, VAR_4, VAR_5),
                    VAR_6);
    FUNC_0 (VAR_1);
  }

  return VAR_6;
}
