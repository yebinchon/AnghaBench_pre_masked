
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ jval; struct TYPE_7__* sibling; } ;
typedef TYPE_1__ jerryx_handle_t ;
typedef int jerryx_handle_scope_status ;
typedef int * jerryx_handle_scope ;
typedef TYPE_2__* jerryx_escapable_handle_scope ;
typedef scalar_t__ jerry_value_t ;
struct TYPE_8__ {int escaped; size_t prelist_handle_count; scalar_t__* handle_prelist; TYPE_1__* handle_ptr; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;

jerryx_handle_scope_status
FUNC_4 (jerryx_escapable_handle_scope VAR_4,
                               jerry_value_t VAR_5,
                               jerry_value_t *VAR_6,
                               bool VAR_7)
{
  if (VAR_4->escaped)
  {
    return VAR_1;
  }

  jerryx_handle_scope VAR_8 = FUNC_3 (VAR_4);
  if (VAR_8 == ((void*)0))
  {
    return VAR_2;
  }

  bool VAR_9 = 0;
  {
    size_t VAR_10 = 0;
    size_t VAR_11 = VAR_4->prelist_handle_count;




    for (size_t VAR_12 = VAR_11; VAR_12 > 0; --VAR_12)
    {
      if (VAR_5 == VAR_4->handle_prelist[VAR_12 - 1])
      {
        VAR_9 = 1;
        VAR_10 = VAR_12 - 1;
        break;
      }
    }

    if (VAR_9)
    {
      *VAR_6 = FUNC_1 (VAR_4, VAR_10);

      --VAR_4->prelist_handle_count;
      if (VAR_7)
      {
        VAR_4->escaped = 1;



        FUNC_0 (*VAR_6, FUNC_3 (VAR_4));
      }
      return VAR_3;
    }
  };

  if (VAR_4->prelist_handle_count <= VAR_0 && VAR_4->handle_ptr == ((void*)0))
  {
    return VAR_2;
  }





  jerryx_handle_t *VAR_13 = VAR_4->handle_ptr;
  jerryx_handle_t *VAR_14 = ((void*)0);
  jerryx_handle_t *VAR_15 = ((void*)0);
  while (!VAR_9)
  {
    if (VAR_13 == ((void*)0))
    {
      return VAR_2;
    }
    if (VAR_13->jval != VAR_5)
    {
      VAR_14 = VAR_13;
      VAR_13 = VAR_13->sibling;
      continue;
    }



    VAR_9 = 1;
    VAR_15 = VAR_13;
    if (VAR_14 == ((void*)0))
    {

      VAR_4->handle_ptr = VAR_15->sibling;
    }
    else
    {
      VAR_14->sibling = VAR_15->sibling;
    }
  }

  if (VAR_7)
  {



    *VAR_6 = FUNC_2 (VAR_15, VAR_8);
  }

  if (VAR_7)
  {
    VAR_4->escaped = 1;
  }
  return VAR_3;
}
