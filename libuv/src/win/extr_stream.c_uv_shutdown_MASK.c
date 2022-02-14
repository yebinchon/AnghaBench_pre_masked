
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* shutdown_req; } ;
struct TYPE_12__ {TYPE_1__ conn; } ;
struct TYPE_13__ {int flags; int reqs_pending; TYPE_2__ stream; int * loop; } ;
typedef TYPE_3__ uv_stream_t ;
struct TYPE_14__ {int cb; TYPE_3__* handle; } ;
typedef TYPE_4__ uv_shutdown_t ;
typedef int uv_shutdown_cb ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int *,TYPE_3__*,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(uv_shutdown_t* VAR_4, uv_stream_t* VAR_5, uv_shutdown_cb VAR_6) {
  uv_loop_t* VAR_7 = VAR_5->loop;

  if (!(VAR_5->flags & VAR_2) ||
      VAR_5->flags & VAR_1 ||
      FUNC_2(VAR_5)) {
    return VAR_0;
  }

  FUNC_1(VAR_4, VAR_3);
  VAR_4->handle = VAR_5;
  VAR_4->cb = VAR_6;

  VAR_5->flags &= ~VAR_2;
  VAR_5->flags |= VAR_1;
  VAR_5->stream.conn.shutdown_req = VAR_4;
  VAR_5->reqs_pending++;
  FUNC_0(VAR_7, VAR_5, VAR_4);

  FUNC_3(VAR_7, (uv_handle_t*)VAR_5);

  return 0;
}
