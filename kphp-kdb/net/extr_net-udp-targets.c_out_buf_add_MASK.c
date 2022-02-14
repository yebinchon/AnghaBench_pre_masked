
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_idx; } ;
struct udp_target {int send_num; int max_confirmed; TYPE_1__ tx_timer; int sent; } ;
struct udp_msg {int prev_next; scalar_t__ msg_num; int raw; void* S; } ;
struct raw_message {scalar_t__ total_bytes; } ;


 int FUNC_0 (struct raw_message*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int FUNC_3 (int *,struct raw_message*) ;
 int FUNC_4 (struct udp_target*) ;
 int FUNC_5 (int ,struct udp_msg*,int ) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 struct udp_msg* FUNC_7 (int) ;

void FUNC_8 (struct raw_message *VAR_5) {
  FUNC_1 (VAR_5->total_bytes > 0);
  struct udp_msg *VAR_6 = FUNC_7 (sizeof (*VAR_6));
  struct udp_target *VAR_7 = VAR_4;
  VAR_6->S = VAR_4;
  VAR_6->msg_num = VAR_7->send_num ++;
  FUNC_3 (&VAR_6->raw, VAR_5);
  int VAR_8 = (VAR_3 ? VAR_2 : 0);
  int VAR_9 = VAR_1 ? VAR_0 : 0;
  VAR_6->prev_next = ((VAR_8 * 1ll) << 32) + VAR_9;
  VAR_3 = 0;
  VAR_1 = 0;
  VAR_7->sent = FUNC_5 (VAR_7->sent, VAR_6, FUNC_2 ());
  FUNC_6 (4, "S->sent: added number %d\n", VAR_6->msg_num);
  if (VAR_7->send_num - 2 == VAR_7->max_confirmed) {
    if (!VAR_7->tx_timer.h_idx) {
      FUNC_4 (VAR_7);
    }
  }

  FUNC_0 (VAR_5, VAR_7->send_num - 1);
}
