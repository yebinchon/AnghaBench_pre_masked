
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_size_t ;
typedef scalar_t__ jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (jerry_value_t VAR_1)
{
  FUNC_0 (!FUNC_5 (VAR_1));

  jerry_value_t VAR_2 = FUNC_6 (VAR_1);

  if (FUNC_5 (VAR_2))
  {

    FUNC_2 (VAR_0, "Snapshot error: [value cannot be converted to string]\n");
    FUNC_3 (VAR_2);
    return;
  }

  jerry_size_t VAR_3 = FUNC_1 (VAR_2);

  if (VAR_3 >= 256)
  {
    FUNC_2 (VAR_0, "Snapshot error: [value cannot be converted to string]\n");
    FUNC_3 (VAR_2);
    return;
  }

  jerry_char_t VAR_4[256];
  jerry_size_t VAR_5 = FUNC_4 (VAR_2, VAR_4, VAR_3);
  FUNC_0 (VAR_5 == VAR_3);
  VAR_4[VAR_5] = 0;

  FUNC_2 (VAR_0, "Snapshot error: %s\n", (char *) VAR_4);
  FUNC_3 (VAR_2);
}
