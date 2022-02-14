
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {int bytes_per_element; int element_count; int typedarray_type; int * constructor_name; } ;
typedef TYPE_1__ test_entry_t ;
typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10 (test_entry_t VAR_0[])
{
  jerry_value_t VAR_1 = FUNC_5 ();

  for (uint32_t VAR_2 = 0; VAR_0[VAR_2].constructor_name != ((void*)0); VAR_2++)
  {

    {
      jerry_value_t VAR_3 = FUNC_3 ((const jerry_char_t *) VAR_0[VAR_2].constructor_name);
      jerry_value_t VAR_4 = FUNC_6 (VAR_1, VAR_3);
      FUNC_0 (!FUNC_8 (VAR_4));
      jerry_value_t VAR_5 = FUNC_2 (VAR_0[VAR_2].element_count);

      jerry_value_t VAR_6 = FUNC_1 (VAR_4, &VAR_5, 1);

      FUNC_7 (VAR_3);
      FUNC_7 (VAR_4);
      FUNC_7 (VAR_5);

      FUNC_9 (VAR_6,
                            VAR_0[VAR_2].typedarray_type,
                            VAR_0[VAR_2].element_count,
                            VAR_0[VAR_2].bytes_per_element);
      FUNC_7 (VAR_6);
    }


    {
      jerry_value_t VAR_7 = FUNC_4 (VAR_0[VAR_2].typedarray_type,
                                                          VAR_0[VAR_2].element_count);
      FUNC_9 (VAR_7,
                            VAR_0[VAR_2].typedarray_type,
                            VAR_0[VAR_2].element_count,
                            VAR_0[VAR_2].bytes_per_element);
      FUNC_7 (VAR_7);
    }
  }

  FUNC_7 (VAR_1);
}
