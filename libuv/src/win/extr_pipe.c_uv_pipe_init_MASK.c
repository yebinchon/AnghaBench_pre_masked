
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_6__ {scalar_t__ payload_remaining; } ;
struct TYPE_7__ {int * non_overlapped_writes_tail; scalar_t__ ipc_xfer_queue_length; int ipc_xfer_queue; TYPE_1__ ipc_data_frame; scalar_t__ ipc_remote_pid; } ;
struct TYPE_8__ {TYPE_2__ conn; } ;
struct TYPE_9__ {int ipc; TYPE_3__ pipe; int * name; int handle; scalar_t__ reqs_pending; } ;
typedef TYPE_4__ uv_pipe_t ;
typedef int uv_loop_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;

int FUNC_2(uv_loop_t* VAR_2, uv_pipe_t* VAR_3, int VAR_4) {
  FUNC_1(VAR_2, (uv_stream_t*)VAR_3, VAR_1);

  VAR_3->reqs_pending = 0;
  VAR_3->handle = VAR_0;
  VAR_3->name = ((void*)0);
  VAR_3->pipe.conn.ipc_remote_pid = 0;
  VAR_3->pipe.conn.ipc_data_frame.payload_remaining = 0;
  FUNC_0(&VAR_3->pipe.conn.ipc_xfer_queue);
  VAR_3->pipe.conn.ipc_xfer_queue_length = 0;
  VAR_3->ipc = VAR_4;
  VAR_3->pipe.conn.non_overlapped_writes_tail = ((void*)0);

  return 0;
}
