
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {int send_queue_cnt; int stream_queue_cnt; int peers_rwnd; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;
struct sctp_nets {int find_pseudo_cumack; int new_pseudo_cumack; int pseudo_cumack; int flight_size; int cwnd; } ;
struct TYPE_7__ {int log4; int log3; int log2; int log1; } ;
struct TYPE_6__ {int cnt_in_send; int cnt_in_str; int cwnd_augment; int meets_pseudo_cumack; int need_new_pseudo_cumack; int pseudo_cumack; int inflight; int cwnd_new_value; struct sctp_nets* net; } ;
struct TYPE_8__ {TYPE_3__ misc; TYPE_2__ cwnd; } ;
struct sctp_cwnd_log {TYPE_4__ x; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void
FUNC_1(struct sctp_tcb *VAR_3, struct sctp_nets *VAR_4, int VAR_5, uint8_t VAR_6)
{
}
