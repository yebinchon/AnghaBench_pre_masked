
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dest; scalar_t__ extra_info; } ;
typedef TYPE_1__ jerryx_arg_t ;
typedef int jerryx_arg_js_iterator_t ;
typedef int jerry_value_t ;
typedef int jerry_object_native_info_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,void**,int const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

jerry_value_t
FUNC_5 (jerryx_arg_js_iterator_t *VAR_1,
                                     const jerryx_arg_t *VAR_2)
{
  jerry_value_t VAR_3 = FUNC_4 (VAR_1);

  if (!FUNC_3 (VAR_3))
  {
    return FUNC_0 (VAR_0,
                               (jerry_char_t *) "It is not an object.");
  }

  const jerry_object_native_info_t *VAR_4;
  VAR_4 = (const jerry_object_native_info_t *) VAR_2->extra_info;
  void **VAR_5 = (void **) VAR_2->dest;
  bool VAR_6 = FUNC_2 (VAR_3, VAR_5, VAR_4);

  if (!VAR_6)
  {
    return FUNC_0 (VAR_0,
                               (jerry_char_t *) "The object has no native pointer or type does not match.");
  }

  return FUNC_1 ();
}
