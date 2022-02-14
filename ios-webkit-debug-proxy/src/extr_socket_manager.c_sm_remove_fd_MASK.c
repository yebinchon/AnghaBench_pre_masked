
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* sm_t ;
typedef int sm_status ;
typedef TYPE_2__* sm_sendq_t ;
typedef TYPE_3__* sm_private_t ;
struct TYPE_10__ {int max_fd; int fd_to_sendq; int all_fds; int tmp_fail_fds; int tmp_recv_fds; int tmp_send_fds; int recv_fds; int send_fds; int server_fds; int fd_to_value; int fd_to_ssl; } ;
struct TYPE_9__ {int recv_fd; struct TYPE_9__* next; } ;
struct TYPE_8__ {int (* on_close ) (TYPE_1__*,int,void*,int) ;TYPE_3__* private_state; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__**) ;
 void* FUNC_6 (int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,char*,char*,int) ;
 int FUNC_10 (TYPE_1__*,int,void*,int) ;

sm_status FUNC_11(sm_t VAR_1, int VAR_2) {
  sm_private_t VAR_3 = VAR_1->private_state;
  if (!FUNC_1(VAR_2, VAR_3->all_fds)) {
    return VAR_0;
  }
  FUNC_6(VAR_3->fd_to_ssl, FUNC_2(VAR_2), ((void*)0));
  void *VAR_4 = FUNC_6(VAR_3->fd_to_value, FUNC_2(VAR_2), ((void*)0));
  bool VAR_5 = FUNC_1(VAR_2, VAR_3->server_fds);
  FUNC_9(VAR_1, "ss.remove%s_fd(%d)", (VAR_5 ? "_server" : ""), VAR_2);
  sm_status VAR_6 = VAR_1->on_close(VAR_1, VAR_2, VAR_4, VAR_5);



  FUNC_3(VAR_2);

  FUNC_0(VAR_2, VAR_3->all_fds);
  if (VAR_5) {
    FUNC_0(VAR_2, VAR_3->server_fds);
  }
  FUNC_0(VAR_2, VAR_3->send_fds);
  FUNC_0(VAR_2, VAR_3->recv_fds);
  FUNC_0(VAR_2, VAR_3->tmp_send_fds);
  FUNC_0(VAR_2, VAR_3->tmp_recv_fds);
  FUNC_0(VAR_2, VAR_3->tmp_fail_fds);
  if (VAR_2 == VAR_3->max_fd) {
    while (VAR_3->max_fd >= 0 && !FUNC_1(VAR_3->max_fd, VAR_3->all_fds)) {
      VAR_3->max_fd--;
    }
  }
  if (FUNC_7(VAR_3->fd_to_sendq)) {
    sm_sendq_t *VAR_7 = (sm_sendq_t *)FUNC_8(VAR_3->fd_to_sendq);
    sm_sendq_t *VAR_8;
    for (VAR_8 = VAR_7; *VAR_8; VAR_8++) {
      sm_sendq_t VAR_9 = *VAR_8;
      while (VAR_9) {
        if (VAR_9->recv_fd == VAR_2) {
          VAR_9->recv_fd = 0;

        }
        VAR_9 = VAR_9->next;
      }
    }
    FUNC_5(VAR_7);
  }
  return VAR_6;
}
