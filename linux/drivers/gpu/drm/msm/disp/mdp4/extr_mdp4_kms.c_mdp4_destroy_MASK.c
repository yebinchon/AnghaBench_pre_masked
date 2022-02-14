
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_kms {struct msm_gem_address_space* aspace; } ;
struct msm_gem_address_space {TYPE_3__* mmu; } ;
struct mdp4_kms {scalar_t__ rpm_enabled; int blank_cursor_bo; scalar_t__ blank_cursor_iova; TYPE_2__* dev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_5__ {struct device* dev; } ;
struct TYPE_4__ {int (* detach ) (TYPE_3__*,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct mdp4_kms*) ;
 int FUNC_3 (struct msm_gem_address_space*) ;
 int FUNC_4 (int ,struct msm_gem_address_space*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 struct mdp4_kms* FUNC_7 (int ) ;
 int FUNC_8 (struct msm_kms*) ;

__attribute__((used)) static void FUNC_9(struct msm_kms *VAR_1)
{
 struct mdp4_kms *VAR_2 = FUNC_7(FUNC_8(VAR_1));
 struct device *VAR_3 = VAR_2->dev->dev;
 struct msm_gem_address_space *VAR_4 = VAR_1->aspace;

 if (VAR_2->blank_cursor_iova)
  FUNC_4(VAR_2->blank_cursor_bo, VAR_1->aspace);
 FUNC_1(VAR_2->blank_cursor_bo);

 if (VAR_4) {
  VAR_4->mmu->funcs->detach(VAR_4->mmu,
    VAR_0, FUNC_0(VAR_0));
  FUNC_3(VAR_4);
 }

 if (VAR_2->rpm_enabled)
  FUNC_5(VAR_3);

 FUNC_2(VAR_2);
}
