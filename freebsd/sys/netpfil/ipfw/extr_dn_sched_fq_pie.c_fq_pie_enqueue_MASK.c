
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_6__ {scalar_t__ sched; } ;
struct fq_pie_si {int newflows; TYPE_2__ _si; TYPE_1__* si_extra; } ;
struct dn_sch_fq_pie_parms {int flows_cnt; scalar_t__ limit; int quantum; } ;
struct fq_pie_schk {struct dn_sch_fq_pie_parms cfg; } ;
struct TYPE_8__ {scalar_t__ length; } ;
struct fq_pie_flow {int active; TYPE_4__ stats; int deficit; } ;
struct dn_sch_inst {int dummy; } ;
struct TYPE_7__ {scalar_t__ length; } ;
struct dn_queue {TYPE_3__ ni; } ;
struct TYPE_5__ {struct fq_pie_flow* flows; } ;


 int FUNC_0 (int *,struct fq_pie_flow*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct fq_pie_flow*) ;
 int FUNC_2 (struct mbuf*,int,struct fq_pie_si*) ;
 int FUNC_3 (struct fq_pie_flow*,struct fq_pie_si*) ;
 int FUNC_4 (struct fq_pie_flow*,struct mbuf*,struct fq_pie_si*) ;

__attribute__((used)) static int
FUNC_5(struct dn_sch_inst *VAR_1, struct dn_queue *VAR_2,
 struct mbuf *VAR_3)
{
 struct fq_pie_si *VAR_4;
 struct fq_pie_schk *VAR_5;
 struct dn_sch_fq_pie_parms *VAR_6;
 struct dn_queue *VAR_7;
 struct fq_pie_flow *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_7 = (struct dn_queue *)(VAR_1 + 1);
 VAR_4 = (struct fq_pie_si *)VAR_1;
 VAR_8 = VAR_4->si_extra->flows;
 VAR_5 = (struct fq_pie_schk *)(VAR_4->_si.sched+1);
 VAR_6 = &VAR_5->cfg;


 VAR_9 = FUNC_2(VAR_3, VAR_6->flows_cnt, VAR_4);




 VAR_10 = FUNC_4(&VAR_8[VAR_9], VAR_3, VAR_4);


 if (VAR_10)
  return 1;




 if (!VAR_8[VAR_9].active) {
  FUNC_0(&VAR_4->newflows, &VAR_8[VAR_9], VAR_0);
  VAR_8[VAR_9].deficit = VAR_6->quantum;
  FUNC_1(&VAR_8[VAR_9]);
  VAR_8[VAR_9].active = 1;
 }




 if (VAR_7->ni.length > VAR_5->cfg.limit) {

  for (VAR_12 = 0; VAR_12 < VAR_5->cfg.flows_cnt; VAR_12++)
   if (VAR_8[VAR_12].active)
    break;
  if (VAR_12 < VAR_5->cfg.flows_cnt) {

   for (VAR_11 = VAR_12 + 1; VAR_11 < VAR_5->cfg.flows_cnt; VAR_11++)
    if (VAR_8[VAR_11].active && VAR_8[VAR_11].stats.length >
     VAR_8[VAR_12].stats.length)
     VAR_12 = VAR_11;
   FUNC_3(&VAR_8[VAR_12], VAR_4);
   VAR_10 = 1;
  }
 }

 return VAR_10;
}
