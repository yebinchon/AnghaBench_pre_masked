
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


struct TYPE_10__ {int flex8; uintptr_t cur_del_rate; uintptr_t bw_inuse; int lost; int applimited; int pkts_out; int cwnd_gain; int pacing_gain; int lt_epoch; void* delivered; int epoch; void* timeStamp; void* inflight; int flex7; int flex6; int rttProp; int delRate; int flex5; int flex4; int flex3; scalar_t__ flex2; int flex1; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
typedef void* uint32_t ;
typedef int uint16_t ;
struct timeval {int dummy; } ;
struct tcpcb {scalar_t__ t_logstate; TYPE_6__* t_inpcb; } ;
struct TYPE_7__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct lro_entry {int mbuf_appended; int ulp_csum; int mbuf_cnt; TYPE_3__* m_head; int window; int ack_seq; int next_seq; int p_len; int append_cnt; } ;
struct lro_ctrl {int lro_ackcnt_lim; int lro_length_lim; } ;
typedef int int32_t ;
struct TYPE_12__ {TYPE_5__* inp_socket; } ;
struct TYPE_11__ {int so_snd; int so_rcv; } ;
struct TYPE_8__ {int rcv_tstmp; int len; } ;
struct TYPE_9__ {TYPE_2__ m_pkthdr; int m_flags; } ;


 int FUNC_0 (struct tcpcb*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,struct timeval*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (union tcp_log_stackspecific*,int ,int) ;
 void* FUNC_2 (struct timeval*) ;

__attribute__((used)) static void
FUNC_3(struct tcpcb *VAR_2, struct lro_ctrl *VAR_3,
     struct lro_entry *VAR_4, struct mbuf *VAR_5, int VAR_6, int32_t VAR_7,
     uint32_t VAR_8 , uint32_t VAR_9, uint16_t VAR_10)
{
 if (VAR_2->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_11;
  struct timeval VAR_12;
  uint32_t VAR_13;

  VAR_13 = FUNC_2(&VAR_12);
  FUNC_1(&VAR_11, 0, sizeof(union tcp_log_stackspecific));
  VAR_11.u_bbr.flex8 = VAR_6;
  VAR_11.u_bbr.flex1 = VAR_7;
  if (VAR_5)
   VAR_11.u_bbr.flex2 = VAR_5->m_pkthdr.len;
  else
   VAR_11.u_bbr.flex2 = 0;
  VAR_11.u_bbr.flex3 = VAR_4->append_cnt;
  VAR_11.u_bbr.flex4 = VAR_4->p_len;
  VAR_11.u_bbr.flex5 = VAR_4->m_head->m_pkthdr.len;
  VAR_11.u_bbr.delRate = VAR_4->m_head->m_flags;
  VAR_11.u_bbr.rttProp = VAR_4->m_head->m_pkthdr.rcv_tstmp;
  VAR_11.u_bbr.flex6 = VAR_3->lro_length_lim;
  VAR_11.u_bbr.flex7 = VAR_3->lro_ackcnt_lim;
  VAR_11.u_bbr.inflight = VAR_8;
  VAR_11.u_bbr.timeStamp = VAR_13;
  VAR_11.u_bbr.epoch = VAR_4->next_seq;
  VAR_11.u_bbr.delivered = VAR_9;
  VAR_11.u_bbr.lt_epoch = VAR_4->ack_seq;
  VAR_11.u_bbr.pacing_gain = VAR_10;
  VAR_11.u_bbr.cwnd_gain = VAR_4->window;
  VAR_11.u_bbr.cur_del_rate = (uintptr_t)VAR_5;
  VAR_11.u_bbr.bw_inuse = (uintptr_t)VAR_4->m_head;
  VAR_11.u_bbr.pkts_out = VAR_4->mbuf_cnt;
  VAR_11.u_bbr.applimited = VAR_4->ulp_csum;
  VAR_11.u_bbr.lost = VAR_4->mbuf_appended;
  FUNC_0(VAR_2, ((void*)0),
          &VAR_2->t_inpcb->inp_socket->so_rcv,
          &VAR_2->t_inpcb->inp_socket->so_snd,
          VAR_0, 0,
          0, &VAR_11, 0, &VAR_12);
 }
}
