
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jerryx_handle_scope_t ;
struct TYPE_6__ {struct TYPE_6__* child; TYPE_1__* parent; } ;
typedef TYPE_2__ jerryx_handle_scope_dynamic_t ;
struct TYPE_7__ {TYPE_2__* start; int count; } ;
struct TYPE_5__ {TYPE_2__* child; } ;


 int FUNC_0 (TYPE_2__*) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;

void
FUNC_3 (jerryx_handle_scope_t *VAR_3)
{
  if (VAR_3 == &VAR_2)
  {
    return;
  }

  --VAR_1.count;
  if (VAR_3 == VAR_0)
  {
    VAR_0 = FUNC_1 (VAR_3);
  }

  if (!FUNC_2 (VAR_3))
  {
    jerryx_handle_scope_dynamic_t *VAR_4 = (jerryx_handle_scope_dynamic_t *) VAR_3;
    if (VAR_4 == VAR_1.start)
    {
      VAR_1.start = VAR_4->child;
    }
    else if (VAR_4->parent != ((void*)0))
    {
      VAR_4->parent->child = VAR_4->child;
    }
    FUNC_0 (VAR_4);
    return;
  }



}
