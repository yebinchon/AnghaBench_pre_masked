
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_3__ {int ipc; int * pipe_fname; int * connect_req; int * shutdown_req; } ;
typedef TYPE_1__ uv_pipe_t ;
typedef int uv_loop_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;

int FUNC_1(uv_loop_t* VAR_1, uv_pipe_t* VAR_2, int VAR_3) {
  FUNC_0(VAR_1, (uv_stream_t*)VAR_2, VAR_0);
  VAR_2->shutdown_req = ((void*)0);
  VAR_2->connect_req = ((void*)0);
  VAR_2->pipe_fname = ((void*)0);
  VAR_2->ipc = VAR_3;
  return 0;
}
