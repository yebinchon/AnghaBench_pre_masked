
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_ctl_manager {int nlm; } ;
struct mdp5_ctl {int hw_lock; int id; struct mdp5_ctl_manager* ctlm; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mdp5_ctl*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct mdp5_ctl *VAR_0)
{
 unsigned long VAR_1;
 struct mdp5_ctl_manager *VAR_2 = VAR_0->ctlm;
 int VAR_3;

 FUNC_3(&VAR_0->hw_lock, VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_2->nlm; VAR_3++) {
  FUNC_2(VAR_0, FUNC_1(VAR_0->id, VAR_3), 0x0);
  FUNC_2(VAR_0, FUNC_0(VAR_0->id, VAR_3), 0x0);
 }

 FUNC_4(&VAR_0->hw_lock, VAR_1);
}
