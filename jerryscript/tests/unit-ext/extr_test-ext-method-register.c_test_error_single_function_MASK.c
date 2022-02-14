
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ registered; int result; } ;
typedef TYPE_1__ jerryx_register_result ;
typedef int jerryx_property_entry ;
typedef int jerry_value_t ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,TYPE_1__) ;
 TYPE_1__ FUNC_10 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_11 (void)
{
  FUNC_6 (VAR_0);

  const char *VAR_2 = "test_err";
  jerry_value_t VAR_3 = FUNC_5 ();
  FUNC_3 (VAR_3, VAR_2);

  jerryx_property_entry VAR_4[] =
  {
    FUNC_0 (VAR_2, VAR_1),
    FUNC_1 (),
  };

  jerryx_register_result VAR_5 = FUNC_10 (VAR_3, VAR_4);

  FUNC_2 (VAR_5.registered == 0);
  FUNC_2 (FUNC_8 (VAR_5.result));
  FUNC_9 (VAR_4, VAR_5);
  FUNC_7 (VAR_5.result);

  FUNC_7 (VAR_3);

  FUNC_4 ();
}
