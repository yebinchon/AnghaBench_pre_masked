
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int escaped; int * handle_ptr; scalar_t__ prelist_handle_count; } ;
typedef TYPE_1__ jerryx_handle_scope_t ;
struct TYPE_8__ {struct TYPE_8__* parent; struct TYPE_8__* child; } ;
typedef TYPE_2__ jerryx_handle_scope_dynamic_t ;
struct TYPE_9__ {scalar_t__ count; TYPE_2__* start; TYPE_1__* prelist; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_2__* FUNC_1 (int) ;

jerryx_handle_scope_t *
FUNC_2 (void)
{
  jerryx_handle_scope_t *VAR_3;
  if (VAR_2.count < VAR_0)
  {
    VAR_3 = VAR_2.prelist + VAR_2.count;
  }
  else
  {
    jerryx_handle_scope_dynamic_t *VAR_4 = FUNC_1 (sizeof (jerryx_handle_scope_dynamic_t));
    FUNC_0 (VAR_4 != ((void*)0));
    VAR_4->child = ((void*)0);

    if (VAR_2.count != VAR_0)
    {
      jerryx_handle_scope_dynamic_t *VAR_5 = (jerryx_handle_scope_dynamic_t *) VAR_1;
      VAR_4->parent = VAR_5;
      VAR_5->child = VAR_4;
    }
    else
    {
      VAR_2.start = VAR_4;
      VAR_4->parent = ((void*)0);
    }

    VAR_3 = (jerryx_handle_scope_t *) VAR_4;
  }

  VAR_3->prelist_handle_count = 0;
  VAR_3->escaped = 0;
  VAR_3->handle_ptr = ((void*)0);

  VAR_1 = VAR_3;
  ++VAR_2.count;
  return (jerryx_handle_scope_t *) VAR_3;
}
