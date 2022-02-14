
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t odd_even; size_t mss_idx; size_t wscale_idx; scalar_t__ sack_ok; } ;
union syncookie {int cookie; TYPE_2__ flags; } ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int tcp_seq ;
struct tcpopt {int to_flags; int to_tsval; } ;
struct tcphdr {int th_ack; int th_seq; } ;
struct syncache_head {int dummy; } ;
struct syncache {int sc_irs; int sc_iss; int sc_flowlabel; int sc_requested_r_scale; int sc_wnd; scalar_t__ sc_rxmits; int sc_flags; int sc_tsoff; int sc_tsreflect; int sc_requested_s_scale; int sc_peer_mss; int sc_ip_tos; int sc_ip_ttl; int * sc_ipopts; int sc_inc; } ;
struct socket {int sol_sbrcv_hiwat; } ;
struct in_conninfo {int inc_flags; } ;
struct TYPE_5__ {int ** key; } ;
struct TYPE_8__ {TYPE_1__ secret; } ;
struct TYPE_7__ {int inp_flags; int inp_ip_tos; int inp_ip_ttl; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;
 int FUNC_1 (struct in_conninfo*,int *,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int) ;
 int VAR_11 ;
 TYPE_3__* FUNC_4 (struct socket*) ;
 int FUNC_5 (struct in_conninfo*,int,int,int *,uintptr_t) ;
 int FUNC_6 (struct in_conninfo*) ;
 int * VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static struct syncache *
FUNC_7(struct in_conninfo *VAR_15, struct syncache_head *VAR_16,
    struct syncache *VAR_17, struct tcphdr *VAR_18, struct tcpopt *VAR_19,
    struct socket *VAR_20)
{
 uint32_t VAR_21;
 uint8_t *VAR_22;
 tcp_seq VAR_23, VAR_24;
 int VAR_25, VAR_26 = 0;
 union syncookie VAR_27;





 VAR_23 = VAR_18->th_ack - 1;
 VAR_24 = VAR_18->th_seq - 1;





 VAR_27.cookie = (VAR_23 & 0xff) ^ (VAR_23 >> 24);


 VAR_22 = VAR_10.secret.key[VAR_27.flags.odd_even];

 VAR_21 = FUNC_5(VAR_15, VAR_24, VAR_27.cookie, VAR_22, (uintptr_t)VAR_16);


 if ((VAR_23 & ~0xff) != (VAR_21 & ~0xff))
  return (((void*)0));


 VAR_17->sc_flags = 0;
 FUNC_1(VAR_15, &VAR_17->sc_inc, sizeof(struct in_conninfo));
 VAR_17->sc_ipopts = ((void*)0);

 VAR_17->sc_irs = VAR_24;
 VAR_17->sc_iss = VAR_23;

 switch (VAR_15->inc_flags & 128) {
 }

 VAR_17->sc_peer_mss = VAR_12[VAR_27.flags.mss_idx];


 while (VAR_26 < VAR_7 && (VAR_6 << VAR_26) < VAR_11)
  VAR_26++;


 if (VAR_27.flags.wscale_idx > 0) {
  VAR_17->sc_requested_r_scale = VAR_26;
  VAR_17->sc_requested_s_scale = VAR_13[VAR_27.flags.wscale_idx];
  VAR_17->sc_flags |= VAR_5;
 }

 VAR_25 = VAR_20->sol_sbrcv_hiwat;
 VAR_25 = FUNC_2(VAR_25, 0);
 VAR_25 = FUNC_3(VAR_25, VAR_6);
 VAR_17->sc_wnd = VAR_25;

 if (VAR_27.flags.sack_ok)
  VAR_17->sc_flags |= VAR_2;

 if (VAR_19->to_flags & VAR_9) {
  VAR_17->sc_flags |= VAR_4;
  VAR_17->sc_tsreflect = VAR_19->to_tsval;
  VAR_17->sc_tsoff = FUNC_6(VAR_15);
 }

 if (VAR_19->to_flags & VAR_8)
  VAR_17->sc_flags |= VAR_3;

 VAR_17->sc_rxmits = 0;

 FUNC_0(VAR_14);
 return (VAR_17);
}
