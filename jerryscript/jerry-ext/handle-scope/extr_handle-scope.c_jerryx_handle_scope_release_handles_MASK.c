
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* sibling; int jval; } ;
typedef TYPE_1__ jerryx_handle_t ;
typedef TYPE_2__* jerryx_handle_scope ;
struct TYPE_6__ {size_t prelist_handle_count; int * handle_prelist; TYPE_1__* handle_ptr; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (jerryx_handle_scope VAR_1)
{
  size_t VAR_2 = VAR_1->prelist_handle_count;
  if (VAR_2 == VAR_0 && VAR_1->handle_ptr != ((void*)0))
  {
    jerryx_handle_t *VAR_3 = VAR_1->handle_ptr;
    while (VAR_3 != ((void*)0))
    {
      FUNC_1 (VAR_3->jval);
      jerryx_handle_t *VAR_4 = VAR_3->sibling;
      FUNC_0 (VAR_3);
      VAR_3 = VAR_4;
    }
    VAR_1->handle_ptr = ((void*)0);
    VAR_2 = VAR_0;
  }

  for (size_t VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  {
    FUNC_1 (VAR_1->handle_prelist[VAR_5]);
  }
  VAR_1->prelist_handle_count = 0;
}
