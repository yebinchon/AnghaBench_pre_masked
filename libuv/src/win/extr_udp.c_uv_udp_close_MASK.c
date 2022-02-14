
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ reqs_pending; int socket; } ;
typedef TYPE_1__ uv_udp_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(uv_loop_t* VAR_1, uv_udp_t* VAR_2) {
  FUNC_2(VAR_2);
  FUNC_0(VAR_2->socket);
  VAR_2->socket = VAR_0;

  FUNC_1(VAR_2);

  if (VAR_2->reqs_pending == 0) {
    FUNC_3(VAR_1, (uv_handle_t*) VAR_2);
  }
}
