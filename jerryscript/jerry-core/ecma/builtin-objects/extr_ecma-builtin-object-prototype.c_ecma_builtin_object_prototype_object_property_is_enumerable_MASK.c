
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_string_t ;
typedef scalar_t__ ecma_property_t ;
typedef int ecma_object_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int ) ;

__attribute__((used)) static ecma_value_t
FUNC_3 (ecma_object_t *VAR_4,
                                                             ecma_string_t *VAR_5)
{

  ecma_property_t VAR_6 = FUNC_2 (VAR_4,
                                                              VAR_5,
                                                              ((void*)0),
                                                              VAR_0);


  if (VAR_6 != VAR_1 && VAR_6 != VAR_2)
  {
    return FUNC_1 (FUNC_0 (VAR_6));
  }

  return VAR_3;
}
