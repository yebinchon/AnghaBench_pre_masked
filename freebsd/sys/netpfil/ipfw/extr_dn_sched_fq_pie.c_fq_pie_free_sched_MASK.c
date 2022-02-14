
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fq_pie_si {TYPE_2__* si_extra; } ;
struct TYPE_3__ {int flows_cnt; } ;
struct fq_pie_schk {TYPE_1__ cfg; } ;
struct fq_pie_flow {int dummy; } ;
struct dn_sch_inst {scalar_t__ sched; } ;
struct TYPE_4__ {struct fq_pie_flow* flows; } ;


 int FUNC_0 (struct fq_pie_flow*) ;

__attribute__((used)) static int
FUNC_1(struct dn_sch_inst *VAR_0)
{
 struct fq_pie_si *VAR_1;
 struct fq_pie_schk *VAR_2;
 struct fq_pie_flow *VAR_3;
 int VAR_4;

 VAR_1 = (struct fq_pie_si *)VAR_0;
 VAR_2 = (struct fq_pie_schk *)(VAR_0->sched+1);
 VAR_3 = VAR_1->si_extra->flows;
 for (VAR_4 = 0; VAR_4 < VAR_2->cfg.flows_cnt; VAR_4++) {
  FUNC_0(&VAR_3[VAR_4]);
 }
 VAR_1->si_extra = ((void*)0);
 return 0;
}
