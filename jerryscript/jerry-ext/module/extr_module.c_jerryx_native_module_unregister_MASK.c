
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next_p; } ;
typedef TYPE_1__ jerryx_native_module_t ;


 TYPE_1__* VAR_0 ;

void FUNC_0 (jerryx_native_module_t *VAR_1)
{
  jerryx_native_module_t *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);

  for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_2 = VAR_3, VAR_3 = VAR_3->next_p)
  {
    if (VAR_3 == VAR_1)
    {
      if (VAR_2)
      {
        VAR_2->next_p = VAR_1->next_p;
      }
      else
      {
        VAR_0 = VAR_1->next_p;
      }
      VAR_1->next_p = ((void*)0);
    }
  }
}
