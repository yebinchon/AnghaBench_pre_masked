
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int asid; int cbndx; } ;
struct arm_smmu_domain {TYPE_1__ cfg; int smmu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct arm_smmu_domain *VAR_2 = VAR_1;




 FUNC_2();
 FUNC_0(VAR_2->smmu, VAR_2->cfg.cbndx,
     VAR_0, VAR_2->cfg.asid);
 FUNC_1(VAR_1);
}
