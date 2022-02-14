
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int jerry_value_t ;
struct TYPE_6__ {int is_value_defined; int is_writable_defined; int is_writable; int is_enumerable_defined; int is_enumerable; int is_configurable_defined; int is_configurable; int is_get_defined; int is_set_defined; int setter; int getter; int value; } ;
typedef TYPE_1__ jerry_property_descriptor_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

int
FUNC_17 (void)
{
  FUNC_1 ();

  FUNC_10 (VAR_0);


  jerry_property_descriptor_t VAR_1;
  FUNC_11 (&VAR_1);
  FUNC_0 (VAR_1.is_value_defined == 0);
  FUNC_0 (FUNC_16 (VAR_1.value));
  FUNC_0 (VAR_1.is_writable_defined == 0);
  FUNC_0 (VAR_1.is_writable == 0);
  FUNC_0 (VAR_1.is_enumerable_defined == 0);
  FUNC_0 (VAR_1.is_enumerable == 0);
  FUNC_0 (VAR_1.is_configurable_defined == 0);
  FUNC_0 (VAR_1.is_configurable == 0);
  FUNC_0 (VAR_1.is_get_defined == 0);
  FUNC_0 (FUNC_16 (VAR_1.getter));
  FUNC_0 (VAR_1.is_set_defined == 0);
  FUNC_0 (FUNC_16 (VAR_1.setter));


  jerry_value_t VAR_2 = FUNC_8 ();
  jerry_value_t VAR_3 = FUNC_4 ((const jerry_char_t *) "my_defined_property");
  VAR_1.is_value_defined = 1;
  VAR_1.value = FUNC_2 (VAR_3);
  jerry_value_t VAR_4 = FUNC_5 (VAR_2, VAR_3, &VAR_1);
  FUNC_0 (!FUNC_14 (VAR_4));
  FUNC_0 (FUNC_13 (VAR_4));
  FUNC_0 (FUNC_7 (VAR_4));
  FUNC_12 (VAR_4);
  FUNC_6 (&VAR_1);


  bool VAR_5 = FUNC_9 (VAR_2, VAR_3, &VAR_1);
  FUNC_0 (VAR_5);
  FUNC_0 (VAR_1.is_value_defined == 1);
  FUNC_0 (FUNC_15 (VAR_1.value));
  FUNC_0 (VAR_1.is_writable == 0);
  FUNC_0 (VAR_1.is_enumerable == 0);
  FUNC_0 (VAR_1.is_configurable == 0);
  FUNC_0 (VAR_1.is_get_defined == 0);
  FUNC_0 (FUNC_16 (VAR_1.getter));
  FUNC_0 (VAR_1.is_set_defined == 0);
  FUNC_0 (FUNC_16 (VAR_1.setter));
  FUNC_12 (VAR_3);
  FUNC_6 (&VAR_1);

  FUNC_12 (VAR_2);
  FUNC_3 ();

  return 0;
}
