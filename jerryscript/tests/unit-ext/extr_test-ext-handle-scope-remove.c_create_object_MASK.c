
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* jerryx_escapable_handle_scope ;
typedef int jerry_value_t ;
struct TYPE_5__ {scalar_t__ prelist_handle_count; int * handle_ptr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static jerry_value_t
FUNC_7 (void)
{
  jerryx_escapable_handle_scope VAR_1;
  FUNC_5 (&VAR_1);
  jerry_value_t VAR_2 = FUNC_4 (FUNC_1 ());
  FUNC_2 (VAR_2, ((void*)0), &VAR_0);


  jerry_value_t VAR_3 = 0;
  FUNC_6 (VAR_1, VAR_2, &VAR_3);
  FUNC_0 (VAR_1->prelist_handle_count == 0);
  FUNC_0 (VAR_1->handle_ptr == ((void*)0));

  FUNC_3 (VAR_1);
  return VAR_3;
}
