
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int ecma_value_t ;
typedef int ecma_string_t ;
struct TYPE_3__ {int value; scalar_t__ flags; } ;
typedef TYPE_1__ ecma_property_descriptor_t ;
typedef int ecma_object_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,TYPE_1__*) ;

ecma_value_t
FUNC_1 (ecma_object_t *VAR_1,
                              ecma_string_t *VAR_2,
                              ecma_value_t VAR_3,
                              uint32_t VAR_4)

{
  ecma_property_descriptor_t VAR_5;

  VAR_5.flags = (uint16_t) (VAR_0 | VAR_4);

  VAR_5.value = VAR_3;

  return FUNC_0 (VAR_1,
                                             VAR_2,
                                             &VAR_5);
}
