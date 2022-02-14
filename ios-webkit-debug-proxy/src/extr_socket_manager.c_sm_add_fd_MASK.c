
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sm_t ;
typedef int sm_status ;
typedef TYPE_2__* sm_private_t ;
struct TYPE_6__ {int max_fd; int server_fds; int tmp_fail_fds; int tmp_recv_fds; int tmp_send_fds; int recv_fds; int send_fds; int all_fds; int fd_to_ssl; int fd_to_value; } ;
struct TYPE_5__ {TYPE_2__* private_state; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int ,void*) ;
 int FUNC_5 (TYPE_1__*,char*,char*,int) ;

sm_status FUNC_6(sm_t VAR_2, int VAR_3, void *VAR_4, void *VAR_5,
    bool VAR_6) {
  sm_private_t VAR_7 = VAR_2->private_state;
  if (FUNC_1(VAR_3, VAR_7->all_fds)) {
    return VAR_0;
  }
  if (FUNC_4(VAR_7->fd_to_value, FUNC_3(VAR_3), VAR_5)) {

    return VAR_0;
  }
  if (VAR_4 != ((void*)0) && FUNC_4(VAR_7->fd_to_ssl, FUNC_3(VAR_3), VAR_4)) {
    return VAR_0;
  }

  FUNC_5(VAR_2, "ss.add%s_fd(%d)", (VAR_6 ? "_server" : ""), VAR_3);
  FUNC_2(VAR_3, VAR_7->all_fds);
  FUNC_0(VAR_3, VAR_7->send_fds);
  FUNC_2(VAR_3, VAR_7->recv_fds);
  FUNC_0(VAR_3, VAR_7->tmp_send_fds);
  FUNC_0(VAR_3, VAR_7->tmp_recv_fds);
  FUNC_0(VAR_3, VAR_7->tmp_fail_fds);
  if (VAR_6) {
    FUNC_2(VAR_3, VAR_7->server_fds);
  }
  if (VAR_3 > VAR_7->max_fd) {
    VAR_7->max_fd = VAR_3;
  }
  return VAR_1;
}
