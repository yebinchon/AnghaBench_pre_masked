
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int jerry_value_t ;
struct TYPE_5__ {int is_configurable_defined; int is_configurable; } ;
typedef TYPE_1__ jerry_property_descriptor_t ;
typedef int jerry_char_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (jerry_value_t VAR_0,
                 const char *VAR_1)
{

  jerry_property_descriptor_t VAR_2;
  FUNC_4 (&VAR_2);
  VAR_2.is_configurable_defined = 1;
  VAR_2.is_configurable = 0;

  jerry_value_t VAR_3 = FUNC_1 ((const jerry_char_t *) VAR_1);
  jerry_value_t VAR_4 = FUNC_2 (VAR_0, VAR_3, &VAR_2);
  FUNC_0 (FUNC_6 (VAR_4));
  FUNC_5 (VAR_4);
  FUNC_5 (VAR_3);

  FUNC_3 (&VAR_2);
}
