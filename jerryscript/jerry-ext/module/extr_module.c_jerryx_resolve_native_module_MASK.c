
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* on_resolve_p ) () ;int * name_p; struct TYPE_3__* next_p; } ;
typedef TYPE_1__ jerryx_native_module_t ;
typedef int jerry_value_t ;
typedef scalar_t__ jerry_size_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int const) ;
 int FUNC_2 (int const,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,int const) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,scalar_t__) ;
 int FUNC_6 () ;

__attribute__((used)) static bool
FUNC_7 (const jerry_value_t VAR_5,
                              jerry_value_t *VAR_6)
{
  const jerryx_native_module_t *VAR_7 = ((void*)0);

  jerry_size_t VAR_8 = FUNC_1 (VAR_5);
  FUNC_0 (VAR_2, VAR_3, VAR_8);
  FUNC_2 (VAR_5, VAR_3, VAR_8);


  for (VAR_7 = VAR_1; VAR_7 != ((void*)0); VAR_7 = VAR_7->next_p)
  {
    if (VAR_7->name_p != ((void*)0)
        && FUNC_4 ((char *) VAR_7->name_p) == VAR_8
        && !FUNC_5 ((char *) VAR_7->name_p, (char *) VAR_3, VAR_8))
    {

      (*VAR_6) = ((VAR_7->on_resolve_p) ? VAR_7->on_resolve_p ()
                                            : FUNC_3 (VAR_0,
                                                                          VAR_4,
                                                                          VAR_5));
      return 1;
    }
  }

  return 0;
}
