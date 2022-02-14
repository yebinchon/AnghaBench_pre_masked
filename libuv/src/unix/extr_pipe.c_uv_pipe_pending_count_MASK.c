
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int accepted_fd; TYPE_2__* queued_fds; int ipc; } ;
typedef TYPE_1__ uv_pipe_t ;
struct TYPE_5__ {int offset; } ;
typedef TYPE_2__ uv__stream_queued_fds_t ;



int FUNC_0(uv_pipe_t* VAR_0) {
  uv__stream_queued_fds_t* VAR_1;

  if (!VAR_0->ipc)
    return 0;

  if (VAR_0->accepted_fd == -1)
    return 0;

  if (VAR_0->queued_fds == ((void*)0))
    return 1;

  VAR_1 = VAR_0->queued_fds;
  return VAR_1->offset + 1;
}
