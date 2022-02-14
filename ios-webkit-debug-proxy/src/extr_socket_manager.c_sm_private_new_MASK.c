
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sm_private {int dummy; } ;
typedef TYPE_2__* sm_private_t ;
typedef int fd_set ;
struct TYPE_6__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_7__ {char* tmp_buf; int max_fd; size_t tmp_buf_length; TYPE_1__ timeout; int * tmp_fail_fds; int * tmp_recv_fds; int * tmp_send_fds; int * recv_fds; int * send_fds; int * server_fds; int * all_fds; void* fd_to_sendq; void* fd_to_value; void* fd_to_ssl; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (size_t,int) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_2__*) ;

sm_private_t FUNC_6(size_t VAR_2) {
  sm_private_t VAR_3 = (sm_private_t)FUNC_3(sizeof(struct sm_private));
  if (!VAR_3) {
    return ((void*)0);
  }
  FUNC_4(VAR_3, 0, sizeof(struct sm_private));
  VAR_3->all_fds = (fd_set *)FUNC_3(VAR_1);
  VAR_3->server_fds = (fd_set *)FUNC_3(VAR_1);
  VAR_3->send_fds = (fd_set *)FUNC_3(VAR_1);
  VAR_3->recv_fds = (fd_set *)FUNC_3(VAR_1);
  VAR_3->tmp_send_fds = (fd_set *)FUNC_3(VAR_1);
  VAR_3->tmp_recv_fds = (fd_set *)FUNC_3(VAR_1);
  VAR_3->tmp_fail_fds = (fd_set *)FUNC_3(VAR_1);
  VAR_3->fd_to_ssl = FUNC_2(VAR_0);
  VAR_3->fd_to_value = FUNC_2(VAR_0);
  VAR_3->fd_to_sendq = FUNC_2(VAR_0);
  VAR_3->tmp_buf = (char *)FUNC_1(VAR_2, sizeof(char *));
  if (!VAR_3->tmp_buf || !VAR_3->all_fds || !VAR_3->server_fds ||
      !VAR_3->send_fds || !VAR_3->recv_fds ||
      !VAR_3->tmp_send_fds || !VAR_3->tmp_recv_fds || !VAR_3->tmp_fail_fds ||
      !VAR_3->fd_to_ssl || !VAR_3->fd_to_value || !VAR_3->fd_to_sendq) {
    FUNC_5(VAR_3);
    return ((void*)0);
  }
  FUNC_0(VAR_3->all_fds);
  FUNC_0(VAR_3->server_fds);
  FUNC_0(VAR_3->send_fds);
  FUNC_0(VAR_3->recv_fds);
  FUNC_0(VAR_3->tmp_send_fds);
  FUNC_0(VAR_3->tmp_recv_fds);
  FUNC_0(VAR_3->tmp_fail_fds);
  VAR_3->max_fd = -1;
  VAR_3->timeout.tv_sec = 5;
  VAR_3->timeout.tv_usec = 0;
  VAR_3->tmp_buf_length = VAR_2;
  return VAR_3;
}
