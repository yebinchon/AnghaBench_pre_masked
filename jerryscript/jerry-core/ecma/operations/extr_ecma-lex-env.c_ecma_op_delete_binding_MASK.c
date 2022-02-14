
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_string_t ;
typedef int ecma_property_t ;
typedef int ecma_object_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,int) ;

ecma_value_t
FUNC_10 (ecma_object_t *VAR_5,
                        ecma_string_t *VAR_6)
{
  FUNC_2 (VAR_5 != ((void*)0)
                && FUNC_7 (VAR_5));
  FUNC_2 (VAR_6 != ((void*)0));


  if (FUNC_6 (VAR_5) == VAR_0)
  {
    ecma_property_t *VAR_7 = FUNC_4 (VAR_5, VAR_6);
    ecma_value_t VAR_8;

    if (VAR_7 == ((void*)0))
    {
      VAR_8 = VAR_4;
    }
    else
    {
      FUNC_2 (FUNC_0 (*VAR_7) == VAR_2);

      if (!FUNC_8 (*VAR_7))
      {
        VAR_8 = VAR_3;
      }
      else
      {
        FUNC_3 (VAR_5, FUNC_1 (VAR_7));

        VAR_8 = VAR_4;
      }
    }

    return VAR_8;
  }
  else
  {
    FUNC_2 (FUNC_6 (VAR_5) == VAR_1);

    ecma_object_t *VAR_9 = FUNC_5 (VAR_5);

    return FUNC_9 (VAR_9, VAR_6, 0);
  }
}
