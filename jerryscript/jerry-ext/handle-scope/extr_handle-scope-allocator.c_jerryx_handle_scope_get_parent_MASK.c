
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int jerryx_handle_scope_t ;
struct TYPE_3__ {struct TYPE_3__* parent; } ;
typedef TYPE_1__ jerryx_handle_scope_dynamic_t ;
struct TYPE_4__ {int * prelist; TYPE_1__* start; } ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

jerryx_handle_scope_t *
FUNC_2 (jerryx_handle_scope_t *VAR_3)
{
  if (VAR_3 == &VAR_2)
  {
    return ((void*)0);
  }
  if (!FUNC_1 (VAR_3))
  {
    jerryx_handle_scope_dynamic_t *VAR_4 = (jerryx_handle_scope_dynamic_t *) VAR_3;
    if (VAR_4 == VAR_1.start)
    {
      return VAR_0;
    }
    jerryx_handle_scope_dynamic_t *VAR_5 = VAR_4->parent;
    return (jerryx_handle_scope_t *) VAR_5;
  }
  if (VAR_3 == VAR_1.prelist)
  {
    return &VAR_2;
  }
  return VAR_1.prelist + FUNC_0 (VAR_3) - 1;
}
