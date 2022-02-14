
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 () ;

__attribute__((used)) static jerry_value_t
FUNC_2 (void *VAR_0)
{
  int *VAR_1 = (int *) VAR_0;

  if (*VAR_1 > 0)
  {
    (*VAR_1)--;

    return FUNC_1 ();
  }

  return FUNC_0 ((const jerry_char_t *) "Abort script");
}
