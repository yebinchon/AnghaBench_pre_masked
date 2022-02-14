
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_9 (void)
{
  FUNC_5 (VAR_0);

  const char *VAR_1 = "test_err";
  jerry_value_t VAR_2 = FUNC_4 ();
  FUNC_1 (VAR_2, VAR_1);

  jerry_value_t VAR_3 = FUNC_3 ();
  jerry_value_t VAR_4 = FUNC_8 (VAR_2, VAR_1, VAR_3);
  FUNC_0 (FUNC_7 (VAR_4));

  FUNC_6 (VAR_4);
  FUNC_6 (VAR_3);
  FUNC_6 (VAR_2);

  FUNC_2 ();
}
