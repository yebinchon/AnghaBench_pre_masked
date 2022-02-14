
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int test_source ;
typedef int jerry_value_t ;
typedef char jerry_char_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 double FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,char const*,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12 (void)
{
  const jerry_char_t VAR_3[] = "(new Promise(function(rs, rj) { rs(30); })).then(function(v) { return v + 1; })";

  jerry_value_t VAR_4 = FUNC_4 (((void*)0),
                                               0,
                                               VAR_3,
                                               sizeof (VAR_3) - 1,
                                               VAR_0);
  FUNC_0 (!FUNC_8 (VAR_4));

  jerry_value_t VAR_5 = FUNC_6 (VAR_4);
  FUNC_0 (FUNC_10 (VAR_5));

  FUNC_0 (FUNC_3 (VAR_5) == VAR_2);

  jerry_value_t VAR_6 = FUNC_7 ();
  FUNC_0 (FUNC_11 (VAR_6));
  FUNC_5 (VAR_6);

  FUNC_0 (FUNC_3 (VAR_5) == VAR_1);
  jerry_value_t VAR_7 = FUNC_2 (VAR_5);
  FUNC_0 (FUNC_9 (VAR_7));
  FUNC_0 (FUNC_1 (VAR_7) == 31.0);

  FUNC_5 (VAR_7);
  FUNC_5 (VAR_5);
  FUNC_5 (VAR_4);
}
