
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {TYPE_3__ exit_req; scalar_t__ exit_cb_pending; int * child_stdio_buffer; void* process_handle; void* wait_handle; scalar_t__ exit_signal; scalar_t__ pid; int * exit_cb; } ;
typedef TYPE_1__ uv_process_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_2(uv_loop_t* VAR_3, uv_process_t* VAR_4) {
  FUNC_1(VAR_3, (uv_handle_t*) VAR_4, VAR_1);
  VAR_4->exit_cb = ((void*)0);
  VAR_4->pid = 0;
  VAR_4->exit_signal = 0;
  VAR_4->wait_handle = VAR_0;
  VAR_4->process_handle = VAR_0;
  VAR_4->child_stdio_buffer = ((void*)0);
  VAR_4->exit_cb_pending = 0;

  FUNC_0(&VAR_4->exit_req, VAR_2);
  VAR_4->exit_req.data = VAR_4;
}
