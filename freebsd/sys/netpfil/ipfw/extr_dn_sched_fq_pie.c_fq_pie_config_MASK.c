
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ qdelay_ref; scalar_t__ tupdate; scalar_t__ max_burst; scalar_t__ max_ecnth; scalar_t__ alpha; scalar_t__ beta; scalar_t__ flags; } ;
struct dn_sch_fq_pie_parms {scalar_t__ quantum; scalar_t__ limit; scalar_t__ flows_cnt; TYPE_3__ pcfg; } ;
struct fq_pie_schk {struct dn_sch_fq_pie_parms cfg; } ;
struct dn_schk {scalar_t__ cfg; } ;
struct TYPE_5__ {int len; scalar_t__ subtype; } ;
struct dn_extra_parms {scalar_t__* par; TYPE_1__ oid; } ;
struct TYPE_6__ {scalar_t__ qdelay_ref; scalar_t__ tupdate; scalar_t__ max_burst; scalar_t__ max_ecnth; scalar_t__ alpha; scalar_t__ beta; } ;
struct TYPE_8__ {scalar_t__ quantum; scalar_t__ limit; scalar_t__ flows_cnt; TYPE_2__ pcfg; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct dn_schk *VAR_4)
{
 struct fq_pie_schk *VAR_5;
 struct dn_extra_parms *VAR_6;
 struct dn_sch_fq_pie_parms *VAR_7;

 VAR_5 = (struct fq_pie_schk *)(VAR_4+1);
 VAR_6 = (struct dn_extra_parms *) VAR_4->cfg;






 if (VAR_6 && VAR_6->oid.len ==sizeof(*VAR_6) &&
  VAR_6->oid.subtype == VAR_1) {

  VAR_7 = &VAR_5->cfg;
  if (VAR_6->par[0] < 0)
   VAR_7->pcfg.qdelay_ref = VAR_3.pcfg.qdelay_ref;
  else
   VAR_7->pcfg.qdelay_ref = VAR_6->par[0];
  if (VAR_6->par[1] < 0)
   VAR_7->pcfg.tupdate = VAR_3.pcfg.tupdate;
  else
   VAR_7->pcfg.tupdate = VAR_6->par[1];
  if (VAR_6->par[2] < 0)
   VAR_7->pcfg.max_burst = VAR_3.pcfg.max_burst;
  else
   VAR_7->pcfg.max_burst = VAR_6->par[2];
  if (VAR_6->par[3] < 0)
   VAR_7->pcfg.max_ecnth = VAR_3.pcfg.max_ecnth;
  else
   VAR_7->pcfg.max_ecnth = VAR_6->par[3];
  if (VAR_6->par[4] < 0)
   VAR_7->pcfg.alpha = VAR_3.pcfg.alpha;
  else
   VAR_7->pcfg.alpha = VAR_6->par[4];
  if (VAR_6->par[5] < 0)
   VAR_7->pcfg.beta = VAR_3.pcfg.beta;
  else
   VAR_7->pcfg.beta = VAR_6->par[5];
  if (VAR_6->par[6] < 0)
   VAR_7->pcfg.flags = 0;
  else
   VAR_7->pcfg.flags = VAR_6->par[6];


  if (VAR_6->par[7] < 0)
   VAR_7->quantum = VAR_3.quantum;
  else
   VAR_7->quantum = VAR_6->par[7];
  if (VAR_6->par[8] < 0)
   VAR_7->limit = VAR_3.limit;
  else
   VAR_7->limit = VAR_6->par[8];
  if (VAR_6->par[9] < 0)
   VAR_7->flows_cnt = VAR_3.flows_cnt;
  else
   VAR_7->flows_cnt = VAR_6->par[9];


  VAR_7->pcfg.qdelay_ref = FUNC_0(VAR_7->pcfg.qdelay_ref,
   1, 5 * VAR_0);
  VAR_7->pcfg.tupdate = FUNC_0(VAR_7->pcfg.tupdate,
   1, 5 * VAR_0);
  VAR_7->pcfg.max_burst = FUNC_0(VAR_7->pcfg.max_burst,
   0, 5 * VAR_0);
  VAR_7->pcfg.max_ecnth = FUNC_0(VAR_7->pcfg.max_ecnth,
   0, VAR_2);
  VAR_7->pcfg.alpha = FUNC_0(VAR_7->pcfg.alpha, 0, 7 * VAR_2);
  VAR_7->pcfg.beta = FUNC_0(VAR_7->pcfg.beta, 0, 7 * VAR_2);

  VAR_7->quantum = FUNC_0(VAR_7->quantum,1,9000);
  VAR_7->limit= FUNC_0(VAR_7->limit,1,20480);
  VAR_7->flows_cnt= FUNC_0(VAR_7->flows_cnt,1,65536);
 }
 else {
  FUNC_1("Wrong parameters for fq_pie scheduler");
  return 1;
 }

 return 0;
}
