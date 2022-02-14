
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int jerry_value_t ;
typedef scalar_t__ jerry_typedarray_type_t ;
typedef scalar_t__ jerry_length_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (jerry_value_t VAR_0,
                      jerry_typedarray_type_t VAR_1,
                      jerry_length_t VAR_2,
                      jerry_length_t VAR_3)
{
  FUNC_0 (!FUNC_6 (VAR_0));
  FUNC_0 (FUNC_7 (VAR_0));
  FUNC_0 (FUNC_3 (VAR_0) == VAR_1);
  FUNC_0 (FUNC_2 (VAR_0) == VAR_2);

  jerry_length_t VAR_4 = (uint32_t) -1;
  jerry_length_t VAR_5 = (uint32_t) -1;
  jerry_value_t VAR_6 = FUNC_1 (VAR_0, &VAR_5, &VAR_4);
  FUNC_0 (FUNC_5 (VAR_6));

  FUNC_0 (VAR_4 == VAR_2 * VAR_3);
  FUNC_0 (VAR_5 == 0);

  FUNC_4 (VAR_6);
}
