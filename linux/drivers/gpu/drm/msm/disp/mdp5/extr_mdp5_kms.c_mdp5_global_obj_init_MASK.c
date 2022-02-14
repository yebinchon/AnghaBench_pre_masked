
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_kms {int glob_state; int dev; int glob_state_lock; } ;
struct mdp5_global_state {int base; struct mdp5_kms* mdp5_kms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 struct mdp5_global_state* FUNC_2 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct mdp5_kms *VAR_3)
{
 struct mdp5_global_state *VAR_4;

 FUNC_1(&VAR_3->glob_state_lock);

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->mdp5_kms = VAR_3;

 FUNC_0(VAR_3->dev, &VAR_3->glob_state,
        &VAR_4->base,
        &VAR_2);
 return 0;
}
