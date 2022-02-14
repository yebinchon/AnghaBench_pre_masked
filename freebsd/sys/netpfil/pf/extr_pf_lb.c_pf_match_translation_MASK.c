
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int16_t ;
struct pfi_kif {int dummy; } ;
struct pf_ruleset {int dummy; } ;
struct pf_addr_wrap {int dummy; } ;
struct pf_rule_addr {int * port; scalar_t__ port_op; int neg; struct pf_addr_wrap addr; } ;
struct TYPE_12__ {TYPE_3__* cur; } ;
struct pf_rule {scalar_t__ action; scalar_t__ ifnot; int direction; scalar_t__ proto; scalar_t__ os_fingerprint; int tag; int rtableid; int * anchor; scalar_t__ match_tag; TYPE_5__* skip; struct pf_rule_addr src; scalar_t__ af; int kif; int evaluations; struct pf_rule_addr dst; TYPE_4__ rpool; } ;
struct TYPE_15__ {int tcp; } ;
struct pf_pdesc {scalar_t__ proto; TYPE_7__ hdr; TYPE_6__* pf_mtag; scalar_t__ af; } ;
struct pf_anchor_stackframe {int dummy; } ;
struct pf_addr {int dummy; } ;
struct mbuf {int dummy; } ;
struct TYPE_16__ {TYPE_2__* rules; } ;
struct TYPE_14__ {int tag; } ;
struct TYPE_13__ {struct pf_rule* ptr; } ;
struct TYPE_11__ {struct pf_addr_wrap addr; } ;
struct TYPE_9__ {int ptr; } ;
struct TYPE_10__ {TYPE_1__ active; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct pf_addr_wrap*,struct pf_addr*,scalar_t__,int ,struct pfi_kif*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 struct pf_rule* FUNC_3 (int ) ;
 struct pf_rule* FUNC_4 (struct pf_rule*,int ) ;
 int VAR_15 ;
 TYPE_8__ VAR_16 ;
 int FUNC_5 (scalar_t__,int ,int ,int ) ;
 int FUNC_6 (struct mbuf*,struct pf_rule*,int*,int ) ;
 int FUNC_7 (struct pf_pdesc*,struct mbuf*,int,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (struct pf_anchor_stackframe*,int*,struct pf_ruleset**,int,struct pf_rule**,int *,int *) ;
 int FUNC_10 (struct pf_anchor_stackframe*,int*,struct pf_ruleset**,int,struct pf_rule**,int *,int *) ;
 scalar_t__ FUNC_11 (struct mbuf*,struct pf_pdesc*,int) ;
 scalar_t__ FUNC_12 (int ,struct pfi_kif*) ;

__attribute__((used)) static struct pf_rule *
FUNC_13(struct pf_pdesc *VAR_17, struct mbuf *VAR_18, int VAR_19,
    int VAR_20, struct pfi_kif *VAR_21, struct pf_addr *VAR_22, u_int16_t VAR_23,
    struct pf_addr *VAR_24, uint16_t VAR_25, int VAR_26,
    struct pf_anchor_stackframe *VAR_27)
{
 struct pf_rule *VAR_28, *VAR_29 = ((void*)0);
 struct pf_ruleset *VAR_30 = ((void*)0);
 int VAR_31 = -1;
 int VAR_32 = -1;
 int VAR_33 = 0;

 VAR_28 = FUNC_3(VAR_16.rules[VAR_26].active.ptr);
 while (VAR_28 && VAR_29 == ((void*)0)) {
  struct pf_rule_addr *VAR_34 = ((void*)0), *VAR_35 = ((void*)0);
  struct pf_addr_wrap *VAR_36 = ((void*)0);

  if (VAR_28->action == VAR_1 && VAR_20 == VAR_2) {
   VAR_34 = &VAR_28->dst;
   if (VAR_28->rpool.cur != ((void*)0))
    VAR_36 = &VAR_28->rpool.cur->addr;
  } else {
   VAR_34 = &VAR_28->src;
   VAR_35 = &VAR_28->dst;
  }

  VAR_28->evaluations++;
  if (FUNC_12(VAR_28->kif, VAR_21) == VAR_28->ifnot)
   VAR_28 = VAR_28->skip[VAR_11].ptr;
  else if (VAR_28->direction && VAR_28->direction != VAR_20)
   VAR_28 = VAR_28->skip[VAR_8].ptr;
  else if (VAR_28->af && VAR_28->af != VAR_17->af)
   VAR_28 = VAR_28->skip[VAR_7].ptr;
  else if (VAR_28->proto && VAR_28->proto != VAR_17->proto)
   VAR_28 = VAR_28->skip[VAR_12].ptr;
  else if (FUNC_2(&VAR_34->addr, VAR_22, VAR_17->af,
      VAR_34->neg, VAR_21, FUNC_0(VAR_18)))
   VAR_28 = VAR_28->skip[VAR_34 == &VAR_28->src ? VAR_13 :
       VAR_9].ptr;
  else if (VAR_34->port_op && !FUNC_5(VAR_34->port_op,
      VAR_34->port[0], VAR_34->port[1], VAR_23))
   VAR_28 = VAR_28->skip[VAR_34 == &VAR_28->src ? VAR_14 :
       VAR_10].ptr;
  else if (VAR_35 != ((void*)0) &&
      FUNC_2(&VAR_35->addr, VAR_24, VAR_17->af, VAR_35->neg, ((void*)0),
      FUNC_0(VAR_18)))
   VAR_28 = VAR_28->skip[VAR_9].ptr;
  else if (VAR_36 != ((void*)0) && FUNC_2(VAR_36, VAR_24, VAR_17->af,
      0, ((void*)0), FUNC_0(VAR_18)))
   VAR_28 = FUNC_4(VAR_28, VAR_15);
  else if (VAR_35 != ((void*)0) && VAR_35->port_op &&
      !FUNC_5(VAR_35->port_op, VAR_35->port[0],
      VAR_35->port[1], VAR_25))
   VAR_28 = VAR_28->skip[VAR_10].ptr;
  else if (VAR_28->match_tag && !FUNC_6(VAR_18, VAR_28, &VAR_31,
      VAR_17->pf_mtag ? VAR_17->pf_mtag->tag : 0))
   VAR_28 = FUNC_4(VAR_28, VAR_15);
  else if (VAR_28->os_fingerprint != VAR_6 && (VAR_17->proto !=
      VAR_0 || !FUNC_8(FUNC_7(VAR_17, VAR_18,
      VAR_19, VAR_17->hdr.tcp), VAR_28->os_fingerprint)))
   VAR_28 = FUNC_4(VAR_28, VAR_15);
  else {
   if (VAR_28->tag)
    VAR_31 = VAR_28->tag;
   if (VAR_28->rtableid >= 0)
    VAR_32 = VAR_28->rtableid;
   if (VAR_28->anchor == ((void*)0)) {
    VAR_29 = VAR_28;
   } else
    FUNC_9(VAR_27, &VAR_33,
        &VAR_30, VAR_26, &VAR_28, ((void*)0), ((void*)0));
  }
  if (VAR_28 == ((void*)0))
   FUNC_10(VAR_27, &VAR_33, &VAR_30,
       VAR_26, &VAR_28, ((void*)0), ((void*)0));
 }

 if (VAR_31 > 0 && FUNC_11(VAR_18, VAR_17, VAR_31))
  return (((void*)0));
 if (VAR_32 >= 0)
  FUNC_1(VAR_18, VAR_32);

 if (VAR_29 != ((void*)0) && (VAR_29->action == VAR_4 ||
     VAR_29->action == VAR_5 || VAR_29->action == VAR_3))
  return (((void*)0));
 return (VAR_29);
}
