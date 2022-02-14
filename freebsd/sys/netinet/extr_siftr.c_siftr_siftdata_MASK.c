
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


typedef int uint32_t ;
struct tcpcb {int t_flags; int t_segqlen; scalar_t__ snd_una; scalar_t__ snd_max; int t_rxtcur; int t_srtt; int t_maxseg; int t_state; int rcv_scale; int snd_scale; int snd_ssthresh; int rcv_wnd; int snd_wnd; int snd_cwnd; } ;
struct pkt_node {int sack_enabled; int flags; int ipver; int tval; int direction; int flowtype; int flowid; int t_segqlen; scalar_t__ sent_inflight_bytes; void* rcv_buf_cc; int rcv_buf_hiwater; void* snd_buf_cc; int snd_buf_hiwater; int rxt_length; int smoothed_rtt; int max_seg_size; int conn_state; int rcv_scale; int snd_scale; int snd_ssthresh; scalar_t__ snd_bwnd; int rcv_wnd; int snd_wnd; int snd_cwnd; int tcp_foreignport; int tcp_localport; int * ip_faddr; int * ip_laddr; } ;
struct TYPE_10__ {int * s6_addr32; } ;
struct TYPE_9__ {int * s6_addr32; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_7__ {int s_addr; } ;
struct inpcb {int inp_flowtype; int inp_flowid; TYPE_5__* inp_socket; int inp_fport; int inp_lport; TYPE_4__ in6p_faddr; TYPE_3__ in6p_laddr; TYPE_2__ inp_faddr; TYPE_1__ inp_laddr; } ;
struct TYPE_12__ {int sb_hiwat; } ;
struct TYPE_11__ {TYPE_6__ so_rcv; TYPE_6__ so_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inpcb*) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct pkt_node**) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (TYPE_6__*) ;
 int VAR_5 ;

__attribute__((used)) static inline void
FUNC_4(struct pkt_node *VAR_6, struct inpcb *VAR_7, struct tcpcb *VAR_8,
    int VAR_9, int VAR_10, int VAR_11)
{





  *((uint32_t *)VAR_6->ip_laddr) = VAR_7->inp_laddr.s_addr;
  *((uint32_t *)VAR_6->ip_faddr) = VAR_7->inp_faddr.s_addr;
 VAR_6->tcp_localport = VAR_7->inp_lport;
 VAR_6->tcp_foreignport = VAR_7->inp_fport;
 VAR_6->snd_cwnd = VAR_8->snd_cwnd;
 VAR_6->snd_wnd = VAR_8->snd_wnd;
 VAR_6->rcv_wnd = VAR_8->rcv_wnd;
 VAR_6->snd_bwnd = 0;
 VAR_6->snd_ssthresh = VAR_8->snd_ssthresh;
 VAR_6->snd_scale = VAR_8->snd_scale;
 VAR_6->rcv_scale = VAR_8->rcv_scale;
 VAR_6->conn_state = VAR_8->t_state;
 VAR_6->max_seg_size = VAR_8->t_maxseg;
 VAR_6->smoothed_rtt = VAR_8->t_srtt;
 VAR_6->sack_enabled = (VAR_8->t_flags & VAR_4) != 0;
 VAR_6->flags = VAR_8->t_flags;
 VAR_6->rxt_length = VAR_8->t_rxtcur;
 VAR_6->snd_buf_hiwater = VAR_7->inp_socket->so_snd.sb_hiwat;
 VAR_6->snd_buf_cc = FUNC_3(&VAR_7->inp_socket->so_snd);
 VAR_6->rcv_buf_hiwater = VAR_7->inp_socket->so_rcv.sb_hiwat;
 VAR_6->rcv_buf_cc = FUNC_3(&VAR_7->inp_socket->so_rcv);
 VAR_6->sent_inflight_bytes = VAR_8->snd_max - VAR_8->snd_una;
 VAR_6->t_segqlen = VAR_8->t_segqlen;
 VAR_6->flowid = VAR_7->inp_flowid;
 VAR_6->flowtype = VAR_7->inp_flowtype;


 if (VAR_11)
  FUNC_0(VAR_7);

 VAR_6->ipver = VAR_9;
 VAR_6->direction = (VAR_10 == VAR_3 ? VAR_0 : VAR_1);






 FUNC_2(&VAR_6->tval);
 FUNC_1(VAR_5, &VAR_6);

}
