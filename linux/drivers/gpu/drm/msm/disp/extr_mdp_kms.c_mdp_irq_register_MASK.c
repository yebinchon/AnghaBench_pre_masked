
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp_kms {int in_irq; int irq_list; } ;
struct mdp_irq {int registered; int node; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct mdp_kms*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct mdp_kms *VAR_1, struct mdp_irq *VAR_2)
{
 unsigned long VAR_3;
 bool VAR_4 = 0;

 FUNC_2(&VAR_0, VAR_3);

 if (!VAR_2->registered) {
  VAR_2->registered = 1;
  FUNC_0(&VAR_2->node, &VAR_1->irq_list);
  VAR_4 = !VAR_1->in_irq;
 }

 FUNC_3(&VAR_0, VAR_3);

 if (VAR_4)
  FUNC_1(VAR_1);
}
