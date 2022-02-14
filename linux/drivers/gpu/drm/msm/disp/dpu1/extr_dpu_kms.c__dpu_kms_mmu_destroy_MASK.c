
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_mmu {TYPE_1__* funcs; } ;
struct TYPE_5__ {TYPE_3__* aspace; } ;
struct dpu_kms {TYPE_2__ base; } ;
struct TYPE_6__ {struct msm_mmu* mmu; } ;
struct TYPE_4__ {int (* detach ) (struct msm_mmu*,char const**,int ) ;} ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct msm_mmu*,char const**,int ) ;

__attribute__((used)) static void FUNC_3(struct dpu_kms *VAR_1)
{
 struct msm_mmu *VAR_2;

 if (!VAR_1->base.aspace)
  return;

 VAR_2 = VAR_1->base.aspace->mmu;

 VAR_2->funcs->detach(VAR_2, (const char **)VAR_0,
   FUNC_0(VAR_0));
 FUNC_1(VAR_1->base.aspace);

 VAR_1->base.aspace = ((void*)0);
}
