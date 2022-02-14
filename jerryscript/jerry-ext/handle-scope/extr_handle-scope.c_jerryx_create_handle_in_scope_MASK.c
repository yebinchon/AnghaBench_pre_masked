
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* sibling; void* jval; } ;
typedef TYPE_1__ jerryx_handle_t ;
typedef TYPE_2__* jerryx_handle_scope ;
typedef void* jerry_value_t ;
struct TYPE_6__ {size_t prelist_handle_count; TYPE_1__* handle_ptr; void** handle_prelist; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;

jerry_value_t
FUNC_2 (jerry_value_t VAR_1, jerryx_handle_scope VAR_2)
{
  size_t VAR_3 = VAR_2->prelist_handle_count;
  if (VAR_3 < VAR_0)
  {
    VAR_2->handle_prelist[VAR_3] = VAR_1;

    ++VAR_2->prelist_handle_count;
    return VAR_1;
  }
  jerryx_handle_t *VAR_4 = FUNC_1 (sizeof (jerryx_handle_t));
  FUNC_0 (VAR_4 != ((void*)0));
  VAR_4->jval = VAR_1;

  VAR_4->sibling = VAR_2->handle_ptr;
  VAR_2->handle_ptr = VAR_4;

  return VAR_1;
}
