
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cb; } ;
struct TYPE_5__ {TYPE_4__ io_watcher; int loop; int connection_cb; } ;
typedef TYPE_1__ uv_pipe_t ;
typedef int uv_connection_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ,TYPE_4__*,int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(uv_pipe_t* VAR_5, int VAR_6, uv_connection_cb VAR_7) {
  if (FUNC_3(VAR_5) == -1)
    return VAR_2;
  if (FUNC_1(FUNC_3(VAR_5), VAR_6))
    return FUNC_0(VAR_3);

  VAR_5->connection_cb = VAR_7;
  VAR_5->io_watcher.cb = VAR_4;
  FUNC_2(VAR_5->loop, &VAR_5->io_watcher, VAR_0);
  return 0;
}
