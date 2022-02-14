
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int beta; int alpha; int max_ecnth; int max_burst; int tupdate; int qdelay_ref; } ;
struct dn_sch_fq_pie_parms {int flows_cnt; int limit; int quantum; TYPE_1__ pcfg; } ;
struct fq_pie_schk {struct dn_sch_fq_pie_parms cfg; } ;
struct dn_schk {int dummy; } ;
struct dn_extra_parms {int * par; int name; } ;
struct TYPE_4__ {int name; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (struct dn_schk *VAR_1, struct dn_extra_parms *VAR_2) {

 struct fq_pie_schk *VAR_3 = (struct fq_pie_schk *)(VAR_1+1);
 struct dn_sch_fq_pie_parms *VAR_4;

 VAR_4 = &VAR_3->cfg;

 FUNC_0(VAR_2->name, VAR_0.name);
 VAR_2->par[0] = VAR_4->pcfg.qdelay_ref;
 VAR_2->par[1] = VAR_4->pcfg.tupdate;
 VAR_2->par[2] = VAR_4->pcfg.max_burst;
 VAR_2->par[3] = VAR_4->pcfg.max_ecnth;
 VAR_2->par[4] = VAR_4->pcfg.alpha;
 VAR_2->par[5] = VAR_4->pcfg.beta;
 VAR_2->par[6] = VAR_4->pcfg.flags;

 VAR_2->par[7] = VAR_4->quantum;
 VAR_2->par[8] = VAR_4->limit;
 VAR_2->par[9] = VAR_4->flows_cnt;

 return 0;
}
