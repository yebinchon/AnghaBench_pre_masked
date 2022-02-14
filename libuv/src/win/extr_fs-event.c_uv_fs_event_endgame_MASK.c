
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_4__ {int flags; int * buffer; int req_pending; } ;
typedef TYPE_1__ uv_fs_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(uv_loop_t* VAR_2, uv_fs_event_t* VAR_3) {
  if ((VAR_3->flags & VAR_1) && !VAR_3->req_pending) {
    FUNC_0(!(VAR_3->flags & VAR_0));

    if (VAR_3->buffer) {
      FUNC_1(VAR_3->buffer);
      VAR_3->buffer = ((void*)0);
    }

    FUNC_2(VAR_3);
  }
}
