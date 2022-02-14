
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcpl_ct_node {int pct_color; int * pct_instr; scalar_t__ pct_instr_c; scalar_t__ pct_ninstr; int * pct_arc; scalar_t__ pct_arc_c; scalar_t__ pct_narc; scalar_t__ pct_func; int * pct_image; int * pct_sym; int pct_samples; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct pmcpl_ct_node* FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct pmcpl_ct_node *
FUNC_3(void)
{
 struct pmcpl_ct_node *VAR_2;

 if ((VAR_2 = FUNC_1(sizeof(*VAR_2))) == ((void*)0))
  FUNC_0(VAR_0, "ERROR: Cannot allocate callgraph node");

 FUNC_2(&VAR_2->pct_samples);

 VAR_2->pct_sym = ((void*)0);
 VAR_2->pct_image = ((void*)0);
 VAR_2->pct_func = 0;

 VAR_2->pct_narc = 0;
 VAR_2->pct_arc_c = 0;
 VAR_2->pct_arc = ((void*)0);

 VAR_2->pct_ninstr = 0;
 VAR_2->pct_instr_c = 0;
 VAR_2->pct_instr = ((void*)0);

 VAR_2->pct_color = VAR_1;

 return (VAR_2);
}
