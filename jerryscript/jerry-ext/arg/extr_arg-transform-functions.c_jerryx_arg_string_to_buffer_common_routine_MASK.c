
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int extra_info; scalar_t__ dest; } ;
typedef TYPE_1__ jerryx_arg_t ;
typedef int jerry_value_t ;
typedef size_t jerry_size_t ;
typedef scalar_t__ jerry_length_t ;
typedef char jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (int ,char*,size_t) ;
 size_t FUNC_5 (int ,char*,size_t) ;

__attribute__((used)) static jerry_value_t
FUNC_6 (jerry_value_t VAR_1,
                                            const jerryx_arg_t *VAR_2,
                                            bool VAR_3)
{
  jerry_char_t *VAR_4 = (jerry_char_t *) VAR_2->dest;
  jerry_size_t VAR_5 = (jerry_size_t) VAR_2->extra_info;
  jerry_size_t VAR_6;
  jerry_length_t VAR_7;

  if (!VAR_3)
  {
    VAR_6 = FUNC_4 (VAR_1,
                                        VAR_4,
                                        VAR_5);
    VAR_7 = FUNC_2 (VAR_1);
  }
  else
  {
    VAR_6 = FUNC_5 (VAR_1,
                                             VAR_4,
                                             VAR_5);
    VAR_7 = FUNC_3 (VAR_1);
  }

  if ((VAR_6 == VAR_5) || (VAR_6 == 0 && VAR_7 != 0))
  {
    return FUNC_0 (VAR_0,
                               (jerry_char_t *) "Buffer size is not large enough.");
  }

  VAR_4[VAR_6] = '\0';

  return FUNC_1 ();
}
