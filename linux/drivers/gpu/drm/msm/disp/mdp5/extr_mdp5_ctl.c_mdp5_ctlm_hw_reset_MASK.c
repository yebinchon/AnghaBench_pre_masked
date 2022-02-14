
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_ctl_manager {int nctl; struct mdp5_ctl* ctls; } ;
struct mdp5_ctl {int hw_lock; int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mdp5_ctl*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct mdp5_ctl_manager *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nctl; VAR_2++) {
  struct mdp5_ctl *VAR_3 = &VAR_0->ctls[VAR_2];

  FUNC_2(&VAR_3->hw_lock, VAR_1);
  FUNC_1(VAR_3, FUNC_0(VAR_3->id), 0);
  FUNC_3(&VAR_3->hw_lock, VAR_1);
 }
}
