
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct seq_file {struct c4iw_dev* private; } ;
struct TYPE_16__ {int fail; int max; int cur; int total; } ;
struct TYPE_15__ {int fail; int max; int cur; int total; } ;
struct TYPE_14__ {int fail; int max; int cur; int total; } ;
struct TYPE_13__ {int fail; int max; int cur; int total; } ;
struct TYPE_12__ {int fail; int max; int cur; int total; } ;
struct TYPE_11__ {int fail; int max; int cur; int total; } ;
struct TYPE_10__ {int fail; int max; int cur; int total; } ;
struct TYPE_17__ {int neg_adv; int pas_ofld_conn_fails; int act_ofld_conn_fails; int tcam_full; int db_fc_interruptions; int db_state_transitions; int db_drop; int db_empty; int db_full; TYPE_7__ ocqp; TYPE_6__ rqt; TYPE_5__ pbl; TYPE_4__ stag; TYPE_3__ srqt; TYPE_2__ qid; TYPE_1__ pd; } ;
struct TYPE_18__ {TYPE_8__ stats; } ;
struct c4iw_dev {size_t db_state; int avail_ird; TYPE_9__ rdev; } ;


 int * VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct c4iw_dev *VAR_3 = VAR_1->private;

 FUNC_0(VAR_1, "   Object: %10s %10s %10s %10s\n", "Total", "Current",
     "Max", "Fail");
 FUNC_0(VAR_1, "     PDID: %10llu %10llu %10llu %10llu\n",
   VAR_3->rdev.stats.pd.total, VAR_3->rdev.stats.pd.cur,
   VAR_3->rdev.stats.pd.max, VAR_3->rdev.stats.pd.fail);
 FUNC_0(VAR_1, "      QID: %10llu %10llu %10llu %10llu\n",
   VAR_3->rdev.stats.qid.total, VAR_3->rdev.stats.qid.cur,
   VAR_3->rdev.stats.qid.max, VAR_3->rdev.stats.qid.fail);
 FUNC_0(VAR_1, "     SRQS: %10llu %10llu %10llu %10llu\n",
     VAR_3->rdev.stats.srqt.total, VAR_3->rdev.stats.srqt.cur,
   VAR_3->rdev.stats.srqt.max, VAR_3->rdev.stats.srqt.fail);
 FUNC_0(VAR_1, "   TPTMEM: %10llu %10llu %10llu %10llu\n",
   VAR_3->rdev.stats.stag.total, VAR_3->rdev.stats.stag.cur,
   VAR_3->rdev.stats.stag.max, VAR_3->rdev.stats.stag.fail);
 FUNC_0(VAR_1, "   PBLMEM: %10llu %10llu %10llu %10llu\n",
   VAR_3->rdev.stats.pbl.total, VAR_3->rdev.stats.pbl.cur,
   VAR_3->rdev.stats.pbl.max, VAR_3->rdev.stats.pbl.fail);
 FUNC_0(VAR_1, "   RQTMEM: %10llu %10llu %10llu %10llu\n",
   VAR_3->rdev.stats.rqt.total, VAR_3->rdev.stats.rqt.cur,
   VAR_3->rdev.stats.rqt.max, VAR_3->rdev.stats.rqt.fail);
 FUNC_0(VAR_1, "  OCQPMEM: %10llu %10llu %10llu %10llu\n",
   VAR_3->rdev.stats.ocqp.total, VAR_3->rdev.stats.ocqp.cur,
   VAR_3->rdev.stats.ocqp.max, VAR_3->rdev.stats.ocqp.fail);
 FUNC_0(VAR_1, "  DB FULL: %10llu\n", VAR_3->rdev.stats.db_full);
 FUNC_0(VAR_1, " DB EMPTY: %10llu\n", VAR_3->rdev.stats.db_empty);
 FUNC_0(VAR_1, "  DB DROP: %10llu\n", VAR_3->rdev.stats.db_drop);
 FUNC_0(VAR_1, " DB State: %s Transitions %llu FC Interruptions %llu\n",
     VAR_0[VAR_3->db_state],
     VAR_3->rdev.stats.db_state_transitions,
     VAR_3->rdev.stats.db_fc_interruptions);
 FUNC_0(VAR_1, "TCAM_FULL: %10llu\n", VAR_3->rdev.stats.tcam_full);
 FUNC_0(VAR_1, "ACT_OFLD_CONN_FAILS: %10llu\n",
     VAR_3->rdev.stats.act_ofld_conn_fails);
 FUNC_0(VAR_1, "PAS_OFLD_CONN_FAILS: %10llu\n",
     VAR_3->rdev.stats.pas_ofld_conn_fails);
 FUNC_0(VAR_1, "NEG_ADV_RCVD: %10llu\n", VAR_3->rdev.stats.neg_adv);
 FUNC_0(VAR_1, "AVAILABLE IRD: %10u\n", VAR_3->avail_ird);
 return 0;
}
