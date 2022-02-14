
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ lit_utf8_size_t ;
typedef int ecma_value_t ;
typedef int ecma_string_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int *) ;

ecma_value_t
FUNC_4 (ecma_string_t *VAR_3,
              uint32_t VAR_4)
{
  ecma_value_t VAR_5;

  lit_utf8_size_t VAR_6 = FUNC_3 (VAR_3);
  if (VAR_6 == 0)
  {
    VAR_5 = VAR_0;
  }
  else
  {
    FUNC_1 (VAR_3, VAR_1, VAR_2);

    VAR_5 = FUNC_2 (VAR_1,
                                           VAR_6,
                                           VAR_4);

    FUNC_0 (VAR_1, VAR_2);
  }

  return VAR_5;
}
