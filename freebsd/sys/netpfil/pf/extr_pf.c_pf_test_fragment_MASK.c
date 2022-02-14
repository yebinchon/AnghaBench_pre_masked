
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
struct pfi_kif {int dummy; } ;
struct pf_ruleset {int dummy; } ;
struct TYPE_12__ {scalar_t__ port_op; int neg; int addr; } ;
struct TYPE_11__ {scalar_t__ port_op; int neg; int addr; } ;
struct pf_rule {scalar_t__ ifnot; int direction; scalar_t__ af; scalar_t__ proto; scalar_t__ tos; scalar_t__ os_fingerprint; int prob; scalar_t__ action; scalar_t__ log; scalar_t__ quick; int * anchor; scalar_t__ match_tag; scalar_t__ prio; scalar_t__ code; scalar_t__ type; scalar_t__ flagset; TYPE_5__ dst; TYPE_4__ src; TYPE_3__* skip; int kif; int evaluations; } ;
struct pf_pdesc {scalar_t__ af; scalar_t__ proto; scalar_t__ tos; TYPE_6__* pf_mtag; int dst; int src; } ;
struct pf_anchor_stackframe {int dummy; } ;
struct mbuf {int dummy; } ;
typedef scalar_t__ sa_family_t ;
struct TYPE_14__ {TYPE_2__* rules; } ;
struct TYPE_13__ {int tag; } ;
struct TYPE_10__ {struct pf_rule* ptr; } ;
struct TYPE_8__ {int ptr; } ;
struct TYPE_9__ {TYPE_1__ active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct pfi_kif*,struct mbuf*,scalar_t__,int,int ,struct pf_rule*,struct pf_rule*,struct pf_ruleset*,struct pf_pdesc*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__,int ,struct pfi_kif*,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 int FUNC_3 () ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_4 (int *,int ) ;
 struct pf_rule* FUNC_5 (int ) ;
 struct pf_rule* FUNC_6 (struct pf_rule*,int ) ;
 int VAR_17 ;
 int FUNC_7 () ;
 int VAR_18 ;
 TYPE_7__ VAR_19 ;
 int FUNC_8 (scalar_t__,struct mbuf*) ;
 int FUNC_9 (struct mbuf*,struct pf_rule*,int*,int ) ;
 int FUNC_10 (struct pf_anchor_stackframe*,int*,struct pf_ruleset**,size_t,struct pf_rule**,struct pf_rule**,int*) ;
 scalar_t__ FUNC_11 (struct pf_anchor_stackframe*,int*,struct pf_ruleset**,size_t,struct pf_rule**,struct pf_rule**,int*) ;
 scalar_t__ FUNC_12 (struct mbuf*,struct pf_pdesc*,int) ;
 scalar_t__ FUNC_13 (int ,struct pfi_kif*) ;

__attribute__((used)) static int
FUNC_14(struct pf_rule **VAR_20, int VAR_21, struct pfi_kif *VAR_22,
    struct mbuf *VAR_23, void *VAR_24, struct pf_pdesc *VAR_25, struct pf_rule **VAR_26,
    struct pf_ruleset **VAR_27)
{
 struct pf_rule *VAR_28, *VAR_29 = ((void*)0);
 struct pf_ruleset *VAR_30 = ((void*)0);
 sa_family_t VAR_31 = VAR_25->af;
 u_short VAR_32;
 int VAR_33 = -1;
 int VAR_34 = 0;
 int VAR_35 = 0;
 struct pf_anchor_stackframe VAR_36[VAR_6];

 FUNC_3();

