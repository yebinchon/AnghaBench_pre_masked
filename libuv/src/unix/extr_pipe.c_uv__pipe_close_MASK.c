
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_3__ {int * pipe_fname; } ;
typedef TYPE_1__ uv_pipe_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;

void FUNC_3(uv_pipe_t* VAR_0) {
  if (VAR_0->pipe_fname) {






    FUNC_0(VAR_0->pipe_fname);
    FUNC_1((void*)VAR_0->pipe_fname);
    VAR_0->pipe_fname = ((void*)0);
  }

  FUNC_2((uv_stream_t*)VAR_0);
}
