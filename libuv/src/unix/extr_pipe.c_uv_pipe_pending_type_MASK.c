
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int accepted_fd; int ipc; } ;
typedef TYPE_1__ uv_pipe_t ;
typedef int uv_handle_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;

uv_handle_type FUNC_1(uv_pipe_t* VAR_1) {
  if (!VAR_1->ipc)
    return VAR_0;

  if (VAR_1->accepted_fd == -1)
    return VAR_0;
  else
    return FUNC_0(VAR_1->accepted_fd);
}
