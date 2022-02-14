
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_5__ {scalar_t__ total_output_queue_size; int sent_queue; int send_queue; int max_send_times; } ;
struct sctp_tcb {TYPE_2__ asoc; } ;
struct TYPE_6__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_4__ {int * _s_addr; } ;
struct sctp_nets {int dest_state; scalar_t__ hb_responded; int heart_beat_delay; TYPE_3__ last_sent_time; scalar_t__ partial_bytes_acked; scalar_t__ src_addr_selected; TYPE_1__ ro; } ;
struct sctp_inpcb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timeval*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct sctp_inpcb*,struct sctp_tcb*) ;
 int FUNC_3 (struct sctp_tcb*,struct sctp_nets*,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sctp_tcb*,struct sctp_nets*,int ) ;
 scalar_t__ FUNC_6 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*,int ) ;
 int FUNC_7 (struct timeval*,TYPE_3__*) ;

int
FUNC_8(struct sctp_inpcb *VAR_3, struct sctp_tcb *VAR_4,
    struct sctp_nets *VAR_5)
{
 uint8_t VAR_6;

 if (VAR_5->dest_state & VAR_1) {
  VAR_6 = 1;
 } else {
  VAR_6 = 0;
 }
 if (VAR_5->hb_responded == 0) {
  if (VAR_5->ro._s_addr) {




   FUNC_4(VAR_5->ro._s_addr);
   VAR_5->ro._s_addr = ((void*)0);
   VAR_5->src_addr_selected = 0;
  }
  FUNC_3(VAR_4, VAR_5, 1, 0, 0);
  if (FUNC_6(VAR_3, VAR_4, VAR_5, VAR_4->asoc.max_send_times)) {

   return (1);
  }
 }

 if (VAR_5->partial_bytes_acked) {
  VAR_5->partial_bytes_acked = 0;
 }
 if ((VAR_4->asoc.total_output_queue_size > 0) &&
     (FUNC_1(&VAR_4->asoc.send_queue)) &&
     (FUNC_1(&VAR_4->asoc.sent_queue))) {
  FUNC_2(VAR_3, VAR_4);
 }
 if (!(VAR_5->dest_state & VAR_0) &&
     !((VAR_6 == 0) && (VAR_5->dest_state & VAR_1))) {




  uint32_t VAR_7;

  if ((VAR_5->last_sent_time.tv_sec > 0) ||
      (VAR_5->last_sent_time.tv_usec > 0)) {
   struct timeval VAR_8;

   FUNC_0(&VAR_8);
   FUNC_7(&VAR_8, &VAR_5->last_sent_time);
   VAR_7 = (uint32_t)(VAR_8.tv_sec * 1000) +
       (uint32_t)(VAR_8.tv_usec / 1000);
  } else {
   VAR_7 = 0xffffffff;
  }
  if ((VAR_7 >= VAR_5->heart_beat_delay) ||
      (VAR_5->dest_state & VAR_1)) {
   FUNC_5(VAR_4, VAR_5, VAR_2);
  }
 }
 return (0);
}
