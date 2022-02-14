
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct udp_socket {int flags; int send_queue_len; int send_queue_bytes; scalar_t__ send_queue_last; struct udp_message* send_queue; int fd; TYPE_1__* type; } ;
struct TYPE_6__ {scalar_t__ total_bytes; } ;
struct udp_message {int port; struct udp_message* next; TYPE_2__ raw; int ipv6; } ;
struct TYPE_7__ {int msg_len; int msg_hdr; } ;
struct TYPE_5__ {int (* process_send_error ) (struct udp_socket*,struct udp_message*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int VAR_17 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct udp_message*) ;
 int FUNC_3 (int ,TYPE_3__*,int,int ) ;
 int FUNC_4 (struct udp_message*,int) ;
 scalar_t__ VAR_18 ;
 int FUNC_5 (int ,int *,int ) ;
 char* FUNC_6 (int ) ;
 int VAR_19 ;
 char* FUNC_7 (int) ;
 int FUNC_8 (struct udp_socket*,struct udp_message*) ;
 TYPE_3__* VAR_20 ;
 int FUNC_9 (int,char*,...) ;

int FUNC_10 (struct udp_socket *VAR_21) {
  int VAR_22, VAR_23, VAR_24 = 0, VAR_25 = 0, VAR_26 = 0;
  FUNC_9 (2, "udp_writer: %d bytes in %d messages in queue\n", VAR_21->send_queue_bytes, VAR_21->send_queue_len);

  while (VAR_21->send_queue && !(VAR_21->flags & VAR_15)) {
    if (VAR_18 < 0 || VAR_25) {
      VAR_23 = FUNC_4 (VAR_21->send_queue, 1);
      FUNC_0 (VAR_23 == 1);

      VAR_22 = FUNC_5 (VAR_21->fd, &VAR_20[0].msg_hdr, VAR_13);
      if (VAR_22 < 0) {
 if (VAR_17 == VAR_4 || VAR_17 == VAR_0) {
   continue;
 }
 int VAR_27 = VAR_17;
 if (VAR_17 == VAR_11) {
   FUNC_9 (2, "error in sendmsg() to [%s]:%d: %s, dropping message\n", FUNC_6 (VAR_21->send_queue->ipv6), VAR_21->send_queue->port, FUNC_7 (VAR_27));
   VAR_21->type->process_send_error (VAR_21, VAR_21->send_queue);
   VAR_26 = 1;
 } else if (VAR_17 == VAR_1 || VAR_17 == VAR_3 || VAR_17 == VAR_2 || VAR_17 == VAR_6 || VAR_17 == VAR_8 || VAR_17 == VAR_5 || VAR_17 == VAR_10 || VAR_17 == VAR_9 || VAR_17 == VAR_7) {
   VAR_21->flags |= VAR_15;
   break;
 } else {
   FUNC_1 (VAR_19, "error in sendmsg() to [%s]:%d: %s\n", FUNC_6 (VAR_21->send_queue->ipv6), VAR_21->send_queue->port, FUNC_7 (VAR_27));
   VAR_21->flags |= VAR_16 | VAR_14;
   return VAR_22;
 }
      } else {
 VAR_20[0].msg_len = VAR_22;
      }
      VAR_25 = 0;
      VAR_22 = 1;
    } else {
      VAR_23 = FUNC_4 (VAR_21->send_queue, VAR_12);
      FUNC_0 (VAR_23 > 0);

      VAR_22 = FUNC_3 (VAR_21->fd, VAR_20, VAR_23, VAR_13);
      if (VAR_22 < 0) {
 if (VAR_18 < 0 || VAR_17 == VAR_4 || VAR_17 == VAR_0) {
   continue;
 }
 if (VAR_17 == VAR_11) {
   VAR_25 = 1;
   continue;
 } else if (VAR_17 == VAR_1 || VAR_17 == VAR_3 || VAR_17 == VAR_2 || VAR_17 == VAR_6 || VAR_17 == VAR_8 || VAR_17 == VAR_5 || VAR_17 == VAR_10 || VAR_17 == VAR_9 || VAR_17 == VAR_7) {
   VAR_21->flags |= VAR_15;
   break;
 } else {
   FUNC_1 (VAR_19, "error in sendmmsg(): %m\n");
   VAR_21->flags |= VAR_16 | VAR_14;
   return VAR_22;
 }
      }
    }
    if (!VAR_22) {
      VAR_21->flags |= VAR_16;
    }
    if (!VAR_26) {
      VAR_24 += VAR_22;
    }
    int VAR_28;
    for (VAR_28 = 0; VAR_28 < VAR_22; VAR_28++) {
      struct udp_message *VAR_29 = VAR_21->send_queue;
      FUNC_0 (VAR_20[VAR_28].msg_len == VAR_29->raw.total_bytes || VAR_26);
      VAR_21->send_queue_bytes -= VAR_29->raw.total_bytes;
      VAR_21->send_queue_len--;
      VAR_21->send_queue = VAR_29->next;
      FUNC_2 (VAR_29);
    }
    if (!VAR_21->send_queue) {
      VAR_21->send_queue_last = 0;
    }
    FUNC_9 (2, "sendmmsg: %d datagrams %s (%d total); %d bytes in %d messages still in queue\n", VAR_22, VAR_26 ? "dropped" : "sent", VAR_24, VAR_21->send_queue_bytes, VAR_21->send_queue_len);
    VAR_26 = 0;
  }
  return VAR_24;
}
