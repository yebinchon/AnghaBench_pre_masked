
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ data; } ;
typedef TYPE_1__ uv_poll_t ;
typedef scalar_t__ uv_os_sock_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_8__ {scalar_t__ connections; int sock; } ;
typedef TYPE_2__ server_context_t ;
struct TYPE_9__ {int events; int poll_handle; } ;
typedef TYPE_3__ connection_context_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,struct sockaddr*,int*) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 TYPE_3__* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int,int ) ;

__attribute__((used)) static void FUNC_6(uv_poll_t* VAR_6, int VAR_7, int VAR_8) {
  server_context_t* VAR_9 = (server_context_t*)
                                          VAR_6->data;
  connection_context_t* VAR_10;
  struct sockaddr_in VAR_11;
  socklen_t VAR_12;
  uv_os_sock_t VAR_13;
  int VAR_14;

  VAR_12 = sizeof VAR_11;
  VAR_13 = FUNC_1(VAR_9->sock, (struct sockaddr*) &VAR_11, &VAR_12);



  FUNC_0(VAR_13 >= 0);


  VAR_10 = FUNC_3(VAR_13, 1);
  VAR_10->events = VAR_3 | VAR_4 | VAR_2;
  VAR_14 = FUNC_5(&VAR_10->poll_handle,
                    VAR_3 | VAR_4 | VAR_2,
                    VAR_5);
  FUNC_0(VAR_14 == 0);

  if (++VAR_9->connections == VAR_1) {
    FUNC_2(VAR_9->sock);
    FUNC_4(VAR_9);
  }
}
