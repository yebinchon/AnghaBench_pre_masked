
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int jerryx_handle_scope_t ;
struct TYPE_3__ {struct TYPE_3__* child; } ;
typedef TYPE_1__ jerryx_handle_scope_dynamic_t ;
struct TYPE_4__ {int count; int * prelist; scalar_t__ start; } ;


 int * VAR_0 ;
 long FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

jerryx_handle_scope_t *
FUNC_2 (jerryx_handle_scope_t *VAR_3)
{
  if (VAR_3 == &VAR_2)
  {
    if (VAR_1.count > 0)
    {
      return VAR_1.prelist;
    }
    return ((void*)0);
  }
  if (!FUNC_1 (VAR_3))
  {
    jerryx_handle_scope_dynamic_t *VAR_4 = ((jerryx_handle_scope_dynamic_t *) VAR_3)->child;
    return (jerryx_handle_scope_t *) VAR_4;
  }
  if (VAR_3 == VAR_0)
  {
    return (jerryx_handle_scope_t *) VAR_1.start;
  }
  long VAR_5 = FUNC_0 (VAR_3);
  if (VAR_5 < 0)
  {
    return ((void*)0);
  }
  if ((unsigned long) VAR_5 >= VAR_1.count - 1)
  {
    return ((void*)0);
  }
  return VAR_1.prelist + VAR_5 + 1;
}
