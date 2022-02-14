
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udp_socket {struct udp_message* recv_queue_last; struct udp_message* recv_queue; scalar_t__ recv_queue_len; scalar_t__ recv_queue_bytes; TYPE_1__* type; int send_queue_bytes; int send_queue_len; int fd; } ;
struct udp_message {int flags; struct udp_message* next; } ;
struct TYPE_2__ {int (* process_error_msg ) (struct udp_socket*,struct udp_message*) ;int (* process_msg ) (struct udp_socket*,struct udp_message*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct udp_message*) ;
 int FUNC_1 (struct udp_socket*,struct udp_message*) ;
 int FUNC_2 (struct udp_socket*,struct udp_message*) ;
 int FUNC_3 (int,char*,int ,scalar_t__,scalar_t__,int ,int ) ;

int FUNC_4 (struct udp_socket *VAR_1) {
  FUNC_3 (2, "udp_process_incoming(%d): %d messages in receive queue (%d bytes); %d messages in send queue (%d bytes)\n", VAR_1->fd, VAR_1->recv_queue_len, VAR_1->recv_queue_bytes, VAR_1->send_queue_len, VAR_1->send_queue_bytes);
  struct udp_message *VAR_2, *VAR_3 = VAR_1->recv_queue;
  if (!VAR_3) {
    return 0;
  }
  do {
    VAR_2 = VAR_3;
    VAR_3 = VAR_3->next;
    VAR_2->next = 0;
    int VAR_4;
    if (VAR_2->flags & VAR_0) {
      VAR_4 = VAR_1->type->process_error_msg (VAR_1, VAR_2);
    } else {
      VAR_4 = VAR_1->type->process_msg (VAR_1, VAR_2);
    }
    if (VAR_4 <= 0) {
      FUNC_0 (VAR_2);
    }
  } while (VAR_3);
  VAR_1->recv_queue_bytes = VAR_1->recv_queue_len = 0;
  VAR_1->recv_queue = VAR_1->recv_queue_last = 0;
  return 0;
}
