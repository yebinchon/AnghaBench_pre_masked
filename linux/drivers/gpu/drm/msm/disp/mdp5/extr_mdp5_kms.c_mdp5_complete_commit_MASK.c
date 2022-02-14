
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_kms {int dummy; } ;
struct mdp5_kms {scalar_t__ smp; } ;
struct mdp5_global_state {int smp; } ;


 struct mdp5_global_state* FUNC_0 (struct mdp5_kms*) ;
 int FUNC_1 (scalar_t__,int *) ;
 struct mdp5_kms* FUNC_2 (int ) ;
 int FUNC_3 (struct msm_kms*) ;

__attribute__((used)) static void FUNC_4(struct msm_kms *VAR_0, unsigned VAR_1)
{
 struct mdp5_kms *VAR_2 = FUNC_2(FUNC_3(VAR_0));
 struct mdp5_global_state *VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_2->smp)
  FUNC_1(VAR_2->smp, &VAR_3->smp);
}
