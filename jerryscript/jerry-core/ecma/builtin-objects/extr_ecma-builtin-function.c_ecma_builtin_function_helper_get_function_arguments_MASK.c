
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_string_t ;
typedef int ecma_length_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int const) ;

__attribute__((used)) static ecma_value_t
FUNC_8 (const ecma_value_t *VAR_3,
                                                     ecma_length_t VAR_4)
{
  FUNC_0 (VAR_4 == 0 || VAR_3 != ((void*)0));

  if (VAR_4 <= 1)
  {
    return FUNC_5 (VAR_2);
  }

  ecma_string_t *VAR_5 = FUNC_7 (VAR_3[0]);

  if (FUNC_1 (VAR_5 == ((void*)0)))
  {
    return VAR_0;
  }

  if (VAR_4 == 2)
  {
    return FUNC_6 (VAR_5);
  }

  for (ecma_length_t VAR_6 = 1; VAR_6 < VAR_4 - 1; VAR_6++)
  {
    ecma_string_t *VAR_7 = FUNC_7 (VAR_3[VAR_6]);

    if (FUNC_1 (VAR_7 == ((void*)0)))
    {
      FUNC_4 (VAR_5);
      return VAR_0;
    }

    VAR_5 = FUNC_2 (VAR_5,
                                                      VAR_1);

    VAR_5 = FUNC_3 (VAR_5, VAR_7);
    FUNC_4 (VAR_7);
  }

  return FUNC_6 (VAR_5);
}
