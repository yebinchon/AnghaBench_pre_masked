
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sm_private {int dummy; } ;
typedef TYPE_1__* sm_private_t ;
struct TYPE_5__ {struct TYPE_5__* tmp_buf; int fd_to_sendq; int fd_to_value; int fd_to_ssl; struct TYPE_5__* tmp_fail_fds; struct TYPE_5__* tmp_recv_fds; struct TYPE_5__* tmp_send_fds; struct TYPE_5__* recv_fds; struct TYPE_5__* send_fds; struct TYPE_5__* server_fds; struct TYPE_5__* all_fds; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void FUNC_3(sm_private_t VAR_0) {
  if (VAR_0) {
    FUNC_0(VAR_0->all_fds);
    FUNC_0(VAR_0->server_fds);
    FUNC_0(VAR_0->send_fds);
    FUNC_0(VAR_0->recv_fds);
    FUNC_0(VAR_0->tmp_send_fds);
    FUNC_0(VAR_0->tmp_recv_fds);
    FUNC_0(VAR_0->tmp_fail_fds);
    FUNC_1(VAR_0->fd_to_ssl);
    FUNC_1(VAR_0->fd_to_value);
    FUNC_1(VAR_0->fd_to_sendq);
    FUNC_0(VAR_0->tmp_buf);
    FUNC_2(VAR_0, 0, sizeof(struct sm_private));
    FUNC_0(VAR_0);
  }
}
