
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_loop_t ;
typedef int uv_handle_t ;
struct TYPE_5__ {int req_pending; } ;
typedef TYPE_1__ uv_fs_event_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(uv_loop_t* VAR_0, uv_fs_event_t* VAR_1) {
  FUNC_1(VAR_1);

  FUNC_0(VAR_1);

  if (!VAR_1->req_pending) {
    FUNC_2(VAR_0, (uv_handle_t*)VAR_1);
  }

}
