
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int flex7; scalar_t__ epoch; int flex8; void* pkts_out; void* flex6; void* flex5; void* flex4; void* flex3; void* flex2; void* flex1; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
typedef int uint8_t ;
typedef void* uint32_t ;
struct TYPE_6__ {scalar_t__ rc_ack_hdwr_delay; } ;
struct tcp_bbr {int rc_tv; TYPE_3__* rc_inp; TYPE_5__* rc_tp; TYPE_1__ r_ctl; scalar_t__ rc_ack_was_delayed; } ;
struct TYPE_10__ {scalar_t__ t_logstate; } ;
struct TYPE_8__ {TYPE_2__* inp_socket; } ;
struct TYPE_7__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int *,int *,int ,int ,void*,union tcp_log_stackspecific*,int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_bbr*,TYPE_4__*,void*) ;

__attribute__((used)) static void
FUNC_2(struct tcp_bbr *VAR_2, uint8_t VAR_3, uint32_t VAR_4,
    uint32_t VAR_5, uint32_t VAR_6, uint32_t VAR_7,
    uint32_t VAR_8, uint32_t VAR_9, int VAR_10,
    uint32_t VAR_11, uint32_t VAR_12)
{

 if (VAR_2->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_13;

  FUNC_1(VAR_2, &VAR_13.u_bbr, VAR_4);
  VAR_13.u_bbr.flex1 = VAR_12;
  VAR_13.u_bbr.flex2 = VAR_6;
  VAR_13.u_bbr.flex3 = VAR_5;
  VAR_13.u_bbr.flex4 = VAR_11;
  VAR_13.u_bbr.flex5 = VAR_7;
  VAR_13.u_bbr.flex6 = VAR_8;
  VAR_13.u_bbr.flex7 = VAR_10;

  VAR_13.u_bbr.pkts_out = VAR_9;
  VAR_13.u_bbr.flex8 = VAR_3;
  if (VAR_2->rc_ack_was_delayed)
   VAR_13.u_bbr.epoch = VAR_2->r_ctl.rc_ack_hdwr_delay;
  else
   VAR_13.u_bbr.epoch = 0;
  FUNC_0(VAR_2->rc_tp, ((void*)0),
      &VAR_2->rc_inp->inp_socket->so_rcv,
      &VAR_2->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      VAR_6, &VAR_13, 0, &VAR_2->rc_tv);
 }
}
