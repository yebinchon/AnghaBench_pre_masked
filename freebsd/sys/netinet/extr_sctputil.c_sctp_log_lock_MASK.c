
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct sctp_tcb {int tcb_mtx; } ;
struct sctp_inpcb {TYPE_3__* sctp_socket; int inp_create_mtx; int inp_mtx; } ;
struct TYPE_11__ {int log4; int log3; int log2; int log1; } ;
struct TYPE_10__ {void* socksndbuf_lock; void* sockrcvbuf_lock; void* sock_lock; int info_lock; void* create_lock; void* inp_lock; void* tcb_lock; void* inp; void* sock; } ;
struct TYPE_12__ {TYPE_5__ misc; TYPE_4__ lock; } ;
struct sctp_cwnd_log {TYPE_6__ x; } ;
typedef int sctp_clog ;
struct TYPE_8__ {int sb_mtx; } ;
struct TYPE_7__ {int sb_mtx; } ;
struct TYPE_9__ {TYPE_2__ so_snd; TYPE_1__ so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sctp_cwnd_log*,int ,int) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct sctp_inpcb *VAR_4, struct sctp_tcb *VAR_5, uint8_t VAR_6)
{
}
