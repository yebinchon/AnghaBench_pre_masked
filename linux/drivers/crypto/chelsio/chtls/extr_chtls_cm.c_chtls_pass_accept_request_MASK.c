
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct vlan_ethhdr {int dummy; } ;
struct tcphdr {scalar_t__ cwr; scalar_t__ ece; int dest; int source; int seq; } ;
struct sock {scalar_t__ sk_state; int sk_family; int sk_bound_dev_if; } ;
struct sk_buff {struct sock* sk; } ;
struct request_sock {scalar_t__ ts_recent; scalar_t__ mss; scalar_t__ cookie_ts; scalar_t__ rsk_window_clamp; scalar_t__ rsk_rcv_wnd; } ;
struct listen_ctx {int synq; } ;
struct iphdr {int version; int saddr; int daddr; } ;
struct ethhdr {int dummy; } ;
struct cpl_t5_pass_accept_rpl {int dummy; } ;
struct TYPE_8__ {int wsf; } ;
struct cpl_pass_accept_req {TYPE_1__ tcpopt; int hdr_len; int tos_stid; } ;
struct chtls_sock {int synq; struct listen_ctx* listen_ctx; } ;
struct chtls_dev {TYPE_3__* lldi; int tids; } ;
typedef int __u8 ;
struct TYPE_14__ {struct chtls_dev* cdev; } ;
struct TYPE_13__ {int wscale_ok; int snd_wscale; int ecn_ok; int ir_iif; } ;
struct TYPE_9__ {int sysctl_tcp_ecn; scalar_t__ sysctl_tcp_window_scaling; } ;
struct TYPE_12__ {TYPE_2__ ipv4; } ;
struct TYPE_11__ {int tfo_listener; int rcv_isn; } ;
struct TYPE_10__ {int * ports; } ;


 TYPE_7__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 (struct cpl_pass_accept_req*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_6 (unsigned int,int ) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sk_buff*,struct cpl_pass_accept_req*,unsigned int) ;
 struct sock* FUNC_10 (struct sock*,struct request_sock*,void*,struct cpl_pass_accept_req*,struct chtls_dev*) ;
 int FUNC_11 (struct request_sock*) ;
 int VAR_4 ;
 int FUNC_12 (struct request_sock*,int ,int ) ;
 int FUNC_13 (struct request_sock*,int ,int ) ;
 struct cpl_pass_accept_req* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int ,struct sock*,unsigned int,int ) ;
 int FUNC_16 (int ,struct sk_buff*) ;
 int FUNC_17 (int ,int ,unsigned int,int ) ;
 int FUNC_18 (struct sock*) ;
 scalar_t__ FUNC_19 (struct sock*) ;
 struct request_sock* FUNC_20 (int *,struct sock*,int) ;
 TYPE_6__* FUNC_21 (struct request_sock*) ;
 int FUNC_22 (struct iphdr*) ;
 int FUNC_23 (struct sk_buff*) ;
 scalar_t__ FUNC_24 (int ,unsigned int) ;
 struct sock* FUNC_25 (int ,unsigned int) ;
 int FUNC_26 (struct sk_buff*,int ,unsigned int) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (char*,unsigned int) ;
 struct chtls_sock* FUNC_29 (struct sock*) ;
 unsigned int FUNC_30 (int,int) ;
 scalar_t__ FUNC_31 (struct sock*) ;
 int FUNC_32 (struct sk_buff*,int) ;
 TYPE_5__* FUNC_33 (struct sock*) ;
 scalar_t__ FUNC_34 (struct sock*) ;
 TYPE_4__* FUNC_35 (struct request_sock*) ;

__attribute__((used)) static void FUNC_36(struct sock *VAR_5,
          struct sk_buff *VAR_6)
{
 struct cpl_t5_pass_accept_rpl *VAR_7;
 struct cpl_pass_accept_req *VAR_8;
 struct listen_ctx *VAR_9;
 struct vlan_ethhdr *VAR_10;
 struct request_sock *VAR_11;
 struct sk_buff *VAR_12;
 struct chtls_sock *VAR_13;
 struct chtls_dev *VAR_14;
 struct tcphdr *VAR_15;
 struct sock *VAR_16;
 struct ethhdr *VAR_17;
 struct iphdr *VAR_18;
 void *VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;
 bool VAR_23, VAR_24;
 __u8 VAR_25;
 u16 VAR_26;
 bool VAR_27;

