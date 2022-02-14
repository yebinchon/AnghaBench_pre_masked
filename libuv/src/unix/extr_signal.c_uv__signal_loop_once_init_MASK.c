
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* signal_pipefd; int signal_io_watcher; } ;
typedef TYPE_1__ uv_loop_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (int*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(uv_loop_t* VAR_3) {
  int VAR_4;


  if (VAR_3->signal_pipefd[0] != -1)
    return 0;

  VAR_4 = FUNC_2(VAR_3->signal_pipefd, VAR_1);
  if (VAR_4)
    return VAR_4;

  FUNC_0(&VAR_3->signal_io_watcher,
              VAR_2,
              VAR_3->signal_pipefd[0]);
  FUNC_1(VAR_3, &VAR_3->signal_io_watcher, VAR_0);

  return 0;
}
