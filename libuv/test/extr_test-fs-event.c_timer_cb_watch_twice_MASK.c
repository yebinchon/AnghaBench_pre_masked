
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ uv_timer_t ;
typedef int uv_handle_t ;
typedef int uv_fs_event_t ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(uv_timer_t* VAR_0) {
  uv_fs_event_t* VAR_1 = VAR_0->data;
  FUNC_0((uv_handle_t*) (VAR_1 + 0), ((void*)0));
  FUNC_0((uv_handle_t*) (VAR_1 + 1), ((void*)0));
  FUNC_0((uv_handle_t*) VAR_0, ((void*)0));
}
