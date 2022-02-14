
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ecma_string_t ;
typedef int ecma_standard_error_t ;
struct TYPE_3__ {int value; } ;
typedef TYPE_1__ ecma_property_value_t ;
typedef int ecma_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

ecma_object_t *
FUNC_5 (ecma_standard_error_t VAR_2,
                                      ecma_string_t *VAR_3)
{
  ecma_object_t *VAR_4 = FUNC_3 (VAR_2);

  ecma_property_value_t *VAR_5;
  VAR_5 = FUNC_0 (VAR_4,
                                                  FUNC_1 (VAR_1),
                                                  VAR_0,
                                                  ((void*)0));

  FUNC_4 (VAR_3);
  VAR_5->value = FUNC_2 (VAR_3);

  return VAR_4;
}
