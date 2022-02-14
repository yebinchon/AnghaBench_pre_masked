
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; int delayed_error; int io_watcher; int loop; TYPE_2__* connect_req; } ;
typedef TYPE_1__ uv_tcp_t ;
typedef int uv_stream_t ;
struct TYPE_9__ {int queue; int * handle; int cb; } ;
typedef TYPE_2__ uv_connect_t ;
typedef int uv_connect_cb ;
struct sockaddr {int sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct sockaddr const*,unsigned int) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ,TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;

int FUNC_9(uv_connect_t* VAR_11,
                    uv_tcp_t* VAR_12,
                    const struct sockaddr* VAR_13,
                    unsigned int VAR_14,
                    uv_connect_cb VAR_15) {
  int VAR_16;
  int VAR_17;

  FUNC_2(VAR_12->type == VAR_9);

  if (VAR_12->connect_req != ((void*)0))
    return VAR_6;

  VAR_16 = FUNC_4(VAR_12,
                         VAR_13->sa_family,
                         VAR_7 | VAR_8);
  if (VAR_16)
    return VAR_16;

  VAR_12->delayed_error = 0;

  do {
    VAR_10 = 0;
    VAR_17 = FUNC_3(FUNC_8(VAR_12), VAR_13, VAR_14);
  } while (VAR_17 == -1 && VAR_10 == VAR_2);






  if (VAR_17 == -1 && VAR_10 != 0) {
    if (VAR_10 == VAR_1)
      ;
    else if (VAR_10 == VAR_0



      )




      VAR_12->delayed_error = FUNC_1(VAR_0);
    else
      return FUNC_1(VAR_10);
  }

  FUNC_7(VAR_12->loop, VAR_11, VAR_5);
  VAR_11->cb = VAR_15;
  VAR_11->handle = (uv_stream_t*) VAR_12;
  FUNC_0(&VAR_11->queue);
  VAR_12->connect_req = VAR_11;

  FUNC_6(VAR_12->loop, &VAR_12->io_watcher, VAR_4);

  if (VAR_12->delayed_error)
    FUNC_5(VAR_12->loop, &VAR_12->io_watcher);

  return 0;
}
