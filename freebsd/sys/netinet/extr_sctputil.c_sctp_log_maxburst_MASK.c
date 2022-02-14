
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int send_queue_cnt; int stream_queue_cnt; } ;
struct sctp_tcb {TYPE_2__ asoc; } ;
struct sctp_nets {int flight_size; } ;
struct TYPE_7__ {int log4; int log3; int log2; int log1; } ;
struct TYPE_5__ {int cwnd_new_value; int cwnd_augment; int cnt_in_send; int cnt_in_str; int inflight; struct sctp_nets* net; } ;
struct TYPE_8__ {TYPE_3__ misc; TYPE_1__ cwnd; } ;
struct sctp_cwnd_log {TYPE_4__ x; } ;
typedef int sctp_clog ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct sctp_cwnd_log*,int ,int) ;

void
FUNC_2(struct sctp_tcb *VAR_2, struct sctp_nets *VAR_3, int VAR_4, int VAR_5, uint8_t VAR_6)
{
}
