
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {int send_num; int max_confirmed; scalar_t__ window_size; int flags; struct tree_udp_msg* sent; int last_ack; scalar_t__ resend_state; } ;
struct tree_udp_msg {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct udp_target* VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct udp_target*) ;
 int FUNC_2 (struct udp_target*) ;
 int FUNC_3 (struct tree_udp_msg*,int ) ;
 int FUNC_4 (struct tree_udp_msg*) ;
 int FUNC_5 (struct tree_udp_msg**,struct tree_udp_msg**,struct tree_udp_msg*,void*) ;
 int VAR_4 ;
 int FUNC_6 (struct udp_target*) ;
 int FUNC_7 (int,char*,int) ;

void FUNC_8 (struct udp_target *VAR_5, int VAR_6) {
  if (VAR_6 >= VAR_5->send_num) {
    return;
  }
  if (VAR_6 > VAR_5->max_confirmed) {
    FUNC_2 (VAR_5);
    VAR_5->max_confirmed = VAR_6;
    FUNC_0 (VAR_6 < VAR_5->send_num);
    if (VAR_6 != VAR_5->send_num - 1) {
      FUNC_1 (VAR_5);
    }
    VAR_5->resend_state = 0;
  }
  VAR_5->last_ack = VAR_3;
  struct tree_udp_msg *VAR_7, *VAR_8;
  FUNC_5 (&VAR_7, &VAR_8, VAR_5->sent, (void *)&VAR_6);
  VAR_5->sent = VAR_8;
  VAR_2 = VAR_5;
  FUNC_3 (VAR_7, VAR_4);
  FUNC_4 (VAR_7);
  FUNC_7 (4, "S->sent: delete messages up to %d\n", VAR_6);
  if (VAR_5->window_size <= VAR_0 && (VAR_5->flags & VAR_1)) {
    FUNC_6 (VAR_5);
  }
}
