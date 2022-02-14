
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xinpcb {int xi_len; uintptr_t inp_ppcb; int inp_ip_minttl; int inp_ip_p; int inp_ip_ttl; int inp_vflag; int inp_ip_tos; int in6p_hops; int in6p_cksum; int inp_rss_listen_bucket; int inp_flags2; int inp_flags; int inp_flowtype; int inp_flowid; int inp_flow; int inp_gencnt; int inp_inc; int xi_socket; } ;
struct inpcb {int inp_ip_minttl; int inp_ip_p; int inp_ip_ttl; int inp_vflag; int inp_ip_tos; int in6p_hops; int in6p_cksum; int inp_rss_listen_bucket; int inp_flags2; int inp_flags; int inp_flowtype; int inp_flowid; int inp_flow; scalar_t__ inp_ppcb; int inp_gencnt; int inp_inc; scalar_t__ inp_socket; } ;
struct in_conninfo {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct xinpcb*,int) ;
 int FUNC_2 (scalar_t__,int *) ;

void
FUNC_3(const struct inpcb *VAR_0, struct xinpcb *VAR_1)
{

 FUNC_1(VAR_1, sizeof(*VAR_1));
 VAR_1->xi_len = sizeof(struct xinpcb);
 if (VAR_0->inp_socket)
  FUNC_2(VAR_0->inp_socket, &VAR_1->xi_socket);
 FUNC_0(&VAR_0->inp_inc, &VAR_1->inp_inc, sizeof(struct in_conninfo));
 VAR_1->inp_gencnt = VAR_0->inp_gencnt;
 VAR_1->inp_ppcb = (uintptr_t)VAR_0->inp_ppcb;
 VAR_1->inp_flow = VAR_0->inp_flow;
 VAR_1->inp_flowid = VAR_0->inp_flowid;
 VAR_1->inp_flowtype = VAR_0->inp_flowtype;
 VAR_1->inp_flags = VAR_0->inp_flags;
 VAR_1->inp_flags2 = VAR_0->inp_flags2;
 VAR_1->inp_rss_listen_bucket = VAR_0->inp_rss_listen_bucket;
 VAR_1->in6p_cksum = VAR_0->in6p_cksum;
 VAR_1->in6p_hops = VAR_0->in6p_hops;
 VAR_1->inp_ip_tos = VAR_0->inp_ip_tos;
 VAR_1->inp_vflag = VAR_0->inp_vflag;
 VAR_1->inp_ip_ttl = VAR_0->inp_ip_ttl;
 VAR_1->inp_ip_p = VAR_0->inp_ip_p;
 VAR_1->inp_ip_minttl = VAR_0->inp_ip_minttl;
}