 VAR_28 = FUNC_5(VAR_19.rules[VAR_10].active.ptr);
 while (VAR_28 != ((void*)0)) {
  VAR_28->evaluations++;
  if (FUNC_13(VAR_28->kif, VAR_22) == VAR_28->ifnot)
   VAR_28 = VAR_28->skip[VAR_14].ptr;
  else if (VAR_28->direction && VAR_28->direction != VAR_21)
   VAR_28 = VAR_28->skip[VAR_12].ptr;
  else if (VAR_28->af && VAR_28->af != VAR_31)
   VAR_28 = VAR_28->skip[VAR_11].ptr;
  else if (VAR_28->proto && VAR_28->proto != VAR_25->proto)
   VAR_28 = VAR_28->skip[VAR_15].ptr;
  else if (FUNC_2(&VAR_28->src.addr, VAR_25->src, VAR_31,
      VAR_28->src.neg, VAR_22, FUNC_0(VAR_23)))
   VAR_28 = VAR_28->skip[VAR_16].ptr;
  else if (FUNC_2(&VAR_28->dst.addr, VAR_25->dst, VAR_31,
      VAR_28->dst.neg, ((void*)0), FUNC_0(VAR_23)))
   VAR_28 = VAR_28->skip[VAR_13].ptr;
  else if (VAR_28->tos && !(VAR_28->tos == VAR_25->tos))
   VAR_28 = FUNC_6(VAR_28, VAR_18);
  else if (VAR_28->os_fingerprint != VAR_8)
   VAR_28 = FUNC_6(VAR_28, VAR_18);
  else if (VAR_25->proto == VAR_3 &&
      (VAR_28->src.port_op || VAR_28->dst.port_op))
   VAR_28 = FUNC_6(VAR_28, VAR_18);
  else if (VAR_25->proto == VAR_2 &&
      (VAR_28->src.port_op || VAR_28->dst.port_op || VAR_28->flagset))
   VAR_28 = FUNC_6(VAR_28, VAR_18);
  else if ((VAR_25->proto == VAR_0 ||
      VAR_25->proto == VAR_1) &&
      (VAR_28->type || VAR_28->code))
   VAR_28 = FUNC_6(VAR_28, VAR_18);
  else if (VAR_28->prio &&
      !FUNC_8(VAR_28->prio, VAR_23))
   VAR_28 = FUNC_6(VAR_28, VAR_18);
  else if (VAR_28->prob && VAR_28->prob <=
      (FUNC_7() % (VAR_17 - 1) + 1))
   VAR_28 = FUNC_6(VAR_28, VAR_18);
  else if (VAR_28->match_tag && !FUNC_9(VAR_23, VAR_28, &VAR_33,
      VAR_25->pf_mtag ? VAR_25->pf_mtag->tag : 0))
   VAR_28 = FUNC_6(VAR_28, VAR_18);
  else {
   if (VAR_28->anchor == ((void*)0)) {
    VAR_35 = 1;
    *VAR_20 = VAR_28;
    *VAR_26 = VAR_29;
    *VAR_27 = VAR_30;
    if ((*VAR_20)->quick)
     break;
    VAR_28 = FUNC_6(VAR_28, VAR_18);
   } else
    FUNC_10(VAR_36, &VAR_34,
        &VAR_30, VAR_10, &VAR_28, &VAR_29,
        &VAR_35);
  }
  if (VAR_28 == ((void*)0) && FUNC_11(VAR_36, &VAR_34,
      &VAR_30, VAR_10, &VAR_28, &VAR_29, &VAR_35))
   break;
 }
 VAR_28 = *VAR_20;
 VAR_29 = *VAR_26;
 VAR_30 = *VAR_27;

 FUNC_4(&VAR_32, VAR_4);

 if (VAR_28->log)
  FUNC_1(VAR_22, VAR_23, VAR_31, VAR_21, VAR_32, VAR_28, VAR_29, VAR_30, VAR_25,
      1);

 if (VAR_28->action != VAR_9)
  return (VAR_7);

 if (VAR_33 > 0 && FUNC_12(VAR_23, VAR_25, VAR_33)) {
  FUNC_4(&VAR_32, VAR_5);
  return (VAR_7);
 }

 return (VAR_9);
}
