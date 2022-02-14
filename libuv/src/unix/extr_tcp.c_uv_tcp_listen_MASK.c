
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cb; int fd; } ;
struct TYPE_5__ {int delayed_error; unsigned long flags; TYPE_3__ io_watcher; int loop; int connection_cb; } ;
typedef TYPE_1__ uv_tcp_t ;
typedef int uv_connection_cb ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*) ;
 int VAR_4 ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,unsigned long) ;
 int FUNC_5 (int ,TYPE_3__*,int ) ;
 int VAR_5 ;

int FUNC_6(uv_tcp_t* VAR_6, int VAR_7, uv_connection_cb VAR_8) {
  static int VAR_9 = -1;
  unsigned long VAR_10;
  int VAR_11;

  if (VAR_6->delayed_error)
    return VAR_6->delayed_error;

  if (VAR_9 == -1) {
    const char* VAR_12 = FUNC_2("UV_TCP_SINGLE_ACCEPT");
    VAR_9 = (VAR_12 != ((void*)0) && FUNC_1(VAR_12) != 0);
  }

  if (VAR_9)
    VAR_6->flags |= VAR_3;

  VAR_10 = 0;







  VAR_11 = FUNC_4(VAR_6, VAR_0, VAR_10);
  if (VAR_11)
    return VAR_11;

  if (FUNC_3(VAR_6->io_watcher.fd, VAR_7))
    return FUNC_0(VAR_4);

  VAR_6->connection_cb = VAR_8;
  VAR_6->flags |= VAR_2;


  VAR_6->io_watcher.cb = VAR_5;
  FUNC_5(VAR_6->loop, &VAR_6->io_watcher, VAR_1);

  return 0;
}
