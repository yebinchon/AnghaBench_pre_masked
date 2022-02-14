
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_os_sock_t ;
struct sockaddr_in {int dummy; } ;
struct TYPE_3__ {int poll_handle; } ;
typedef TYPE_1__ server_context_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sockaddr_in) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*,int ,struct sockaddr_in*) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_6(void) {
  server_context_t* VAR_3;
  struct sockaddr_in VAR_4;
  uv_os_sock_t VAR_5;
  int VAR_6;

  FUNC_0(0 == FUNC_4("127.0.0.1", VAR_0, &VAR_4));
  VAR_5 = FUNC_1(VAR_4);
  VAR_3 = FUNC_2(VAR_5);

  VAR_6 = FUNC_3(VAR_5, 100);
  FUNC_0(VAR_6 == 0);

  VAR_6 = FUNC_5(&VAR_3->poll_handle, VAR_1, VAR_2);
  FUNC_0(VAR_6 == 0);
}
