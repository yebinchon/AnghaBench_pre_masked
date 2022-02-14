
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ h_idx; } ;
struct udp_target {TYPE_1__ confirm_timer; TYPE_1__ rx_timer; TYPE_1__ tx_timer; scalar_t__ window_queue; scalar_t__ out_queue; int sent; int constructors; void* received_tree; void* confirm_tree; scalar_t__ hash; } ;
struct tmp_msg {TYPE_4__* msg; } ;
struct raw_message {int dummy; } ;
struct TYPE_8__ {struct raw_message raw; } ;
struct TYPE_7__ {struct raw_message x; } ;
struct TYPE_6__ {struct tmp_msg x; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_3__* FUNC_3 (scalar_t__) ;
 TYPE_2__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct raw_message*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 void* FUNC_9 (void*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,struct udp_target*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_13 (struct udp_target*,int) ;

void FUNC_14 (struct udp_target *VAR_3) {
  if (VAR_3->hash) {
    VAR_2 = FUNC_12 (VAR_2, VAR_3);
  }
  VAR_3->confirm_tree = FUNC_9 (VAR_3->confirm_tree);
  VAR_3->received_tree = FUNC_9 (VAR_3->received_tree);
  FUNC_8 (VAR_3->constructors, VAR_0);
  VAR_3->constructors = FUNC_11 (VAR_3->constructors);
  FUNC_7 (VAR_3->sent, VAR_1);
  VAR_3->sent = FUNC_10 (VAR_3->sent);

  while (VAR_3->out_queue) {
    struct raw_message VAR_4 = FUNC_3 (VAR_3->out_queue)->x;
    FUNC_6 (&VAR_4);
    VAR_3->out_queue = FUNC_1 (VAR_3->out_queue);
  }

  while (VAR_3->window_queue) {
    struct tmp_msg VAR_5 = FUNC_4 (VAR_3->window_queue)->x;
    FUNC_6 (&VAR_5.msg->raw);
    FUNC_0 (VAR_5.msg);
    VAR_3->window_queue = FUNC_2 (VAR_3->window_queue);
  }

  if (VAR_3->tx_timer.h_idx) {
    FUNC_5 (&VAR_3->tx_timer);
  }
  if (VAR_3->rx_timer.h_idx) {
    FUNC_5 (&VAR_3->rx_timer);
  }
  if (VAR_3->confirm_timer.h_idx) {
    FUNC_5 (&VAR_3->confirm_timer);
  }
  FUNC_13 (VAR_3, sizeof (*VAR_3));
}
