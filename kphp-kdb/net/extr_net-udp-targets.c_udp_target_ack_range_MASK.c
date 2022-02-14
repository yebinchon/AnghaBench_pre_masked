
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
 struct tree_udp_msg* FUNC_5 (struct tree_udp_msg*,struct tree_udp_msg*) ;
 int FUNC_6 (struct tree_udp_msg**,struct tree_udp_msg**,struct tree_udp_msg*,void*) ;
 int VAR_4 ;
 int FUNC_7 (struct udp_target*) ;
 int FUNC_8 (int,char*,int,int) ;

void FUNC_9 (struct udp_target *VAR_5, int VAR_6, int VAR_7) {
  if (VAR_7 >= VAR_5->send_num) {
    return;
  }
  if (VAR_7 > VAR_5->max_confirmed) {
    FUNC_2 (VAR_5);
    VAR_5->max_confirmed = VAR_7;
    FUNC_0 (VAR_7 < VAR_5->send_num);
    if (VAR_7 != VAR_5->send_num - 1) {
      FUNC_1 (VAR_5);
    }
    VAR_5->resend_state = 0;
  }
  VAR_5->last_ack = VAR_3;
  struct tree_udp_msg *VAR_8, *VAR_9, *VAR_10, *VAR_11;
  FUNC_6 (&VAR_10, &VAR_9, VAR_5->sent, (void *)&VAR_7);
  VAR_6--;
  FUNC_6 (&VAR_8, &VAR_11, VAR_10, (void *)&VAR_6);

  VAR_5->sent = FUNC_5 (VAR_8, VAR_9);
  VAR_2 = VAR_5;
  FUNC_3 (VAR_11, VAR_4);
  FUNC_4 (VAR_11);
  FUNC_8 (4, "S->sent: delete messages in range [%d, %d]\n", VAR_6, VAR_7);
  if (VAR_5->window_size <= VAR_0 && (VAR_5->flags & VAR_1)) {
    FUNC_7 (VAR_5);
  }
}
