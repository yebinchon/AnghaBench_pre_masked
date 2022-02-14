
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


struct TYPE_14__ {int list; } ;
struct TYPE_11__ {scalar_t__ tbl; int dyn; } ;
struct TYPE_12__ {int type; TYPE_4__ p; } ;
struct TYPE_13__ {TYPE_5__ addr; } ;
struct TYPE_8__ {scalar_t__ tbl; int dyn; } ;
struct TYPE_9__ {int type; TYPE_1__ p; } ;
struct TYPE_10__ {TYPE_2__ addr; } ;
struct pf_rule {scalar_t__ pqid; scalar_t__ qid; int src_nodes; int states_tot; int states_cur; TYPE_7__ rpool; scalar_t__ kif; scalar_t__ overload_tbl; TYPE_6__ dst; TYPE_3__ src; scalar_t__ match_tag; scalar_t__ tag; } ;


 int VAR_0 ;


 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pf_rule*,int ) ;
 int FUNC_3 (struct pf_rule*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,scalar_t__) ;

void
FUNC_10(struct pf_rule *VAR_2)
{

 FUNC_0();

 if (VAR_2->tag)
  FUNC_9(&VAR_1, VAR_2->tag);
 if (VAR_2->match_tag)
  FUNC_9(&VAR_1, VAR_2->match_tag);





 switch (VAR_2->src.addr.type) {
 case 129:
  FUNC_6(VAR_2->src.addr.p.dyn);
  break;
 case 128:
  FUNC_8(VAR_2->src.addr.p.tbl);
  break;
 }
 switch (VAR_2->dst.addr.type) {
 case 129:
  FUNC_6(VAR_2->dst.addr.p.dyn);
  break;
 case 128:
  FUNC_8(VAR_2->dst.addr.p.tbl);
  break;
 }
 if (VAR_2->overload_tbl)
  FUNC_8(VAR_2->overload_tbl);
 if (VAR_2->kif)
  FUNC_7(VAR_2->kif);
 FUNC_3(VAR_2);
 FUNC_4(&VAR_2->rpool.list);
 FUNC_1(VAR_2->states_cur);
 FUNC_1(VAR_2->states_tot);
 FUNC_1(VAR_2->src_nodes);
 FUNC_2(VAR_2, VAR_0);
}
