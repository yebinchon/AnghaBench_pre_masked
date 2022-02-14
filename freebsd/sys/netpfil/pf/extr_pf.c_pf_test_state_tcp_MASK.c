
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_short ;
struct tcphdr {scalar_t__ th_sport; scalar_t__ th_dport; int th_flags; int th_sum; int th_seq; int th_ack; int th_win; } ;
struct pfi_kif {int dummy; } ;
struct pf_state_peer {scalar_t__ state; int seqlo; int seqhi; int seqdiff; scalar_t__ wscale; void* max_win; int mss; } ;
struct pf_state_key_cmp {scalar_t__* port; int af; int * addr; int proto; } ;
struct pf_state_key {scalar_t__* port; int * addr; } ;
struct TYPE_5__ {int ptr; } ;
struct pf_state {int direction; int state_flags; struct pf_state_key** key; struct pf_state_peer dst; struct pf_state_peer src; TYPE_2__ rule; int tag; int * src_node; } ;
struct TYPE_4__ {struct tcphdr* tcp; } ;
struct pf_pdesc {size_t didx; size_t sidx; int af; int ip_sum; int * dst; int * src; TYPE_1__ hdr; } ;
struct mbuf {int dummy; } ;
typedef int key ;
typedef int caddr_t ;
struct TYPE_6__ {scalar_t__ debug; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct pfi_kif*,struct pf_state_key_cmp*,int,struct pf_state*,struct pf_pdesc*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_3__ VAR_21 ;
 int FUNC_5 () ;
 int FUNC_6 (struct pf_state_key_cmp*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mbuf*,int,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct mbuf*,int *,scalar_t__*,int ,int *,int *,scalar_t__,int ,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct pf_state*) ;
 int FUNC_14 (int *,int ,int ,int *,int *,scalar_t__,scalar_t__,int,int,int,void*,int ,int ,int,int ,int *) ;
 scalar_t__ FUNC_15 (struct pf_state**) ;
 int FUNC_16 (struct pf_state_peer*,struct pf_state_peer*,struct pf_state**,struct pfi_kif*,struct mbuf*,int,struct pf_pdesc*,int *,int*) ;
 int FUNC_17 (struct pf_state_peer*,struct pf_state_peer*,struct pf_state**,struct pf_pdesc*,int *) ;
 int FUNC_18 (struct pf_state*,int ) ;
 int FUNC_19 (char*) ;

__attribute__((used)) static int
FUNC_20(struct pf_state **VAR_22, int VAR_23, struct pfi_kif *VAR_24,
    struct mbuf *VAR_25, int VAR_26, void *VAR_27, struct pf_pdesc *VAR_28,
    u_short *VAR_29)
{
 struct pf_state_key_cmp VAR_30;
 struct tcphdr *VAR_31 = VAR_28->hdr.tcp;
 int VAR_32 = 0;
 struct pf_state_peer *VAR_33, *VAR_34;
 struct pf_state_key *VAR_35;

 FUNC_6(&VAR_30, sizeof(VAR_30));
 VAR_30.af = VAR_28->af;
 VAR_30.proto = VAR_0;
 if (VAR_23 == VAR_7) {
  FUNC_1(&VAR_30.addr[0], VAR_28->src, VAR_30.af);
  FUNC_1(&VAR_30.addr[1], VAR_28->dst, VAR_30.af);
  VAR_30.port[0] = VAR_31->th_sport;
  VAR_30.port[1] = VAR_31->th_dport;
 } else {
  FUNC_1(&VAR_30.addr[1], VAR_28->src, VAR_30.af);
  FUNC_1(&VAR_30.addr[0], VAR_28->dst, VAR_30.af);
  VAR_30.port[1] = VAR_31->th_sport;
  VAR_30.port[0] = VAR_31->th_dport;
 }

 FUNC_4(VAR_24, &VAR_30, VAR_23, *VAR_22, VAR_28);

 if (VAR_23 == (*VAR_22)->direction) {
  VAR_33 = &(*VAR_22)->src;
  VAR_34 = &(*VAR_22)->dst;
 } else {
  VAR_33 = &(*VAR_22)->dst;
  VAR_34 = &(*VAR_22)->src;
 }

 VAR_35 = (*VAR_22)->key[VAR_28->didx];

 if ((*VAR_22)->src.state == VAR_13) {
  if (VAR_23 != (*VAR_22)->direction) {
   FUNC_3(VAR_29, VAR_2);
   return (VAR_11);
  }
  if (VAR_31->th_flags & VAR_20) {
   if (FUNC_9(VAR_31->th_seq) != (*VAR_22)->src.seqlo) {
    FUNC_3(VAR_29, VAR_2);
    return (VAR_5);
   }
   FUNC_14(((void*)0), (*VAR_22)->rule.ptr, VAR_28->af, VAR_28->dst,
       VAR_28->src, VAR_31->th_dport, VAR_31->th_sport,
       (*VAR_22)->src.seqhi, FUNC_9(VAR_31->th_seq) + 1,
       VAR_20|VAR_17, 0, (*VAR_22)->src.mss, 0, 1, 0, ((void*)0));
   FUNC_3(VAR_29, VAR_2);
   return (VAR_11);
  } else if ((VAR_31->th_flags & (VAR_17|VAR_19|VAR_18)) != VAR_17 ||
      (FUNC_9(VAR_31->th_ack) != (*VAR_22)->src.seqhi + 1) ||
      (FUNC_9(VAR_31->th_seq) != (*VAR_22)->src.seqlo + 1)) {
   FUNC_3(VAR_29, VAR_2);
   return (VAR_5);
  } else if ((*VAR_22)->src_node != ((void*)0) &&
      FUNC_15(VAR_22)) {
   FUNC_3(VAR_29, VAR_1);
   return (VAR_5);
  } else
   (*VAR_22)->src.state = VAR_12;
 }
 if ((*VAR_22)->src.state == VAR_12) {
  if (VAR_23 == (*VAR_22)->direction) {
   if (((VAR_31->th_flags & (VAR_20|VAR_17)) != VAR_17) ||
       (FUNC_9(VAR_31->th_ack) != (*VAR_22)->src.seqhi + 1) ||
       (FUNC_9(VAR_31->th_seq) != (*VAR_22)->src.seqlo + 1)) {
    FUNC_3(VAR_29, VAR_2);
    return (VAR_5);
   }
   (*VAR_22)->src.max_win = FUNC_0(FUNC_10(VAR_31->th_win), 1);
   if ((*VAR_22)->dst.seqhi == 1)
    (*VAR_22)->dst.seqhi = FUNC_7(FUNC_5());
   FUNC_14(((void*)0), (*VAR_22)->rule.ptr, VAR_28->af,
       &VAR_35->addr[VAR_28->sidx], &VAR_35->addr[VAR_28->didx],
       VAR_35->port[VAR_28->sidx], VAR_35->port[VAR_28->didx],
       (*VAR_22)->dst.seqhi, 0, VAR_20, 0,
       (*VAR_22)->src.mss, 0, 0, (*VAR_22)->tag, ((void*)0));
   FUNC_3(VAR_29, VAR_2);
   return (VAR_11);
  } else if (((VAR_31->th_flags & (VAR_20|VAR_17)) !=
      (VAR_20|VAR_17)) ||
      (FUNC_9(VAR_31->th_ack) != (*VAR_22)->dst.seqhi + 1)) {
   FUNC_3(VAR_29, VAR_2);
   return (VAR_5);
  } else {
   (*VAR_22)->dst.max_win = FUNC_0(FUNC_10(VAR_31->th_win), 1);
   (*VAR_22)->dst.seqlo = FUNC_9(VAR_31->th_seq);
   FUNC_14(((void*)0), (*VAR_22)->rule.ptr, VAR_28->af, VAR_28->dst,
       VAR_28->src, VAR_31->th_dport, VAR_31->th_sport,
       FUNC_9(VAR_31->th_ack), FUNC_9(VAR_31->th_seq) + 1,
       VAR_17, (*VAR_22)->src.max_win, 0, 0, 0,
       (*VAR_22)->tag, ((void*)0));
   FUNC_14(((void*)0), (*VAR_22)->rule.ptr, VAR_28->af,
       &VAR_35->addr[VAR_28->sidx], &VAR_35->addr[VAR_28->didx],
       VAR_35->port[VAR_28->sidx], VAR_35->port[VAR_28->didx],
       (*VAR_22)->src.seqhi + 1, (*VAR_22)->src.seqlo + 1,
       VAR_17, (*VAR_22)->dst.max_win, 0, 0, 1, 0, ((void*)0));
   (*VAR_22)->src.seqdiff = (*VAR_22)->dst.seqhi -
       (*VAR_22)->src.seqlo;
   (*VAR_22)->dst.seqdiff = (*VAR_22)->src.seqhi -
       (*VAR_22)->dst.seqlo;
   (*VAR_22)->src.seqhi = (*VAR_22)->src.seqlo +
       (*VAR_22)->dst.max_win;
   (*VAR_22)->dst.seqhi = (*VAR_22)->dst.seqlo +
       (*VAR_22)->src.max_win;
   (*VAR_22)->src.wscale = (*VAR_22)->dst.wscale = 0;
   (*VAR_22)->src.state = (*VAR_22)->dst.state =
       VAR_15;
   FUNC_3(VAR_29, VAR_2);
   return (VAR_11);
  }
 }

 if (((VAR_31->th_flags & (VAR_20|VAR_17)) == VAR_20) &&
     VAR_34->state >= VAR_16 &&
     VAR_33->state >= VAR_16) {
  if (VAR_21.debug >= VAR_4) {
   FUNC_19("pf: state reuse ");
   FUNC_13(*VAR_22);
   FUNC_12(VAR_31->th_flags);
   FUNC_19("\n");
  }

  (*VAR_22)->src.state = (*VAR_22)->dst.state = VAR_14;
  FUNC_18(*VAR_22, VAR_6);
  *VAR_22 = ((void*)0);
  return (VAR_5);
 }

 if ((*VAR_22)->state_flags & VAR_3) {
  if (FUNC_17(VAR_33, VAR_34, VAR_22, VAR_28, VAR_29) == VAR_5)
   return (VAR_5);
 } else {
  if (FUNC_16(VAR_33, VAR_34, VAR_22, VAR_24, VAR_25, VAR_26, VAR_28, VAR_29,
      &VAR_32) == VAR_5)
   return (VAR_5);
 }


 if ((*VAR_22)->key[VAR_10] != (*VAR_22)->key[VAR_9]) {
  struct pf_state_key *VAR_36 = (*VAR_22)->key[VAR_28->didx];

  if (FUNC_2(VAR_28->src, &VAR_36->addr[VAR_28->sidx], VAR_28->af) ||
      VAR_36->port[VAR_28->sidx] != VAR_31->th_sport)
   FUNC_11(VAR_25, VAR_28->src, &VAR_31->th_sport,
       VAR_28->ip_sum, &VAR_31->th_sum, &VAR_36->addr[VAR_28->sidx],
       VAR_36->port[VAR_28->sidx], 0, VAR_28->af);

  if (FUNC_2(VAR_28->dst, &VAR_36->addr[VAR_28->didx], VAR_28->af) ||
      VAR_36->port[VAR_28->didx] != VAR_31->th_dport)
   FUNC_11(VAR_25, VAR_28->dst, &VAR_31->th_dport,
       VAR_28->ip_sum, &VAR_31->th_sum, &VAR_36->addr[VAR_28->didx],
       VAR_36->port[VAR_28->didx], 0, VAR_28->af);
  VAR_32 = 1;
 }


 if (VAR_32)
  FUNC_8(VAR_25, VAR_26, sizeof(*VAR_31), (caddr_t)VAR_31);

 return (VAR_8);
}
