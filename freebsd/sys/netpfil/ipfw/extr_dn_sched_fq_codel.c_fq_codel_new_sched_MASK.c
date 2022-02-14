
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int oid; } ;
struct dn_queue {int fs; struct dn_sch_inst* _si; TYPE_1__ ni; } ;
struct fq_codel_si {TYPE_5__* flows; int oldflows; int newflows; int perturbation; struct dn_queue main_q; } ;
struct TYPE_9__ {int flows_cnt; } ;
struct fq_codel_schk {TYPE_3__ cfg; } ;
struct fq_codel_flow {int dummy; } ;
struct dn_sch_inst {TYPE_2__* sched; } ;
struct TYPE_12__ {int ref_count; } ;
struct TYPE_10__ {int maxpkt_size; } ;
struct TYPE_11__ {TYPE_4__ cst; } ;
struct TYPE_8__ {int fs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_6__ VAR_5 ;
 TYPE_5__* FUNC_2 (int,int,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct dn_sch_inst *VAR_6)
{
 struct fq_codel_si *VAR_7;
 struct dn_queue *VAR_8;
 struct fq_codel_schk *VAR_9;
 int VAR_10;

 VAR_7 = (struct fq_codel_si *)VAR_6;
 VAR_9 = (struct fq_codel_schk *)(VAR_6->sched+1);

 if(VAR_7->flows) {
  FUNC_0("si already configured!");
  return 0;
 }


 VAR_8 = &VAR_7->main_q;
 FUNC_4(&VAR_8->ni.oid, VAR_0, sizeof(*VAR_8));
 VAR_8->_si = VAR_6;
 VAR_8->fs = VAR_6->sched->fs;


 VAR_7->flows = FUNC_2(VAR_9->cfg.flows_cnt,
     sizeof(struct fq_codel_flow), VAR_2, VAR_3 | VAR_4);
 if (VAR_7->flows == ((void*)0)) {
  FUNC_0("cannot allocate memory for fq_codel configuration parameters");
  return VAR_1 ;
 }


 VAR_7->perturbation = FUNC_3();


 FUNC_1(&VAR_7->newflows);
 FUNC_1(&VAR_7->oldflows);


 for (VAR_10 = 0; VAR_10 < VAR_9->cfg.flows_cnt; VAR_10++) {

  VAR_7->flows[VAR_10].cst.maxpkt_size = 500;
 }

 VAR_5.ref_count++;
 return 0;
}
