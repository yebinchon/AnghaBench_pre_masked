
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int jerry_value_t ;
typedef size_t jerry_size_t ;
typedef int jerry_char_t ;
typedef int buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ,int *,size_t) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,char const*,size_t) ;
 size_t FUNC_8 (char const*) ;

__attribute__((used)) static void
FUNC_9 (jerry_value_t VAR_0,
         uint32_t VAR_1,
         const char *VAR_2)
{
  jerry_char_t VAR_3[64];

  size_t VAR_4 = FUNC_8 (VAR_2);

  FUNC_0 (VAR_4 < sizeof (VAR_3));

  jerry_value_t VAR_5 = FUNC_1 (VAR_0, VAR_1);

  FUNC_0 (!FUNC_5 (VAR_5)
               && FUNC_6 (VAR_5));

  FUNC_0 (FUNC_2 (VAR_5) == VAR_4);

  jerry_size_t VAR_6 = FUNC_4 (VAR_5, VAR_3, (jerry_size_t) VAR_4);
  FUNC_0 (VAR_6 == VAR_4);

  FUNC_3 (VAR_5);

  FUNC_0 (FUNC_7 (VAR_3, VAR_2, VAR_4) == 0);
}
