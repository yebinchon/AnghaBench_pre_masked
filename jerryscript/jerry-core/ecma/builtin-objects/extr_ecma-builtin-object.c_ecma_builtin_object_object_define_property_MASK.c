
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ecma_value_t ;
typedef int ecma_string_t ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ ecma_property_descriptor_t ;
typedef int ecma_object_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int *) ;

ecma_value_t
FUNC_7 (ecma_object_t *VAR_1,
                                            ecma_string_t *VAR_2,
                                            ecma_value_t VAR_3)
{
  ecma_property_descriptor_t VAR_4;

  ecma_value_t VAR_5 = FUNC_5 (VAR_3, &VAR_4);

  if (FUNC_0 (VAR_5))
  {
    return VAR_5;
  }

  VAR_4.flags |= VAR_0;

  ecma_value_t VAR_6 = FUNC_4 (VAR_1,
                                                                         VAR_2,
                                                                         &VAR_4);

  FUNC_1 (&VAR_4);
  FUNC_2 (VAR_5);

  if (FUNC_0 (VAR_6))
  {
    return VAR_6;
  }

  FUNC_6 (VAR_1);
  FUNC_2 (VAR_6);

  return FUNC_3 (VAR_1);
}
