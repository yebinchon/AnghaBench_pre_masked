
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ecma_value_t ;
typedef int ecma_string_t ;
struct TYPE_3__ {int value; } ;
typedef TYPE_1__ ecma_property_value_t ;
typedef int ecma_object_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ) ;

ecma_value_t
FUNC_10 (ecma_object_t *VAR_3,
                           ecma_string_t *VAR_4,
                           bool VAR_5)
{
  FUNC_1 (VAR_3 != ((void*)0)
                && FUNC_6 (VAR_3));
  FUNC_1 (VAR_4 != ((void*)0));

  if (FUNC_4 (VAR_3) == VAR_0)
  {
    ecma_property_value_t *VAR_6 = FUNC_5 (VAR_3, VAR_4);

    return FUNC_2 (VAR_6->value);
  }
  else
  {
    FUNC_1 (FUNC_4 (VAR_3) == VAR_1);

    ecma_object_t *VAR_7 = FUNC_3 (VAR_3);

    ecma_value_t VAR_8 = FUNC_8 (VAR_7, VAR_4);

    if (!FUNC_7 (VAR_8))
    {
      if (VAR_5)
      {
        VAR_8 = FUNC_9 (FUNC_0 ("Binding does not exist or is uninitialised."));
      }
      else
      {
        VAR_8 = VAR_2;
      }
    }

    return VAR_8;
  }
}
