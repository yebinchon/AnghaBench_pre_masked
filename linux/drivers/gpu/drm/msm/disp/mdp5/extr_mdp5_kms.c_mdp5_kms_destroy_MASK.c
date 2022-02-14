
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_kms {struct msm_gem_address_space* aspace; } ;
struct msm_gem_address_space {TYPE_2__* mmu; } ;
struct mdp5_kms {int num_hwmixers; int num_hwpipes; int * hwpipes; int * hwmixers; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* detach ) (TYPE_2__*,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct msm_gem_address_space*) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 struct mdp5_kms* FUNC_5 (int ) ;
 int FUNC_6 (struct msm_kms*) ;

__attribute__((used)) static void FUNC_7(struct msm_kms *VAR_1)
{
 struct mdp5_kms *VAR_2 = FUNC_5(FUNC_6(VAR_1));
 struct msm_gem_address_space *VAR_3 = VAR_1->aspace;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_hwmixers; VAR_4++)
  FUNC_1(VAR_2->hwmixers[VAR_4]);

 for (VAR_4 = 0; VAR_4 < VAR_2->num_hwpipes; VAR_4++)
  FUNC_2(VAR_2->hwpipes[VAR_4]);

 if (VAR_3) {
  VAR_3->mmu->funcs->detach(VAR_3->mmu,
    VAR_0, FUNC_0(VAR_0));
  FUNC_3(VAR_3);
 }
}
