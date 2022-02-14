
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udp_socket {int flags; TYPE_2__* ev; int send_queue_len; int send_queue_bytes; struct udp_message* send_queue_last; struct udp_message* send_queue; } ;
struct TYPE_3__ {scalar_t__ magic; scalar_t__ total_bytes; } ;
struct udp_message {struct udp_message* next; TYPE_1__ raw; } ;
struct TYPE_4__ {int in_queue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2 (struct udp_socket *VAR_3, struct udp_message *VAR_4) {
  int VAR_5 = 0;
  FUNC_0 (VAR_4->raw.magic == VAR_1);
  if (VAR_4->raw.magic != VAR_1 || VAR_4->raw.total_bytes > VAR_0) {
    return 0;
  }
  if (!VAR_3->send_queue) {
    VAR_3->send_queue = VAR_3->send_queue_last = VAR_4;
    VAR_5 = 1;
  } else {
    VAR_3->send_queue_last->next = VAR_4;
    VAR_3->send_queue_last = VAR_4;
  }
  VAR_3->send_queue_bytes += VAR_4->raw.total_bytes;
  VAR_3->send_queue_len++;
  VAR_4->next = 0;
  if (!(VAR_3->flags & VAR_2)) {

    if (VAR_5 && !VAR_3->ev->in_queue) {
      FUNC_1 (VAR_3->ev);
    }
  }
  return 1;
}
