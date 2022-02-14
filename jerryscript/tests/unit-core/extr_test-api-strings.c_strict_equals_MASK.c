
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef char jerry_char_t ;
typedef int is_equal_src ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 (char const*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool
FUNC_8 (jerry_value_t VAR_1,
               jerry_value_t VAR_2)
{
  const jerry_char_t VAR_3[] = "var isEqual = function(a, b) { return (a === b); }; isEqual";
  jerry_value_t VAR_4 = FUNC_3 (VAR_3, sizeof (VAR_3) - 1, VAR_0);
  FUNC_0 (!FUNC_7 (VAR_4));
  jerry_value_t VAR_5[2] = {VAR_1, VAR_2};
  jerry_value_t VAR_6 = FUNC_1 (VAR_4, FUNC_2 (), VAR_5, 2);
  FUNC_0 (!FUNC_7 (VAR_6));
  FUNC_0 (FUNC_6 (VAR_6));
  bool VAR_7 = FUNC_4 (VAR_6);
  FUNC_5 (VAR_6);
  FUNC_5 (VAR_4);
  return VAR_7;
}
