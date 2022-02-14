
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* signal_pipefd; int signal_io_watcher; } ;
typedef TYPE_1__ uv_loop_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(uv_loop_t* VAR_1) {
  FUNC_1(VAR_1, &VAR_1->signal_io_watcher, VAR_0);
  FUNC_0(VAR_1->signal_pipefd[0]);
  FUNC_0(VAR_1->signal_pipefd[1]);
  VAR_1->signal_pipefd[0] = -1;
  VAR_1->signal_pipefd[1] = -1;
  return FUNC_2(VAR_1);
}
