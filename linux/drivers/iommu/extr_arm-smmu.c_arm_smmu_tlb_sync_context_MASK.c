
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cbndx; } ;
struct arm_smmu_domain {int cb_lock; TYPE_1__ cfg; struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int dummy; } ;


 int FUNC_0 (struct arm_smmu_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct arm_smmu_device*,int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
 struct arm_smmu_domain *VAR_3 = VAR_2;
 struct arm_smmu_device *VAR_4 = VAR_3->smmu;
 unsigned long VAR_5;

 FUNC_2(&VAR_3->cb_lock, VAR_5);
 FUNC_1(VAR_4, FUNC_0(VAR_4, VAR_3->cfg.cbndx),
       VAR_1, VAR_0);
 FUNC_3(&VAR_3->cb_lock, VAR_5);
}
