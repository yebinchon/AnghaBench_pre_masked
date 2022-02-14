
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int th_off; scalar_t__ th_sum; scalar_t__ th_urp; scalar_t__ th_win; scalar_t__ th_flags; scalar_t__ th_x2; scalar_t__ th_ack; scalar_t__ th_seq; int th_dport; int th_sport; } ;
struct ip6_hdr {int ip6_flow; int ip6_vfc; int ip6_dst; int ip6_src; int ip6_plen; void* ip6_nxt; } ;
struct ip {int ip_hl; int ip_dst; int ip_src; void* ip_p; scalar_t__ ip_sum; int ip_ttl; scalar_t__ ip_off; scalar_t__ ip_id; scalar_t__ ip_len; int ip_tos; int ip_v; } ;
struct inpcb {int inp_vflag; int inp_flow; int inp_fport; int inp_lport; int inp_faddr; int inp_laddr; int inp_ip_ttl; int inp_ip_tos; int in6p_faddr; int in6p_laddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct inpcb*) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;

void
FUNC_2(struct inpcb *VAR_6, void *VAR_7, void *VAR_8)
{
 struct tcphdr *VAR_9 = (struct tcphdr *)VAR_8;

 FUNC_0(VAR_6);
 VAR_9->th_sport = VAR_6->inp_lport;
 VAR_9->th_dport = VAR_6->inp_fport;
 VAR_9->th_seq = 0;
 VAR_9->th_ack = 0;
 VAR_9->th_x2 = 0;
 VAR_9->th_off = 5;
 VAR_9->th_flags = 0;
 VAR_9->th_win = 0;
 VAR_9->th_urp = 0;
 VAR_9->th_sum = 0;
}
