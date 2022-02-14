
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_8__ {scalar_t__ sched; } ;
struct fq_codel_si {TYPE_5__* flows; int newflows; TYPE_1__ _si; } ;
struct dn_sch_fq_codel_parms {int flows_cnt; scalar_t__ limit; int quantum; } ;
struct fq_codel_schk {struct dn_sch_fq_codel_parms cfg; } ;
struct dn_sch_inst {int dummy; } ;
struct TYPE_10__ {scalar_t__ length; } ;
struct dn_queue {TYPE_3__ ni; } ;
struct TYPE_11__ {scalar_t__ length; } ;
struct TYPE_9__ {int dropping; scalar_t__ first_above_time; } ;
struct TYPE_12__ {int active; TYPE_4__ stats; TYPE_2__ cst; int deficit; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,struct fq_codel_si*) ;
 int FUNC_3 (TYPE_5__*,struct mbuf*,struct fq_codel_si*) ;
 int VAR_0 ;
 int FUNC_4 (struct mbuf*,int,struct fq_codel_si*) ;

__attribute__((used)) static int
FUNC_5(struct dn_sch_inst *VAR_1, struct dn_queue *VAR_2,
 struct mbuf *VAR_3)
{
 struct fq_codel_si *VAR_4;
 struct fq_codel_schk *VAR_5;
 struct dn_sch_fq_codel_parms *VAR_6;
 struct dn_queue *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_7 = (struct dn_queue *)(VAR_1 + 1);
 VAR_4 = (struct fq_codel_si *)VAR_1;
 VAR_5 = (struct fq_codel_schk *)(VAR_4->_si.sched+1);
 VAR_6 = &VAR_5->cfg;


 VAR_8 = FUNC_4(VAR_3, VAR_6->flows_cnt, VAR_4);



 VAR_9 = FUNC_3(&VAR_4->flows[VAR_8], VAR_3, VAR_4);


 if (VAR_9)
  return 1;




 if (!VAR_4->flows[VAR_8].active ) {
  FUNC_1(&VAR_4->newflows, &VAR_4->flows[VAR_8], VAR_0);
  VAR_4->flows[VAR_8].deficit = VAR_6->quantum;
  VAR_4->flows[VAR_8].cst.dropping = 0;
  VAR_4->flows[VAR_8].cst.first_above_time = 0;
  VAR_4->flows[VAR_8].active = 1;

 }




 if (VAR_7->ni.length > VAR_5->cfg.limit) { FUNC_0("over limit");

  for (VAR_11 = 0; VAR_11 < VAR_5->cfg.flows_cnt; VAR_11++)
   if (VAR_4->flows[VAR_11].active)
    break;
  if (VAR_11 < VAR_5->cfg.flows_cnt) {

   for (VAR_10 = VAR_11 + 1; VAR_10 < VAR_5->cfg.flows_cnt; VAR_10++)
    if (VAR_4->flows[VAR_10].active && VAR_4->flows[VAR_10].stats.length >
     VAR_4->flows[VAR_11].stats.length)
     VAR_11 = VAR_10;
   FUNC_2(&VAR_4->flows[VAR_11], VAR_4);
   FUNC_0("maxidx = %d",VAR_11);
   VAR_9 = 1;
  }
 }

 return VAR_9;
}
