
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_os_sock_t ;
struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {TYPE_2__ poll_handle; scalar_t__ connections; int sock; } ;
typedef TYPE_1__ server_context_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static server_context_t* FUNC_4(
    uv_os_sock_t VAR_0) {
  int VAR_1;
  server_context_t* VAR_2;

  VAR_2 = (server_context_t*) FUNC_1(sizeof *VAR_2);
  FUNC_0(VAR_2 != ((void*)0));

  VAR_2->sock = VAR_0;
  VAR_2->connections = 0;

  VAR_1 = FUNC_3(FUNC_2(), &VAR_2->poll_handle, VAR_0);
  VAR_2->poll_handle.data = VAR_2;
  FUNC_0(VAR_1 == 0);

  return VAR_2;
}
