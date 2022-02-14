
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_string_t ;
typedef int ecma_property_descriptor_t ;
typedef int ecma_object_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;

ecma_value_t
FUNC_4 (ecma_object_t *VAR_1,
                                                        ecma_string_t *VAR_2)
{

  ecma_property_descriptor_t VAR_3;

  if (FUNC_3 (VAR_1, VAR_2, &VAR_3))
  {

    ecma_object_t *VAR_4 = FUNC_2 (&VAR_3);

    FUNC_0 (&VAR_3);

    return FUNC_1 (VAR_4);
  }

  return VAR_0;
}
