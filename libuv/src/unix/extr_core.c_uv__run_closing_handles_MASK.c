
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* closing_handles; } ;
typedef TYPE_1__ uv_loop_t ;
struct TYPE_6__ {struct TYPE_6__* next_closing; } ;
typedef TYPE_2__ uv_handle_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(uv_loop_t* VAR_0) {
  uv_handle_t* VAR_1;
  uv_handle_t* VAR_2;

  VAR_1 = VAR_0->closing_handles;
  VAR_0->closing_handles = ((void*)0);

  while (VAR_1) {
    VAR_2 = VAR_1->next_closing;
    FUNC_0(VAR_1);
    VAR_1 = VAR_2;
  }
}
