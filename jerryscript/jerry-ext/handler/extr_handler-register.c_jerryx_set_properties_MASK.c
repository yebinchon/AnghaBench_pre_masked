
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int jerryx_register_result ;
struct TYPE_3__ {int value; int * name; } ;
typedef TYPE_1__ jerryx_property_entry ;
typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int const,int ,int ) ;
 int FUNC_5 (int ) ;

jerryx_register_result
FUNC_6 (const jerry_value_t VAR_0,
                       const jerryx_property_entry VAR_1[])
{

  uint32_t VAR_2 = 0;
  for (; ((VAR_1 + VAR_2) != ((void*)0)) && (VAR_1[VAR_2].name != ((void*)0)); VAR_2++)
  {
    const jerryx_property_entry *VAR_3 = &VAR_1[VAR_2];

    jerry_value_t VAR_4 = FUNC_1 ((const jerry_char_t *) VAR_3->name);
    jerry_value_t VAR_5 = FUNC_4 (VAR_0, VAR_4, VAR_3->value);

    FUNC_3 (VAR_4);





    if (!FUNC_5 (VAR_5))
    {
      return ((jerryx_register_result) { VAR_5, VAR_2 });
    }

    FUNC_3 (VAR_3->value);
    FUNC_3 (VAR_5);
  }

  return ((jerryx_register_result) { FUNC_2 (), VAR_2 });

}
