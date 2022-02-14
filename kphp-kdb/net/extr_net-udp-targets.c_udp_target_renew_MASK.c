
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ h_idx; } ;
struct udp_target {int received_prefix; int max_confirmed; int flags; TYPE_1__ confirm_timer; TYPE_1__ rx_timer; TYPE_1__ tx_timer; scalar_t__ window_queue; scalar_t__ out_queue; int tx_timeout; int rx_timeout; scalar_t__ proto_version; scalar_t__ unack_size; scalar_t__ window_size; scalar_t__ last_ack; scalar_t__ send_num; scalar_t__ aes_ctx_initialized; int sent; int constructors; void* received_tree; void* confirm_tree; } ;
struct tmp_msg {TYPE_4__* msg; } ;
struct raw_message {int dummy; } ;
struct process_id {int dummy; } ;
struct TYPE_8__ {struct raw_message raw; } ;
struct TYPE_7__ {struct raw_message x; } ;
struct TYPE_6__ {struct tmp_msg x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_5 ;
 int FUNC_12 (struct udp_target*,struct process_id*,int) ;

void FUNC_13 (struct udp_target *VAR_6, struct process_id *VAR_7, int VAR_8) {
  FUNC_12 (VAR_6, VAR_7, VAR_8);
  VAR_6->received_prefix = -1;
  VAR_6->confirm_tree = FUNC_9 (VAR_6->confirm_tree);
  VAR_6->received_tree = FUNC_9 (VAR_6->received_tree);
  FUNC_8 (VAR_6->constructors, VAR_4);
  VAR_6->constructors = FUNC_11 (VAR_6->constructors);
  FUNC_7 (VAR_6->sent, VAR_5);
  VAR_6->sent = FUNC_10 (VAR_6->sent);
  VAR_6->aes_ctx_initialized = 0;
  VAR_6->send_num = 0;
  VAR_6->last_ack = 0;
  VAR_6->max_confirmed = -1;
  VAR_6->window_size = 0;
  VAR_6->flags = VAR_3 | VAR_2;
  VAR_6->unack_size = 0;
  VAR_6->proto_version = 0;

  VAR_6->rx_timeout = VAR_0;
  VAR_6->tx_timeout = VAR_1;

  while (VAR_6->out_queue) {
    struct raw_message VAR_9 = FUNC_3 (VAR_6->out_queue)->x;
    FUNC_6 (&VAR_9);
    VAR_6->out_queue = FUNC_1 (VAR_6->out_queue);
  }

  while (VAR_6->window_queue) {
    struct tmp_msg VAR_10 = FUNC_4 (VAR_6->window_queue)->x;
    FUNC_6 (&VAR_10.msg->raw);
    FUNC_0 (VAR_10.msg);
    VAR_6->window_queue = FUNC_2 (VAR_6->window_queue);
  }

  if (VAR_6->tx_timer.h_idx) {
    FUNC_5 (&VAR_6->tx_timer);
  }
  if (VAR_6->rx_timer.h_idx) {
    FUNC_5 (&VAR_6->rx_timer);
  }
  if (VAR_6->confirm_timer.h_idx) {
    FUNC_5 (&VAR_6->confirm_timer);
  }
}
