
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_11__ {int fd; } ;
struct TYPE_9__ {int delayed_error; TYPE_7__ io_watcher; int loop; TYPE_2__* connect_req; } ;
typedef TYPE_1__ uv_pipe_t ;
struct TYPE_10__ {int queue; int cb; int * handle; } ;
typedef TYPE_2__ uv_connect_t ;
typedef int uv_connect_cb ;
struct sockaddr_un {int sun_family; int sun_path; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct sockaddr_un*,int ,int) ;
 int FUNC_4 (int ,TYPE_7__*) ;
 int FUNC_5 (int ,TYPE_7__*,int ) ;
 int FUNC_6 (int ,TYPE_2__*,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int ,char const*,int) ;

void FUNC_11(uv_connect_t* VAR_11,
                    uv_pipe_t* VAR_12,
                    const char* VAR_13,
                    uv_connect_cb VAR_14) {
  struct sockaddr_un VAR_15;
  int VAR_16;
  int VAR_17;
  int VAR_18;

  VAR_16 = (FUNC_8(VAR_12) == -1);

  if (VAR_16) {
    VAR_17 = FUNC_7(VAR_0, VAR_4, 0);
    if (VAR_17 < 0)
      goto out;
    VAR_12->io_watcher.fd = VAR_17;
  }

  FUNC_3(&VAR_15, 0, sizeof VAR_15);
  FUNC_10(VAR_15.sun_path, VAR_13, sizeof(VAR_15.sun_path));
  VAR_15.sun_family = VAR_0;

  do {
    VAR_18 = FUNC_2(FUNC_8(VAR_12),
                (struct sockaddr*)&VAR_15, sizeof VAR_15);
  }
  while (VAR_18 == -1 && VAR_10 == VAR_2);

  if (VAR_18 == -1 && VAR_10 != VAR_1) {
    VAR_17 = FUNC_1(VAR_10);
    goto out;
  }

  VAR_17 = 0;
  if (VAR_16) {
    VAR_17 = FUNC_9((uv_stream_t*)VAR_12,
                          FUNC_8(VAR_12),
                          VAR_8 | VAR_9);
  }

  if (VAR_17 == 0)
    FUNC_5(VAR_12->loop, &VAR_12->io_watcher, VAR_3);

out:
  VAR_12->delayed_error = VAR_17;
  VAR_12->connect_req = VAR_11;

  FUNC_6(VAR_12->loop, VAR_11, VAR_5);
  VAR_11->handle = (uv_stream_t*)VAR_12;
  VAR_11->cb = VAR_14;
  FUNC_0(&VAR_11->queue);


  if (VAR_17)
    FUNC_4(VAR_12->loop, &VAR_12->io_watcher);

}
