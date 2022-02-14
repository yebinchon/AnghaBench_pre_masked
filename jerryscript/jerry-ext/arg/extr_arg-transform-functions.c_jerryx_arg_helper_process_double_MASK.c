
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ clamp; scalar_t__ round; } ;
typedef TYPE_1__ jerryx_arg_int_option_t ;
typedef int jerry_value_t ;
typedef int jerry_char_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;

__attribute__((used)) static jerry_value_t
FUNC_5 (double *VAR_4,
                                  double VAR_5,
                                  double VAR_6,
                                  jerryx_arg_int_option_t VAR_7)
{
  if (FUNC_2 (*VAR_4))
  {
    return FUNC_3 (VAR_3,
                               (jerry_char_t *) "The number is NaN.");
  }

  if (VAR_7.clamp == VAR_1)
  {
    if (*VAR_4 > VAR_6 || *VAR_4 < VAR_5)
    {
      return FUNC_3 (VAR_3,
                                 (jerry_char_t *) "The number is out of range.");
    }
  }
  else
  {
    *VAR_4 = *VAR_4 < VAR_5 ? VAR_5 : *VAR_4;
    *VAR_4 = *VAR_4 > VAR_6 ? VAR_6 : *VAR_4;
  }

  if (VAR_7.round == VAR_2)
  {
    *VAR_4 = (*VAR_4 >= 0.0) ? FUNC_1 (*VAR_4 + 0.5) : FUNC_0 (*VAR_4 - 0.5);
  }
  else if (VAR_7.round == VAR_0)
  {
    *VAR_4 = FUNC_1 (*VAR_4);
  }
  else
  {
    *VAR_4 = FUNC_0 (*VAR_4);
  }

  return FUNC_4 ();
}
