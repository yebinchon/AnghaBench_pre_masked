
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef scalar_t__ jerry_length_t ;
typedef int jerry_gc_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const) ;

jerry_value_t
FUNC_3 (const jerry_value_t VAR_2,
                   const jerry_value_t VAR_3,
                   const jerry_value_t VAR_4[],
                   const jerry_length_t VAR_5)
{
  (void) VAR_2;
  (void) VAR_3;

  jerry_gc_mode_t VAR_6 = ((VAR_5 > 0 && FUNC_2 (VAR_4[0])) ? VAR_0
                                                                               : VAR_1);

  FUNC_1 (VAR_6);
  return FUNC_0 ();
}
