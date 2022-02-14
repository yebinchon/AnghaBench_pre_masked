
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcpl_ct_node {int pct_narc; struct pmcpl_ct_node* pct_instr; struct pmcpl_ct_node* pct_arc; int pct_samples; int pcta_callid; int pcta_samples; } ;


 int FUNC_0 (struct pmcpl_ct_node*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct pmcpl_ct_node *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->pct_narc; VAR_1++) {
  FUNC_1(&VAR_0->pct_arc[VAR_1].pcta_samples);
  FUNC_1(&VAR_0->pct_arc[VAR_1].pcta_callid);
 }

 FUNC_1(&VAR_0->pct_samples);
 FUNC_0(VAR_0->pct_arc);
 FUNC_0(VAR_0->pct_instr);
 FUNC_0(VAR_0);
}
