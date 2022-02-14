
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_string_t ;
typedef int ecma_property_t ;
typedef int ecma_object_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int *,int ,int) ;
 int FUNC_13 (int ) ;

ecma_value_t
FUNC_14 (ecma_object_t *VAR_4,
                             ecma_string_t *VAR_5,
                             ecma_value_t VAR_6,
                             bool VAR_7)
{
  FUNC_4 (VAR_4 != ((void*)0)
                && FUNC_8 (VAR_4));
  FUNC_4 (VAR_5 != ((void*)0));

  if (FUNC_7 (VAR_4) == VAR_0)
  {
    ecma_property_t *VAR_8 = FUNC_5 (VAR_4, VAR_5);

    FUNC_4 (VAR_8 != ((void*)0)
                  && FUNC_2 (*VAR_8) == VAR_2);

    if (FUNC_9 (*VAR_8))
    {
      FUNC_11 (VAR_4, FUNC_3 (VAR_8), VAR_6);
    }
    else if (VAR_7)
    {
      return FUNC_13 (FUNC_0 ("Binding cannot be set."));
    }
  }
  else
  {
    FUNC_4 (FUNC_7 (VAR_4) == VAR_1);

    ecma_object_t *VAR_9 = FUNC_6 (VAR_4);

    ecma_value_t VAR_10 = FUNC_12 (VAR_9,
                                                  VAR_5,
                                                  VAR_6,
                                                  VAR_7);

    if (FUNC_1 (VAR_10))
    {
      return VAR_10;
    }

    FUNC_4 (FUNC_10 (VAR_10));
  }

  return VAR_3;
}
