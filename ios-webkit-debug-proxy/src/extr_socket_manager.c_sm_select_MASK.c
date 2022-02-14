
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* sm_t ;
typedef TYPE_2__* sm_private_t ;
struct TYPE_11__ {int tv_sec; } ;
struct TYPE_10__ {int max_fd; int server_fds; int tmp_fail_fds; int tmp_recv_fds; int tmp_send_fds; TYPE_8__ timeout; int all_fds; int recv_fds; int send_fds; } ;
struct TYPE_9__ {int (* remove_fd ) (TYPE_1__*,int) ;TYPE_2__* private_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int ,int ,int ,TYPE_8__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int VAR_6 ;
 int FUNC_9 (TYPE_1__*,int) ;

int FUNC_10(sm_t VAR_7, int VAR_8) {
  sm_private_t VAR_9 = VAR_7->private_state;

  if (VAR_9->max_fd <= 0) {
    return -1;
  }

  VAR_9->timeout.tv_sec = VAR_8;


  FUNC_3(VAR_9->tmp_send_fds, VAR_9->send_fds, VAR_2);
  FUNC_3(VAR_9->tmp_recv_fds, VAR_9->recv_fds, VAR_2);
  FUNC_3(VAR_9->tmp_fail_fds, VAR_9->all_fds, VAR_2);
  int VAR_10 = FUNC_5(VAR_9->max_fd + 1, VAR_9->tmp_recv_fds,
      VAR_9->tmp_send_fds, VAR_9->tmp_fail_fds, &VAR_9->timeout);


  if (VAR_10 == 0) {
    return 0;
  }
  if (VAR_10 < 0) {
    if (VAR_5 != VAR_1 && VAR_5 != VAR_0) {

      FUNC_4("select failed");
      return -VAR_5;
    }

    return 0;
  }

  int VAR_11 = VAR_10;
  int VAR_12;
  for (VAR_12 = 0; VAR_12 <= VAR_9->max_fd && VAR_11 > 0; VAR_12++) {
    bool VAR_13 = FUNC_0(VAR_12, VAR_9->tmp_send_fds);
    bool VAR_14 = FUNC_0(VAR_12, VAR_9->tmp_recv_fds);
    bool VAR_15 = FUNC_0(VAR_12, VAR_9->tmp_fail_fds);
    if (!VAR_13 && !VAR_14 && !VAR_15) {
      continue;
    }
    VAR_11--;
    if (VAR_15) {
      VAR_7->remove_fd(VAR_7, VAR_12);
    } else if (FUNC_0(VAR_12, VAR_9->server_fds)) {
      FUNC_6(VAR_7, VAR_12);
    } else {
      if (VAR_13) {
        FUNC_8(VAR_7, VAR_12);
      }
      if (VAR_14) {
        FUNC_7(VAR_7, VAR_12);
      }
    }
  }
  return VAR_10;
}
