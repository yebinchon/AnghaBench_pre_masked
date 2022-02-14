
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_os_sock_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {int events; int poll_handle; } ;
typedef TYPE_1__ connection_context_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct sockaddr*,int) ;
 int VAR_4 ;
 int FUNC_2 (struct sockaddr_in) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,int ,struct sockaddr_in*) ;
 int FUNC_6 (int *,int,int ) ;

__attribute__((used)) static void FUNC_7(void) {
  uv_os_sock_t VAR_5;
  connection_context_t* VAR_6;
  struct sockaddr_in VAR_7;
  struct sockaddr_in VAR_8;
  int VAR_9;

  FUNC_0(0 == FUNC_5("127.0.0.1", VAR_0, &VAR_7));
  FUNC_0(0 == FUNC_5("0.0.0.0", 0, &VAR_8));

  VAR_5 = FUNC_2(VAR_8);
  VAR_6 = FUNC_3(VAR_5, 0);

  VAR_6->events = VAR_2 | VAR_3 | VAR_1;
  VAR_9 = FUNC_6(&VAR_6->poll_handle,
                    VAR_2 | VAR_3 | VAR_1,
                    VAR_4);
  FUNC_0(VAR_9 == 0);

  VAR_9 = FUNC_1(VAR_5, (struct sockaddr*) &VAR_7, sizeof VAR_7);
  FUNC_0(VAR_9 == 0 || FUNC_4());
}
