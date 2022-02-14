
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int jval; struct TYPE_5__* sibling; } ;
typedef TYPE_1__ jerryx_handle_t ;
typedef TYPE_2__* jerryx_handle_scope ;
typedef int jerry_value_t ;
struct TYPE_6__ {int prelist_handle_count; int * handle_prelist; TYPE_1__* handle_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

jerry_value_t
FUNC_1 (jerryx_handle_scope VAR_1, size_t VAR_2)
{
  jerry_value_t VAR_3 = VAR_1->handle_prelist[VAR_2];
  if (VAR_1->prelist_handle_count == VAR_0 && VAR_1->handle_ptr != ((void*)0))
  {
    jerryx_handle_t *VAR_4 = VAR_1->handle_ptr;
    VAR_1->handle_ptr = VAR_4->sibling;
    VAR_1->handle_prelist[VAR_2] = VAR_4->jval;
    FUNC_0 (VAR_4);
    return VAR_3;
  }

  if (VAR_2 < VAR_0 - 1)
  {
    VAR_1->handle_prelist[VAR_2] = VAR_1->handle_prelist[VAR_1->prelist_handle_count - 1];
  }
  return VAR_3;
}
