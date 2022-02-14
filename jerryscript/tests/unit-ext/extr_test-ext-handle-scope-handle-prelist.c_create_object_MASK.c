
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* jerryx_escapable_handle_scope ;
typedef int jerry_value_t ;
struct TYPE_5__ {scalar_t__ prelist_handle_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (TYPE_1__**) ;
 int VAR_2 ;

__attribute__((used)) static jerry_value_t
FUNC_7 (void)
{
  jerryx_escapable_handle_scope VAR_3;
  FUNC_6 (&VAR_3);

  jerry_value_t VAR_4;
  for (size_t VAR_5 = 0; VAR_5 < VAR_1; VAR_5 ++)
  {
    VAR_4 = FUNC_4 (FUNC_1 ());
    FUNC_2 (VAR_4, ((void*)0), &VAR_2);
  }


  jerry_value_t VAR_6 = 0;
  FUNC_5 (VAR_3, VAR_4, &VAR_6);
  FUNC_0 (VAR_3->prelist_handle_count == VAR_0);

  FUNC_3 (VAR_3);
  return VAR_6;
}
