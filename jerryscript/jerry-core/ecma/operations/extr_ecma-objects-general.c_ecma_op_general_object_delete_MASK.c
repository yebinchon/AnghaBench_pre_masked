
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ecma_value_t ;
typedef int ecma_string_t ;
typedef scalar_t__ ecma_property_t ;
struct TYPE_3__ {int value_p; } ;
typedef TYPE_1__ ecma_property_ref_t ;
typedef int ecma_object_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int *,int *,TYPE_1__*,int ) ;
 int FUNC_8 (int ) ;

ecma_value_t
FUNC_9 (ecma_object_t *VAR_6,
                               ecma_string_t *VAR_7,
                               bool VAR_8)
{
  FUNC_1 (VAR_6 != ((void*)0)
                && !FUNC_5 (VAR_6));
  FUNC_1 (VAR_7 != ((void*)0));


  ecma_property_ref_t VAR_9;

  ecma_property_t VAR_10 = FUNC_7 (VAR_6,
                                                              VAR_7,
                                                              &VAR_9,
                                                              VAR_1);


  if (VAR_10 == VAR_2 || VAR_10 == VAR_3)
  {
    return VAR_5;
  }


  if (FUNC_6 (VAR_10))
  {
    if (FUNC_4 (VAR_6) == VAR_0)
    {
      FUNC_2 (VAR_6, VAR_7, VAR_9.value_p);
    }
    else
    {

      FUNC_3 (VAR_6, VAR_9.value_p);
    }


    return VAR_5;
  }


  if (VAR_8)
  {
    return FUNC_8 (FUNC_0 ("Expected a configurable property."));
  }


  return VAR_4;
}
