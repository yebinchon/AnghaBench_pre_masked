
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ jerryx_handle_scope_status ;
typedef TYPE_1__* jerryx_escapable_handle_scope ;
typedef int jerry_value_t ;
struct TYPE_6__ {scalar_t__ prelist_handle_count; int * handle_ptr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int *) ;
 TYPE_1__* FUNC_6 () ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (TYPE_1__**) ;
 int VAR_1 ;

__attribute__((used)) static jerry_value_t
FUNC_8 (int VAR_2)
{
  jerryx_escapable_handle_scope VAR_3;
  FUNC_7 (&VAR_3);

  jerry_value_t VAR_4;
  if (VAR_2 == 0)
  {
    VAR_4 = FUNC_4 (FUNC_1 ());
    FUNC_2 (VAR_4, ((void*)0), &VAR_1);
  }
  else
  {
    VAR_4 = FUNC_8 (VAR_2 - 1);
  }
  FUNC_0 (FUNC_6 () == VAR_3);


  jerry_value_t VAR_5 = 0;
  jerryx_handle_scope_status VAR_6 = FUNC_5 (VAR_3, VAR_4, &VAR_5);
  FUNC_0 (VAR_6 == VAR_0);
  FUNC_0 (VAR_3->prelist_handle_count == 0);
  FUNC_0 (VAR_3->handle_ptr == ((void*)0));

  FUNC_3 (VAR_3);
  return VAR_5;
}