 VAR_8 = FUNC_14(VAR_6) + VAR_2;
 VAR_22 = FUNC_1(VAR_8);
 VAR_14 = FUNC_0(VAR_6)->cdev;
 VAR_16 = FUNC_25(VAR_14->tids, VAR_22);
 VAR_20 = FUNC_3(FUNC_27(VAR_8->tos_stid));
 if (VAR_16) {
  FUNC_28("tid (%d) already in use\n", VAR_22);
  return;
 }

 VAR_21 = FUNC_30(sizeof(*VAR_7), 16);
 VAR_12 = FUNC_6(VAR_21, VAR_1);
 if (!VAR_12) {
  FUNC_17(VAR_14->tids, 0, VAR_22, VAR_5->sk_family);
  FUNC_23(VAR_6);
  return;
 }

 if (VAR_5->sk_state != VAR_3)
  goto reject;

 if (FUNC_19(VAR_5))
  goto reject;

 if (FUNC_31(VAR_5))
  goto reject;

 VAR_11 = FUNC_20(&VAR_4, VAR_5, 1);
 if (!VAR_11)
  goto reject;

 VAR_11->rsk_rcv_wnd = 0;
 VAR_11->rsk_window_clamp = 0;
 VAR_11->cookie_ts = 0;
 VAR_11->mss = 0;
 VAR_11->ts_recent = 0;

 VAR_26 = FUNC_4(FUNC_27(VAR_8->hdr_len));
 if (VAR_26 == VAR_0) {
  VAR_17 = (struct ethhdr *)(VAR_8 + 1);
  VAR_18 = (struct iphdr *)(VAR_17 + 1);
  VAR_19 = (void *)(VAR_17 + 1);
 } else {
  VAR_10 = (struct vlan_ethhdr *)(VAR_8 + 1);
  VAR_18 = (struct iphdr *)(VAR_10 + 1);
  VAR_19 = (void *)(VAR_10 + 1);
 }
 if (VAR_18->version != 0x4)
  goto free_oreq;

 VAR_15 = (struct tcphdr *)(VAR_18 + 1);
 FUNC_32(VAR_6, (void *)VAR_18 - (void *)VAR_8);

 FUNC_35(VAR_11)->tfo_listener = 0;
 FUNC_35(VAR_11)->rcv_isn = FUNC_27(VAR_15->seq);
 FUNC_13(VAR_11, VAR_15->source, VAR_15->dest);
 FUNC_12(VAR_11, VAR_18->daddr, VAR_18->saddr);
 VAR_25 = FUNC_22(VAR_18);
 if (VAR_8->tcpopt.wsf <= 14 &&
     FUNC_33(VAR_5)->ipv4.sysctl_tcp_window_scaling) {
  FUNC_21(VAR_11)->wscale_ok = 1;
  FUNC_21(VAR_11)->snd_wscale = VAR_8->tcpopt.wsf;
 }
 FUNC_21(VAR_11)->ir_iif = VAR_5->sk_bound_dev_if;
 VAR_23 = VAR_15->ece && VAR_15->cwr;
 if (VAR_23) {
  VAR_24 = !FUNC_2(VAR_25);
  VAR_27 = FUNC_33(VAR_5)->ipv4.sysctl_tcp_ecn;
  if ((!VAR_24 && VAR_27) || FUNC_34(VAR_5))
   FUNC_21(VAR_11)->ecn_ok = 1;
 }

 VAR_16 = FUNC_10(VAR_5, VAR_11, VAR_19, VAR_8, VAR_14);
 if (!VAR_16)
  goto reject;

 if (FUNC_7(VAR_16))
  goto reject;
 FUNC_18(VAR_5);
 VAR_12->sk = VAR_16;
 FUNC_8(VAR_16);
 FUNC_15(VAR_14->tids, VAR_16, VAR_22, VAR_16->sk_family);
 VAR_13 = FUNC_29(VAR_16);
 VAR_9 = (struct listen_ctx *)FUNC_24(VAR_14->tids, VAR_20);
 VAR_13->listen_ctx = VAR_9;
 FUNC_5(&VAR_9->synq, (struct sk_buff *)&VAR_13->synq);
 FUNC_9(VAR_12, VAR_8, VAR_22);
 FUNC_23(VAR_6);
 return;

free_oreq:
 FUNC_11(VAR_11);
reject:
 FUNC_26(VAR_12, 0, VAR_22);
 FUNC_16(VAR_14->lldi->ports[0], VAR_12);
 FUNC_23(VAR_6);
}
