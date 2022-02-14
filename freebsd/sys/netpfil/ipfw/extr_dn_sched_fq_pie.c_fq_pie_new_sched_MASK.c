
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct fq_pie_si_extra {int dummy; } ;
struct TYPE_8__ {int oid; } ;
struct dn_queue {int fs; struct dn_sch_inst* _si; TYPE_1__ ni; } ;
struct fq_pie_si {TYPE_5__* si_extra; int oldflows; int newflows; int perturbation; struct dn_queue main_q; } ;
struct TYPE_11__ {int flows_cnt; int pcfg; } ;
struct fq_pie_schk {TYPE_4__ cfg; } ;
struct TYPE_10__ {int * parms; } ;
struct fq_pie_flow {TYPE_5__* psi_extra; TYPE_3__ pst; } ;
struct dn_sch_inst {TYPE_2__* sched; } ;
struct TYPE_13__ {int ref_count; } ;
struct TYPE_12__ {scalar_t__ nr_active_q; struct fq_pie_flow* flows; } ;
struct TYPE_9__ {int fs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_7__ VAR_5 ;
 int FUNC_2 (TYPE_5__*,int ) ;
 TYPE_5__* FUNC_3 (int,int ,int) ;
 struct fq_pie_flow* FUNC_4 (int,int,int ,int) ;
 int FUNC_5 (struct fq_pie_flow*,struct fq_pie_schk*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct dn_sch_inst *VAR_6)
{
 struct fq_pie_si *VAR_7;
 struct dn_queue *VAR_8;
 struct fq_pie_schk *VAR_9;
 struct fq_pie_flow *VAR_10;
 int VAR_11;

 VAR_7 = (struct fq_pie_si *)VAR_6;
 VAR_9 = (struct fq_pie_schk *)(VAR_6->sched+1);

 if(VAR_7->si_extra) {
  FUNC_0("si already configured!");
  return 0;
 }


 VAR_8 = &VAR_7->main_q;
 FUNC_7(&VAR_8->ni.oid, VAR_0, sizeof(*VAR_8));
 VAR_8->_si = VAR_6;
 VAR_8->fs = VAR_6->sched->fs;


 VAR_7->si_extra = FUNC_3(sizeof(struct fq_pie_si_extra),
   VAR_2, VAR_3 | VAR_4);
 if (VAR_7->si_extra == ((void*)0)) {
  FUNC_0("cannot allocate memory for fq_pie si extra vars");
  return VAR_1 ;
 }

 VAR_7->si_extra->flows = FUNC_4(VAR_9->cfg.flows_cnt,
     sizeof(struct fq_pie_flow), VAR_2, VAR_3 | VAR_4);
 VAR_10 = VAR_7->si_extra->flows;
 if (VAR_10 == ((void*)0)) {
  FUNC_2(VAR_7->si_extra, VAR_2);
  VAR_7->si_extra = ((void*)0);
  FUNC_0("cannot allocate memory for fq_pie flows");
  return VAR_1 ;
 }


 VAR_7->perturbation = FUNC_6();
 VAR_7->si_extra->nr_active_q = 0;


 FUNC_1(&VAR_7->newflows);
 FUNC_1(&VAR_7->oldflows);


 for (VAR_11 = 0; VAR_11 < VAR_9->cfg.flows_cnt; VAR_11++) {
  VAR_10[VAR_11].pst.parms = &VAR_9->cfg.pcfg;
  VAR_10[VAR_11].psi_extra = VAR_7->si_extra;
  FUNC_5(&VAR_10[VAR_11], VAR_9);
 }

 VAR_5.ref_count++;

 return 0;
}
