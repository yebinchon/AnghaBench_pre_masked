
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int lit_magic_string_id_t ;
typedef int ecma_value_t ;
typedef scalar_t__ ecma_preferred_type_hint_t ;
typedef int ecma_object_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int ) ;

ecma_value_t
FUNC_14 (ecma_object_t *VAR_7,
                                      ecma_preferred_type_hint_t VAR_8)
{
  FUNC_2 (VAR_7 != ((void*)0)
                && !FUNC_5 (VAR_7));

  if (VAR_8 == VAR_0)
  {
    if (FUNC_9 (VAR_7, VAR_4))
    {
      VAR_8 = VAR_2;
    }
    else
    {
      VAR_8 = VAR_1;
    }
  }

  for (uint32_t VAR_9 = 1; VAR_9 <= 2; VAR_9++)
  {
    lit_magic_string_id_t VAR_10;

    if ((VAR_9 == 1 && VAR_8 == VAR_2)
        || (VAR_9 == 2 && VAR_8 == VAR_1))
    {
      VAR_10 = VAR_5;
    }
    else
    {
      VAR_10 = VAR_6;
    }

    ecma_value_t VAR_11 = FUNC_12 (VAR_7, VAR_10);

    if (FUNC_1 (VAR_11))
    {
      return VAR_11;
    }

    ecma_value_t VAR_12 = VAR_3;

    if (FUNC_11 (VAR_11))
    {
      ecma_object_t *VAR_13 = FUNC_4 (VAR_11);

      VAR_12 = FUNC_10 (VAR_13,
                                               FUNC_8 (VAR_7),
                                               ((void*)0),
                                               0);
    }

    FUNC_3 (VAR_11);

    if (FUNC_1 (VAR_12)
        || (!FUNC_6 (VAR_12)
           && !FUNC_7 (VAR_12)))
    {
      return VAR_12;
    }

    FUNC_3 (VAR_12);
  }

  return FUNC_13 (FUNC_0 ("Invalid argument type in [[DefaultValue]]."));
}
