
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmid_read {int evtid; int first; scalar_t__ val; struct rdt_domain* d; struct rdtgroup* rgrp; } ;
struct rdtgroup {int dummy; } ;
struct rdt_domain {int cpu_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct rmid_read*,int) ;

void FUNC_1(struct rmid_read *VAR_1, struct rdt_domain *VAR_2,
      struct rdtgroup *VAR_3, int VAR_4, int VAR_5)
{



 VAR_1->rgrp = VAR_3;
 VAR_1->evtid = VAR_4;
 VAR_1->d = VAR_2;
 VAR_1->val = 0;
 VAR_1->first = VAR_5;

 FUNC_0(&VAR_2->cpu_mask, VAR_0, VAR_1, 1);
}
