
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int jval; struct TYPE_6__* sibling; } ;
typedef TYPE_1__ jerryx_handle_t ;
typedef TYPE_2__* jerryx_handle_scope ;
typedef int jerry_value_t ;
struct TYPE_7__ {size_t prelist_handle_count; TYPE_1__* handle_ptr; int * handle_prelist; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

jerry_value_t
FUNC_1 (jerryx_handle_t *VAR_1, jerryx_handle_scope VAR_2)
{
  size_t VAR_3 = VAR_2->prelist_handle_count;
  if (VAR_3 < VAR_0)
  {
    ++VAR_2->prelist_handle_count;
    jerry_value_t VAR_4 = VAR_1->jval;
    FUNC_0 (VAR_1);
    VAR_2->handle_prelist[VAR_3] = VAR_4;
    return VAR_4;
  }

  VAR_1->sibling = VAR_2->handle_ptr;
  VAR_2->handle_ptr = VAR_1;
  return VAR_1->jval;
}
