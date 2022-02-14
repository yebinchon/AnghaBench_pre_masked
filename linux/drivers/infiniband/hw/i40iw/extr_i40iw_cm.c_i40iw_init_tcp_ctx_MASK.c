
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct i40iw_tcp_offload_info {int drop_ooo_seg; int wscale; int ignore_tcp_opt; int ignore_tcp_uns_opt; int no_nagle; int rcv_wscale; int insert_vlan_tag; void* dest_ip_addr0; void* arp_idx; void* local_ipaddr3; void* local_ipaddr2; void* local_ipaddr1; void* local_ipaddr0; void* dest_ip_addr3; void* dest_ip_addr2; void* dest_ip_addr1; void* dst_port; void* src_port; void* vlan_tag; void* snd_mss; scalar_t__ flow_label; void* rcv_wnd; void* max_snd_window; void* snd_wl2; void* snd_wl1; void* cwnd; void* snd_una; void* snd_max; void* rcv_nxt; void* snd_wnd; void* snd_nxt; int snd_wscale; int tcp_state; int rexmit_thresh; void* ss_thresh; void* rtt_var; int ttl; scalar_t__ ipv4; } ;
struct i40iw_qp {int iwdev; } ;
struct TYPE_2__ {int rcv_wscale; int loc_seq_num; int snd_wnd; int rcv_nxt; int mss; int max_snd_wnd; int rcv_wnd; int snd_wscale; } ;
struct i40iw_cm_node {int vlan_id; int loc_port; int rem_port; int* rem_addr; int* loc_addr; scalar_t__ ipv4; scalar_t__ user_pri; TYPE_1__ tcp_cntxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,void**,int,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct i40iw_cm_node *VAR_8,
          struct i40iw_tcp_offload_info *VAR_9,
          struct i40iw_qp *VAR_10)
{
 VAR_9->ipv4 = VAR_8->ipv4;
 VAR_9->drop_ooo_seg = 1;
 VAR_9->wscale = 1;
 VAR_9->ignore_tcp_opt = 1;
 VAR_9->ignore_tcp_uns_opt = 1;
 VAR_9->no_nagle = 0;

 VAR_9->ttl = VAR_4;
 VAR_9->rtt_var = FUNC_1(VAR_2);
 VAR_9->ss_thresh = FUNC_1(VAR_3);
 VAR_9->rexmit_thresh = VAR_1;

 VAR_9->tcp_state = VAR_5;
 VAR_9->snd_wscale = VAR_8->tcp_cntxt.snd_wscale;
 VAR_9->rcv_wscale = VAR_8->tcp_cntxt.rcv_wscale;

 VAR_9->snd_nxt = FUNC_1(VAR_8->tcp_cntxt.loc_seq_num);
 VAR_9->snd_wnd = FUNC_1(VAR_8->tcp_cntxt.snd_wnd);
 VAR_9->rcv_nxt = FUNC_1(VAR_8->tcp_cntxt.rcv_nxt);
 VAR_9->snd_max = FUNC_1(VAR_8->tcp_cntxt.loc_seq_num);

 VAR_9->snd_una = FUNC_1(VAR_8->tcp_cntxt.loc_seq_num);
 VAR_9->cwnd = FUNC_1(2 * VAR_8->tcp_cntxt.mss);
 VAR_9->snd_wl1 = FUNC_1(VAR_8->tcp_cntxt.rcv_nxt);
 VAR_9->snd_wl2 = FUNC_1(VAR_8->tcp_cntxt.loc_seq_num);
 VAR_9->max_snd_window = FUNC_1(VAR_8->tcp_cntxt.max_snd_wnd);
 VAR_9->rcv_wnd = FUNC_1(VAR_8->tcp_cntxt.rcv_wnd <<
     VAR_8->tcp_cntxt.rcv_wscale);

 VAR_9->flow_label = 0;
 VAR_9->snd_mss = FUNC_1(((u32)VAR_8->tcp_cntxt.mss));
 if (VAR_8->vlan_id <= VAR_7) {
  VAR_9->insert_vlan_tag = 1;
  VAR_9->vlan_tag = FUNC_0(((u16)VAR_8->user_pri << VAR_6) |
        VAR_8->vlan_id);
 }
 if (VAR_8->ipv4) {
  VAR_9->src_port = FUNC_0(VAR_8->loc_port);
  VAR_9->dst_port = FUNC_0(VAR_8->rem_port);

  VAR_9->dest_ip_addr3 = FUNC_1(VAR_8->rem_addr[0]);
  VAR_9->local_ipaddr3 = FUNC_1(VAR_8->loc_addr[0]);
  VAR_9->arp_idx =
   FUNC_0((u16)FUNC_2(
        VAR_10->iwdev,
        &VAR_9->dest_ip_addr3,
        1,
        ((void*)0),
        VAR_0));
 } else {
  VAR_9->src_port = FUNC_0(VAR_8->loc_port);
  VAR_9->dst_port = FUNC_0(VAR_8->rem_port);
  VAR_9->dest_ip_addr0 = FUNC_1(VAR_8->rem_addr[0]);
  VAR_9->dest_ip_addr1 = FUNC_1(VAR_8->rem_addr[1]);
  VAR_9->dest_ip_addr2 = FUNC_1(VAR_8->rem_addr[2]);
  VAR_9->dest_ip_addr3 = FUNC_1(VAR_8->rem_addr[3]);
  VAR_9->local_ipaddr0 = FUNC_1(VAR_8->loc_addr[0]);
  VAR_9->local_ipaddr1 = FUNC_1(VAR_8->loc_addr[1]);
  VAR_9->local_ipaddr2 = FUNC_1(VAR_8->loc_addr[2]);
  VAR_9->local_ipaddr3 = FUNC_1(VAR_8->loc_addr[3]);
  VAR_9->arp_idx =
   FUNC_0((u16)FUNC_2(
        VAR_10->iwdev,
        &VAR_9->dest_ip_addr0,
        0,
        ((void*)0),
        VAR_0));
 }
}
