
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


typedef int u_short ;
typedef int u_int8_t ;
typedef scalar_t__ u_int16_t ;
struct tcphdr {int th_flags; int th_off; scalar_t__ th_x2; scalar_t__ th_urp; void* th_sum; int th_ack; int th_dport; int th_sport; } ;
struct pfi_kif {int dummy; } ;
struct TYPE_12__ {int * port; scalar_t__ port_op; int neg; int addr; } ;
struct TYPE_11__ {int * port; scalar_t__ port_op; int neg; int addr; } ;
struct pf_rule {scalar_t__ ifnot; int direction; scalar_t__ af; scalar_t__ proto; scalar_t__ os_fingerprint; scalar_t__ action; int rule_flag; scalar_t__ log; scalar_t__ max_mss; int * bytes; int * packets; TYPE_6__* skip; TYPE_5__ dst; TYPE_4__ src; int kif; int evaluations; } ;
struct TYPE_8__ {struct tcphdr* tcp; } ;
struct pf_pdesc {scalar_t__ af; scalar_t__ proto; int flags; scalar_t__ tot_len; int dst; int src; TYPE_1__ hdr; } ;
struct mbuf {int dummy; } ;
typedef scalar_t__ sa_family_t ;
typedef int caddr_t ;
struct TYPE_14__ {TYPE_3__* rules; } ;
struct TYPE_13__ {struct pf_rule* ptr; } ;
struct TYPE_9__ {int ptr; } ;
struct TYPE_10__ {TYPE_2__ active; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 int VAR_1 ;
 int FUNC_1 (struct pfi_kif*,struct mbuf*,int ,int,int ,struct pf_rule*,int *,int *,struct pf_pdesc*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__,int ,struct pfi_kif*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_3 () ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int FUNC_4 (int *,int ) ;
 struct pf_rule* FUNC_5 (int ) ;
 struct pf_rule* FUNC_6 (struct pf_rule*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (struct mbuf*,int,int,int ) ;
 TYPE_7__ VAR_25 ;
 int FUNC_8 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_9 (struct pf_rule*,struct mbuf*,struct tcphdr*,int,scalar_t__) ;
 int FUNC_10 (struct pf_pdesc*,struct mbuf*,int,struct tcphdr*) ;
 int FUNC_11 (int ,scalar_t__) ;
 void* FUNC_12 (struct mbuf*,void*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_13 (int ,struct pfi_kif*) ;

int
FUNC_14(int VAR_26, struct pfi_kif *VAR_27, struct mbuf *VAR_28, int VAR_29,
    int VAR_30, void *VAR_31, struct pf_pdesc *VAR_32)
{
 struct pf_rule *VAR_33, *VAR_34 = ((void*)0);
 struct tcphdr *VAR_35 = VAR_32->hdr.tcp;
 int VAR_36 = 0;
 u_short VAR_37;
 u_int8_t VAR_38;
 sa_family_t VAR_39 = VAR_32->af;

 FUNC_3();

 VAR_33 = FUNC_5(VAR_25.rules[VAR_9].active.ptr);
 while (VAR_33 != ((void*)0)) {
  VAR_33->evaluations++;
  if (FUNC_13(VAR_33->kif, VAR_27) == VAR_33->ifnot)
   VAR_33 = VAR_33->skip[VAR_14].ptr;
  else if (VAR_33->direction && VAR_33->direction != VAR_26)
   VAR_33 = VAR_33->skip[VAR_11].ptr;
  else if (VAR_33->af && VAR_33->af != VAR_39)
   VAR_33 = VAR_33->skip[VAR_10].ptr;
  else if (VAR_33->proto && VAR_33->proto != VAR_32->proto)
   VAR_33 = VAR_33->skip[VAR_15].ptr;
  else if (FUNC_2(&VAR_33->src.addr, VAR_32->src, VAR_39,
      VAR_33->src.neg, VAR_27, FUNC_0(VAR_28)))
   VAR_33 = VAR_33->skip[VAR_16].ptr;
  else if (VAR_33->src.port_op && !FUNC_8(VAR_33->src.port_op,
       VAR_33->src.port[0], VAR_33->src.port[1], VAR_35->th_sport))
   VAR_33 = VAR_33->skip[VAR_17].ptr;
  else if (FUNC_2(&VAR_33->dst.addr, VAR_32->dst, VAR_39,
      VAR_33->dst.neg, ((void*)0), FUNC_0(VAR_28)))
   VAR_33 = VAR_33->skip[VAR_12].ptr;
  else if (VAR_33->dst.port_op && !FUNC_8(VAR_33->dst.port_op,
       VAR_33->dst.port[0], VAR_33->dst.port[1], VAR_35->th_dport))
   VAR_33 = VAR_33->skip[VAR_13].ptr;
  else if (VAR_33->os_fingerprint != VAR_6 && !FUNC_11(
       FUNC_10(VAR_32, VAR_28, VAR_30, VAR_35),
       VAR_33->os_fingerprint))
   VAR_33 = FUNC_6(VAR_33, VAR_24);
  else {
   VAR_34 = VAR_33;
   break;
  }
 }

 if (VAR_34 == ((void*)0) || VAR_34->action == VAR_5)
  return (VAR_8);
 else {
  VAR_33->packets[VAR_26 == VAR_7]++;
  VAR_33->bytes[VAR_26 == VAR_7] += VAR_32->tot_len;
 }

 if (VAR_34->rule_flag & VAR_3)
  VAR_32->flags |= VAR_1;

 VAR_38 = VAR_35->th_flags;
 if (VAR_38 & VAR_22) {

  if (VAR_38 & VAR_21)
   goto tcp_drop;

  if (VAR_38 & VAR_19)
   goto tcp_drop;
 } else {

  if (!(VAR_38 & (VAR_18|VAR_21)))
   goto tcp_drop;
 }

 if (!(VAR_38 & VAR_18)) {

  if ((VAR_38 & VAR_19) || (VAR_38 & VAR_20) || (VAR_38 & VAR_23))
   goto tcp_drop;
 }


 if (VAR_35->th_off < (sizeof(struct tcphdr) >> 2))
  goto tcp_drop;


 if (VAR_38 != VAR_35->th_flags || VAR_35->th_x2 != 0) {
  u_int16_t VAR_40, VAR_41;

  VAR_40 = *(u_int16_t *)(&VAR_35->th_ack + 1);
  VAR_35->th_flags = VAR_38;
  VAR_35->th_x2 = 0;
  VAR_41 = *(u_int16_t *)(&VAR_35->th_ack + 1);

  VAR_35->th_sum = FUNC_12(VAR_28, VAR_35->th_sum, VAR_40, VAR_41, 0);
  VAR_36 = 1;
 }


 if (!(VAR_38 & VAR_23) && VAR_35->th_urp) {
  VAR_35->th_sum = FUNC_12(VAR_28, VAR_35->th_sum, VAR_35->th_urp,
      0, 0);
  VAR_35->th_urp = 0;
  VAR_36 = 1;
 }


 if (VAR_33->max_mss && FUNC_9(VAR_33, VAR_28, VAR_35, VAR_30, VAR_32->af))
  VAR_36 = 1;


 if (VAR_36)
  FUNC_7(VAR_28, VAR_30, sizeof(*VAR_35), (caddr_t)VAR_35);

 return (VAR_8);

 tcp_drop:
 FUNC_4(&VAR_37, VAR_2);
 if (VAR_34 != ((void*)0) && VAR_33->log)
  FUNC_1(VAR_27, VAR_28, VAR_0, VAR_26, VAR_37, VAR_33, ((void*)0), ((void*)0), VAR_32,
      1);
 return (VAR_4);
}
