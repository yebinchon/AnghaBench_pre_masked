
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu {struct intr_request* pc_irfree; struct intr_request* pc_irpool; int pc_irhead; int * pc_irtail; } ;
struct intr_request {struct intr_request* ir_next; } ;


 int VAR_0 ;

void
FUNC_0(struct pcpu *VAR_1, int VAR_2, size_t VAR_3)
{
 struct intr_request *VAR_4;
 int VAR_5;

 VAR_1->pc_irtail = &VAR_1->pc_irhead;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = &VAR_1->pc_irpool[VAR_5];
  VAR_4->ir_next = VAR_1->pc_irfree;
  VAR_1->pc_irfree = VAR_4;
 }
}
