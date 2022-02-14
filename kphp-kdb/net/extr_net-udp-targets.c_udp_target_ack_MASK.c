
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {int send_num; int max_confirmed; scalar_t__ window_size; int flags; int sent; int last_ack; scalar_t__ resend_state; } ;
struct udp_msg {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct udp_target* VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct udp_target*) ;
 int FUNC_2 (struct udp_target*) ;
 int FUNC_3 (int ,struct udp_msg*) ;
 struct udp_msg** FUNC_4 (int ,void*) ;
 int FUNC_5 (struct udp_msg*) ;
 int FUNC_6 (struct udp_target*) ;
 int FUNC_7 (int,char*,int) ;

void FUNC_8 (struct udp_target *VAR_4, int VAR_5) {
  if (VAR_5 >= VAR_4->send_num) {
    return;
  }
  if (VAR_5 > VAR_4->max_confirmed) {
    FUNC_2 (VAR_4);
    VAR_4->max_confirmed = VAR_5;
    FUNC_0 (VAR_5 < VAR_4->send_num);
    if (VAR_5 != VAR_4->send_num - 1) {
      FUNC_1 (VAR_4);
    }
    VAR_4->resend_state = 0;
  }
  VAR_4->last_ack = VAR_3;
  struct udp_msg **VAR_6 = FUNC_4 (VAR_4->sent, (void *)&VAR_5);
  if (!VAR_6) {
    return;
  }
  struct udp_msg *VAR_7 = *VAR_6;
  VAR_4->sent = FUNC_3 (VAR_4->sent, VAR_7);
  FUNC_7 (4, "S->sent: delete message %d\n", VAR_5);
  VAR_2 = VAR_4;
  FUNC_5 (VAR_7);
  if (VAR_4->window_size <= VAR_0 && (VAR_4->flags & VAR_1)) {
    FUNC_6 (VAR_4);
  }
}
